
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const ut8 ;


 scalar_t__* FUNC_0 (scalar_t__ const*,int) ;

int FUNC_1(const ut8 *VAR_0, ut8 VAR_1, int VAR_2) {
 const ut8 *VAR_3 = FUNC_0 (VAR_0, VAR_2);
 int VAR_4 = 1;
 while (VAR_3 && *VAR_3 != VAR_1 && (VAR_2 > 0)) {
  VAR_2 = VAR_2 - (VAR_3 - VAR_0);
  VAR_3 = FUNC_0 (VAR_3 + 1, VAR_2 - 1);
  VAR_4++;
 }
 return VAR_4;
}
