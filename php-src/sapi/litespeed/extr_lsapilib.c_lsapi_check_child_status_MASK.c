
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ m_pid; int m_iKillSent; long m_tmWaitBegin; long m_tmReqBegin; int m_inProcess; } ;
typedef TYPE_1__ lsapi_child_status ;
struct TYPE_5__ {int m_iCurChildren; int m_iMaxChildren; int m_iMaxIdleChildren; long m_iMaxReqProcessTime; TYPE_1__* m_pChildrenStatusCur; TYPE_1__* m_pChildrenStatus; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,long) ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (char*,int,...) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_4( long VAR_7 )
{
    int VAR_8 = 0;
    int VAR_9;
    int VAR_10 = 0;
    int VAR_11 = 0;
    lsapi_child_status * VAR_12 = VAR_4->m_pChildrenStatus;
    lsapi_child_status * VAR_13 = VAR_4->m_pChildrenStatusCur;
    while( VAR_12 < VAR_13 )
    {
        VAR_9 = 0;
        if ( VAR_12->m_pid != 0 )
        {
            ++VAR_11;
            if ( !VAR_12->m_inProcess )
            {

                if (VAR_4->m_iCurChildren - VAR_10
                        > VAR_4->m_iMaxChildren
                    || VAR_8 > VAR_4->m_iMaxIdleChildren)
                {
                    ++VAR_12->m_iKillSent;

                }
                else
                {
                    if (VAR_6> 0
                        && VAR_7 - VAR_12->m_tmWaitBegin > VAR_6 + 5)
                    {
                        ++VAR_12->m_iKillSent;

                    }
                }
                if ( !VAR_9 )
                    ++VAR_8;
            }
            else
            {
                if (VAR_7 - VAR_12->m_tmReqBegin >
                        VAR_4->m_iMaxReqProcessTime)
                {
                    if ((VAR_12->m_iKillSent % 5) == 0 && VAR_5)
                        FUNC_1( VAR_12, VAR_7 );
                    if ( VAR_12->m_iKillSent > 5 )
                    {
                        VAR_9 = VAR_1;
                        FUNC_3("Force killing runaway process PID: %d"
                                 " with SIGKILL\n", VAR_12->m_pid );
                    }
                    else
                    {
                        VAR_9 = VAR_2;
                        FUNC_3("Killing runaway process PID: %d with "
                                 "SIGTERM\n", VAR_12->m_pid );
                    }
                }
            }
            if ( VAR_9 )
            {
                if (( FUNC_2( VAR_12->m_pid, VAR_9 ) == -1 ) &&
                    ( VAR_3 == VAR_0 ))
                {
                    VAR_12->m_pid = 0;
                    --VAR_11;
                }
                else
                {
                    ++VAR_12->m_iKillSent;
                    ++VAR_10;
                }
            }
        }
        ++VAR_12;
    }
    if ( FUNC_0( VAR_4->m_iCurChildren - VAR_11 ) > 1 )
    {
        FUNC_3("Children tracking is wrong: Cur Children: %d,"
                  " count: %d, idle: %d, dying: %d\n",
                  VAR_4->m_iCurChildren, VAR_11, VAR_8, VAR_10 );
    }
}
