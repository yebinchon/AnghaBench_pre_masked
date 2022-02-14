
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int si_extmatch; } ;
struct TYPE_3__ {int ga_len; } ;


 TYPE_2__ FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2()
{
    if (VAR_0.ga_len)
    {
 FUNC_1(FUNC_0(VAR_0.ga_len - 1).si_extmatch);
 --VAR_0.ga_len;
    }

    VAR_2 = -1;


    if (VAR_1 >= VAR_0.ga_len)
 VAR_1 = -1;
}
