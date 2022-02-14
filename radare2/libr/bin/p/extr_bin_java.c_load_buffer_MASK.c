
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut64 ;
struct r_bin_java_obj_t {int file; } ;
struct TYPE_3__ {scalar_t__ file; } ;
typedef int Sdb ;
typedef int RBuffer ;
typedef TYPE_1__ RBinFile ;


 int FUNC_0 (struct r_bin_java_obj_t*) ;
 struct r_bin_java_obj_t* FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static bool FUNC_5(RBinFile * VAR_0, void **VAR_1, RBuffer *VAR_2, ut64 VAR_3, Sdb *VAR_4) {
 struct r_bin_java_obj_t *VAR_5 = ((void*)0);
 RBuffer *VAR_6 = FUNC_3 (VAR_2);
 VAR_5 = FUNC_1 (VAR_6, VAR_3, VAR_4);
 if (!VAR_5) {
  return 0;
 }
 *VAR_1 = VAR_5;
 FUNC_0 (VAR_5);
 if (VAR_0 && VAR_0->file) {
  VAR_5->file = FUNC_4 (VAR_0->file);
 }
 FUNC_2 (VAR_6);
 return 1;
}
