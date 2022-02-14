
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct sw842_param {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct sw842_param*,int,int) ;
 size_t** VAR_6 ;

__attribute__((used)) static bool FUNC_1(struct sw842_param *VAR_7, u8 VAR_8)
{
 u8 *VAR_9 = VAR_6[VAR_8];
 int VAR_10, VAR_11, VAR_12 = 0;

 if (VAR_8 >= VAR_0)
  return 0;

 for (VAR_10 = 0; VAR_10 < 4; VAR_10++) {
  if (VAR_9[VAR_10] & VAR_1) {
   if (VAR_9[VAR_10] & VAR_3)
    VAR_11 = FUNC_0(VAR_7, 2, VAR_12 >> 1);
   else if (VAR_9[VAR_10] & VAR_4)
    VAR_11 = FUNC_0(VAR_7, 4, VAR_12 >> 2);
   else if (VAR_9[VAR_10] & VAR_5)
    VAR_11 = FUNC_0(VAR_7, 8, 0);
   else
    return 0;
   if (!VAR_11)
    return 0;
  }

  VAR_12 += VAR_9[VAR_10] & VAR_2;
 }

 return 1;
}
