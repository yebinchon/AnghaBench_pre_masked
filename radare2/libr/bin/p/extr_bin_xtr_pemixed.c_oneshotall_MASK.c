
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;
typedef int RList ;
typedef int RBinXtrData ;
typedef int RBin ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int const*,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int ) ;

__attribute__((used)) static RList * FUNC_3(RBin *VAR_4, const ut8 *VAR_5, ut64 VAR_6) {

 RBinXtrData *VAR_7 = FUNC_0 (VAR_4, VAR_5, VAR_6, VAR_0);

 if (!VAR_7) {
  return ((void*)0);
 }

 RList * VAR_8 = FUNC_2 (VAR_3);
 FUNC_1 (VAR_8, VAR_7);

 if ((VAR_7 = FUNC_0 (VAR_4, VAR_5, VAR_6, VAR_1))){
  FUNC_1 (VAR_8, VAR_7);
 }

 if ((VAR_7 = FUNC_0 (VAR_4, VAR_5, VAR_6, VAR_2))){
  FUNC_1 (VAR_8, VAR_7);
 }

 return VAR_8;
}
