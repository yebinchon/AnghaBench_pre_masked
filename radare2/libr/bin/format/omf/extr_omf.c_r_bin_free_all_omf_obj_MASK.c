
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ names; scalar_t__ symbols; scalar_t__ sections; scalar_t__ records; } ;
typedef TYPE_1__ r_bin_omf_obj ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(r_bin_omf_obj *VAR_0) {
 if (VAR_0) {
  if (VAR_0->records) {
   FUNC_2 (VAR_0);
  }
  if (VAR_0->sections) {
   FUNC_3 (VAR_0);
  }
  if (VAR_0->symbols) {
   FUNC_4 (VAR_0);
  }
  if (VAR_0->names) {
   FUNC_1 (VAR_0);
  }
  FUNC_0 (VAR_0);
 }
}
