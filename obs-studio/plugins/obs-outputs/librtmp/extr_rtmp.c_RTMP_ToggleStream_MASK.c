
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ status; } ;
struct TYPE_7__ {int m_pausing; int m_pauseStamp; TYPE_1__ m_read; } ;
typedef TYPE_2__ RTMP ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int) ;

int
FUNC_3(RTMP *VAR_3)
{
    int VAR_4;

    if (!VAR_3->m_pausing)
    {
        if (FUNC_0(VAR_3) && VAR_3->m_read.status == VAR_1)
            VAR_3->m_read.status = 0;

        VAR_4 = FUNC_1(VAR_3, VAR_2, VAR_3->m_pauseStamp);
        if (!VAR_4)
            return VAR_4;

        VAR_3->m_pausing = 1;
        FUNC_2(1);
    }
    VAR_4 = FUNC_1(VAR_3, VAR_0, VAR_3->m_pauseStamp);
    VAR_3->m_pausing = 3;
    return VAR_4;
}
