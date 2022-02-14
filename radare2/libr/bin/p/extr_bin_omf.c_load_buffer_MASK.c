
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;
typedef int Sdb ;
typedef int RBuffer ;
typedef int RBinFile ;


 void* FUNC_0 (int const*,int ) ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (int const*,int) ;

__attribute__((used)) static bool FUNC_3 (RBinFile *VAR_0, void **VAR_1, RBuffer *VAR_2, ut64 VAR_3, Sdb *VAR_4) {
 ut64 VAR_5;
 const ut8 *VAR_6 = FUNC_1 (VAR_2, &VAR_5);
 FUNC_2 (VAR_6, 0);
 *VAR_1 = FUNC_0 (VAR_6, VAR_5);
 return *VAR_1 != ((void*)0);
}
