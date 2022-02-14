
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut32 ;
typedef scalar_t__ mach0_ut ;
struct TYPE_4__ {int buf; } ;
typedef TYPE_1__ RBinFile ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;
 char* FUNC_2 (int,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,scalar_t__,int *,int) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (scalar_t__,int*,int*,TYPE_1__*) ;

__attribute__((used)) static char *FUNC_7(RBinFile *VAR_1, mach0_ut VAR_2, ut32 *VAR_3, ut32 *VAR_4) {
 FUNC_5 (VAR_1 && VAR_3 && VAR_4, ((void*)0));

 mach0_ut VAR_5 = FUNC_6 (VAR_2, VAR_3, VAR_4, VAR_1);
 if (VAR_5 == 0 || *VAR_4 <= 1) {
  return ((void*)0);
 }

 int VAR_6 = FUNC_1 (VAR_0, *VAR_4);
 char *VAR_7 = FUNC_2 (1, VAR_6 + 1);
 int VAR_8 = FUNC_4 (VAR_1->buf, VAR_5, (ut8 *)VAR_7, VAR_6);
 if (VAR_8 < VAR_6) {
  FUNC_3 ("Error reading\n");
  FUNC_0 (VAR_7);
  return ((void*)0);
 }

 return VAR_7;
}
