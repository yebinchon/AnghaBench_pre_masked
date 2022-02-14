
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
     const char *VAR_3, int VAR_4, const char **VAR_5)
{
 u16 *VAR_6 = FUNC_3(VAR_1);
 u32 *VAR_7 = FUNC_1(VAR_1);
 u16 *VAR_8 = FUNC_5(VAR_1);
 u16 *VAR_9 = FUNC_2(VAR_1);
 u32 *VAR_10 = FUNC_0(VAR_1);
 unsigned int VAR_11 = VAR_2, VAR_12;

 *VAR_5 = ((void*)0);
 if (VAR_11 == 0)
  return 0;


 if (VAR_1->tables[VAR_0]) {

  u8 *VAR_13 = FUNC_4(VAR_1);

  for (; VAR_4; VAR_4--) {
   VAR_12 = FUNC_6(VAR_7[VAR_11]) + VAR_13[(u8) *VAR_3++];
   if (VAR_9[VAR_12] == VAR_11)
    VAR_11 = VAR_8[VAR_12];
   else
    VAR_11 = VAR_6[VAR_11];
   if (VAR_10[VAR_11])
    break;
  }
 } else {

  for (; VAR_4; VAR_4--) {
   VAR_12 = FUNC_6(VAR_7[VAR_11]) + (u8) *VAR_3++;
   if (VAR_9[VAR_12] == VAR_11)
    VAR_11 = VAR_8[VAR_12];
   else
    VAR_11 = VAR_6[VAR_11];
   if (VAR_10[VAR_11])
    break;
  }
 }

 *VAR_5 = VAR_3;
 return VAR_11;
}
