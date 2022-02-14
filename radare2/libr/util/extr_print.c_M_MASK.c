
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;


 int * FUNC_0 (int) ;
 int FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (int *,int,int) ;

__attribute__((used)) static ut8* FUNC_3(const ut8 *VAR_0, int VAR_1) {
 ut8 *VAR_2 = FUNC_0 (VAR_1 + 16);
 if (!VAR_2) {
  return ((void*)0);
 }
 FUNC_2 (VAR_2, 0xff, VAR_1 + 16);
 FUNC_1 (VAR_2, VAR_0, VAR_1);
 return VAR_2;
}
