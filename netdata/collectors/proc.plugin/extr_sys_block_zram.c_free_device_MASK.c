
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int st_comp_ratio; int st_alloc_efficiency; int st_savings; int st_usage; } ;
typedef TYPE_1__ ZRAM_DEVICE ;
typedef int DICTIONARY ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(DICTIONARY *VAR_0, char *VAR_1)
{
    ZRAM_DEVICE *VAR_2 = (ZRAM_DEVICE*)FUNC_1(VAR_0, VAR_1);
    FUNC_2("ZRAM : Disabling monitoring of device %s", VAR_1);
    FUNC_3(VAR_2->st_usage);
    FUNC_3(VAR_2->st_savings);
    FUNC_3(VAR_2->st_alloc_efficiency);
    FUNC_3(VAR_2->st_comp_ratio);
    FUNC_0(VAR_0, VAR_1);
}
