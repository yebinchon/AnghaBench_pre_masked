
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u32 ;
typedef unsigned int u16 ;
struct aa_dfa {scalar_t__* tables; } ;


 scalar_t__* FUNC_0 (struct aa_dfa*) ;
 scalar_t__* FUNC_1 (struct aa_dfa*) ;
 unsigned int* FUNC_2 (struct aa_dfa*) ;
 unsigned int* FUNC_3 (struct aa_dfa*) ;
 size_t* FUNC_4 (struct aa_dfa*) ;
 unsigned int* FUNC_5 (struct aa_dfa*) ;
 size_t VAR_0 ;
 size_t FUNC_6 (scalar_t__) ;

unsigned int FUNC_7(struct aa_dfa *VAR_1, unsigned int VAR_2,
    const char *VAR_3, const char **VAR_4)
{
 u16 *VAR_5 = FUNC_3(VAR_1);
 u32 *VAR_6 = FUNC_1(VAR_1);
 u16 *VAR_7 = FUNC_5(VAR_1);
 u16 *VAR_8 = FUNC_2(VAR_1);
 u32 *VAR_9 = FUNC_0(VAR_1);
 unsigned int VAR_10 = VAR_2, VAR_11;

 if (VAR_10 == 0)
  return 0;


 if (VAR_1->tables[VAR_0]) {

  u8 *VAR_12 = FUNC_4(VAR_1);

  while (*VAR_3) {
   VAR_11 = FUNC_6(VAR_6[VAR_10]) + VAR_12[(u8) *VAR_3++];
   if (VAR_8[VAR_11] == VAR_10)
    VAR_10 = VAR_7[VAR_11];
   else
    VAR_10 = VAR_5[VAR_10];
   if (VAR_9[VAR_10])
    break;
  }
 } else {

  while (*VAR_3) {
   VAR_11 = FUNC_6(VAR_6[VAR_10]) + (u8) *VAR_3++;
   if (VAR_8[VAR_11] == VAR_10)
    VAR_10 = VAR_7[VAR_11];
   else
    VAR_10 = VAR_5[VAR_10];
   if (VAR_9[VAR_10])
    break;
  }
 }

 *VAR_4 = VAR_3;
 return VAR_10;
}
