
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int random_seed; int mbcinfo; int locinfo; int handle; int tid; } ;
typedef TYPE_1__ thread_data_t ;
struct TYPE_8__ {int mbcinfo; int locinfo; } ;
typedef int DWORD ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 TYPE_1__* FUNC_3 (int ,int ,int) ;
 int VAR_1 ;
 TYPE_5__* VAR_2 ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_7 (int ) ;
 int VAR_4 ;

thread_data_t *FUNC_8(void)
{
    thread_data_t *VAR_5;
    DWORD VAR_6 = FUNC_1();

    if (!(VAR_5 = FUNC_5( VAR_4 )))
    {
        if (!(VAR_5 = FUNC_3( FUNC_2(), VAR_0, sizeof(*VAR_5) )))
            FUNC_7( VAR_3 );
        if (!FUNC_6( VAR_4, VAR_5 )) FUNC_7( VAR_3 );
        VAR_5->tid = FUNC_0();
        VAR_5->handle = VAR_1;
        VAR_5->random_seed = 1;
        VAR_5->locinfo = VAR_2->locinfo;
        VAR_5->mbcinfo = VAR_2->mbcinfo;
    }
    FUNC_4( VAR_6 );
    return VAR_5;
}
