
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char ut8 ;
typedef int st32 ;


 char* FUNC_0 (char const*,int) ;

__attribute__((used)) static st32 FUNC_1(const ut8 *VAR_0, int VAR_1) {
 ut8 VAR_2;
 int VAR_3, VAR_4 = 0;
 const ut8 *VAR_5 = FUNC_0 (VAR_0, VAR_1);
 VAR_2 = (*VAR_5 == '\t');
 VAR_1 -= (VAR_5 - VAR_0) + 1;
 for (VAR_3 = 0; VAR_3 < 30; VAR_3++) {
  VAR_5++;
  VAR_5 = FUNC_0 (VAR_5, VAR_1);
  if (!VAR_5 || *VAR_5 == 10) {
   if (VAR_2) {
    return VAR_4 * (-1);
   }
   return VAR_4;
  }
  VAR_4 = (VAR_4 << 1);
  VAR_4 = VAR_4 + (*VAR_5 == '\t');
  VAR_1 = VAR_1 - (VAR_5 - VAR_0) - 1;
 }
 return VAR_2? VAR_4 * (-1): VAR_4;
}
