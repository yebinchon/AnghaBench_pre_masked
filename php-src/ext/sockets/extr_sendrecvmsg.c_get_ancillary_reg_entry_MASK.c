
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int key ;
typedef int ancillary_reg_entry ;
struct TYPE_3__ {int member_0; int member_1; } ;
typedef TYPE_1__ anc_reg_key ;
struct TYPE_4__ {int ht; int initialized; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *,char*,int) ;

ancillary_reg_entry *FUNC_4(int VAR_2, int VAR_3)
{
 anc_reg_key VAR_4 = { VAR_2, VAR_3 };
 ancillary_reg_entry *VAR_5;




 if (!VAR_1.initialized) {
  FUNC_0();
 }




 if ((VAR_5 = FUNC_3(&VAR_1.ht, (char*)&VAR_4, sizeof(VAR_4))) != ((void*)0)) {
  return VAR_5;
 } else {
  return ((void*)0);
 }
}
