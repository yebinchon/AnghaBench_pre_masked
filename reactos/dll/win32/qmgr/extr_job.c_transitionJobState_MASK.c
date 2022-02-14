
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int cs; } ;
struct TYPE_4__ {scalar_t__ state; } ;
typedef TYPE_1__ BackgroundCopyJobImpl ;
typedef int BOOL ;
typedef scalar_t__ BG_JOB_STATE ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;

BOOL FUNC_2(BackgroundCopyJobImpl *VAR_3, BG_JOB_STATE VAR_4, BG_JOB_STATE VAR_5)
{
    BOOL VAR_6 = VAR_0;

    FUNC_0(&VAR_2.cs);
    if (VAR_3->state == VAR_4)
    {
        VAR_3->state = VAR_5;
        VAR_6 = VAR_1;
    }
    FUNC_1(&VAR_2.cs);
    return VAR_6;
}
