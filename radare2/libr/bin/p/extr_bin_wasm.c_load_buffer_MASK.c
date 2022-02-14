
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut64 ;
typedef int Sdb ;
typedef int RBuffer ;
typedef int RBinFile ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 void* FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static bool FUNC_4 (RBinFile *VAR_1, void **VAR_2, RBuffer *VAR_3, ut64 VAR_4, Sdb *VAR_5) {
 FUNC_3 (VAR_1 && VAR_3 && FUNC_2 (VAR_3) != VAR_0, ((void*)0));

 if (FUNC_0 (VAR_3)) {
  *VAR_2 = FUNC_1 (VAR_1, VAR_3);
  return 1;
 }
 return 0;
}
