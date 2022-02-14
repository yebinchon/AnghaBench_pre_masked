
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int m_pid; scalar_t__ m_tmStart; scalar_t__ m_tmLastCheckPoint; scalar_t__ m_tmReqBegin; int m_iReqCounter; } ;
typedef TYPE_1__ lsapi_child_status ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (char*,int ,int,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (char*,int,char*,int,int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8( lsapi_child_status * VAR_1, long VAR_2 )
{
    char VAR_3[1024];
    if ( VAR_0 )
    {
        if ( FUNC_3( VAR_0, 0 ) == 0 )
            return;
    }

    FUNC_4("Possible runaway process, PPID: %d, PID: %d, "
             "reqCount: %d, process time: %ld, checkpoint time: %ld, start "
             "time: %ld\n", FUNC_2(), VAR_1->m_pid,
             VAR_1->m_iReqCounter, VAR_2 - VAR_1->m_tmReqBegin,
             VAR_2 - VAR_1->m_tmLastCheckPoint, VAR_2 - VAR_1->m_tmStart );

    VAR_0 = FUNC_1();
    if (VAR_0 == 0)
    {
        FUNC_6( VAR_3, 1024, "gdb --batch -ex \"attach %d\" -ex \"set height 0\" "
                "-ex \"bt\" >&2;PATH=$PATH:/usr/sbin lsof -p %d >&2",
                VAR_1->m_pid, VAR_1->m_pid );
        if ( FUNC_7( VAR_3 ) == -1 )
            FUNC_5( "system()" );
        FUNC_0( 0 );
    }
}
