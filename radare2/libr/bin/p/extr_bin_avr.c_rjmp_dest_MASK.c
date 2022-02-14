
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut64 ;
typedef int RBuffer ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static ut64 FUNC_1(ut64 VAR_0, RBuffer* VAR_1) {
 ut64 VAR_2 = 2 + VAR_0 + FUNC_0 (VAR_1, VAR_0) * 2;
 VAR_2 += ((FUNC_0 (VAR_1, VAR_0 + 1) & 0xf) * 2) << 8;
 return VAR_2;
}
