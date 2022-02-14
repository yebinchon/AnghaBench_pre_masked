
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;
typedef int buf ;
typedef int Sdb ;
typedef int RBuffer ;
typedef int RBinFile ;
typedef int N64Header ;


 scalar_t__ FUNC_0 (int *) ;
 void* FUNC_1 (int *,int *,int) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,int *,int) ;

__attribute__((used)) static bool FUNC_3(RBinFile *VAR_1, void **VAR_2, RBuffer *VAR_3, ut64 VAR_4, Sdb *VAR_5) {
 if (FUNC_0 (VAR_3)) {
  ut8 VAR_6[sizeof (N64Header)] = {0};
  FUNC_2 (VAR_3, 0, VAR_6, sizeof (VAR_6));
  *VAR_2 = FUNC_1 (&VAR_0, VAR_6, sizeof (N64Header));
  return 1;
 }
 return 0;
}
