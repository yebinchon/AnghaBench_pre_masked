
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int member_1; int member_5; int member_4; int member_3; int member_2; int member_0; } ;
struct TYPE_5__ {int member_1; int member_5; int member_4; int member_3; int member_2; int member_0; } ;
typedef int SecureProvider ;
typedef TYPE_1__ SecPkgInfoW ;
typedef TYPE_2__ SecPkgInfoA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,long,TYPE_2__ const*,TYPE_1__ const*) ;
 int * FUNC_1 (int *,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_2(void)
{
    SecureProvider *VAR_9 = FUNC_1(&VAR_3, &VAR_4, ((void*)0));

    const SecPkgInfoW VAR_10 = {VAR_0, 1, VAR_2, VAR_1,
                               VAR_6, VAR_8};
    const SecPkgInfoA VAR_11 = {VAR_0, 1, VAR_2, VAR_1,
                               VAR_5, VAR_7};
    FUNC_0(VAR_9, 1L, &VAR_11, &VAR_10);
}
