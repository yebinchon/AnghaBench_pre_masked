
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int bytea ;
struct TYPE_4__ {int * lower; int * upper; } ;
typedef TYPE_1__ GBT_VARKEY_R ;
typedef int GBT_VARKEY ;
typedef int FmgrInfo ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_1__*) ;
 TYPE_1__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static GBT_VARKEY *
FUNC_4(GBT_VARKEY *VAR_0, FmgrInfo *VAR_1)
{
 GBT_VARKEY *VAR_2 = VAR_0;
 GBT_VARKEY_R VAR_3 = FUNC_2(VAR_0);
 bytea *VAR_4;

 VAR_4 = FUNC_0(VAR_3.lower);
 VAR_3.upper = VAR_3.lower = VAR_4;
 VAR_2 = FUNC_1(&VAR_3);
 FUNC_3(VAR_4);

 return VAR_2;

}
