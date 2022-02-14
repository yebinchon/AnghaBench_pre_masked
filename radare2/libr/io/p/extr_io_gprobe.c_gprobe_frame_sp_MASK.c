
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef scalar_t__ ut64 ;
typedef int RBuffer ;


 int FUNC_0 (int const*,scalar_t__) ;
 int FUNC_1 (int *,int *,int) ;
 int * FUNC_2 (int *,scalar_t__*) ;
 int FUNC_3 (int *,int const*,int) ;

__attribute__((used)) static void FUNC_4(RBuffer *VAR_0) {
 ut64 VAR_1;
 const ut8 *VAR_2 = FUNC_2 (VAR_0, &VAR_1);
 VAR_1 += 2;
 ut8 VAR_3;

 FUNC_3 (VAR_0, (const ut8 *)&VAR_1, 1);
 VAR_3 = FUNC_0 (VAR_2, VAR_1 - 1);

 FUNC_1 (VAR_0, &VAR_3, 1);
}
