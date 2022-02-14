
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
typedef unsigned int u16 ;
struct match_workbuf {unsigned int* history; size_t pos; } ;
struct aa_dfa {scalar_t__* tables; } ;


 int FUNC_0 (int) ;
 int * FUNC_1 (struct aa_dfa*) ;
 unsigned int* FUNC_2 (struct aa_dfa*) ;
 unsigned int* FUNC_3 (struct aa_dfa*) ;
 size_t* FUNC_4 (struct aa_dfa*) ;
 unsigned int* FUNC_5 (struct aa_dfa*) ;
 size_t VAR_0 ;
 unsigned int FUNC_6 (struct aa_dfa*,unsigned int,char const*) ;
 size_t FUNC_7 (int ) ;
 int FUNC_8 (struct match_workbuf*) ;
 scalar_t__ FUNC_9 (struct match_workbuf*,unsigned int,unsigned int*) ;

__attribute__((used)) static unsigned int FUNC_10(struct aa_dfa *VAR_1, unsigned int VAR_2,
     const char *VAR_3, struct match_workbuf *VAR_4,
     unsigned int *VAR_5)
{
 u16 *VAR_6 = FUNC_3(VAR_1);
 u32 *VAR_7 = FUNC_1(VAR_1);
 u16 *VAR_8 = FUNC_5(VAR_1);
 u16 *VAR_9 = FUNC_2(VAR_1);
 unsigned int VAR_10 = VAR_2, VAR_11;

 FUNC_0(!VAR_1);
 FUNC_0(!VAR_3);
 FUNC_0(!VAR_4);
 FUNC_0(!VAR_5);

 *VAR_5 = 0;
 if (VAR_10 == 0)
  return 0;


 if (VAR_1->tables[VAR_0]) {

  u8 *VAR_12 = FUNC_4(VAR_1);

  while (*VAR_3) {
   unsigned int VAR_13;

   VAR_4->history[VAR_4->pos] = VAR_10;
   VAR_11 = FUNC_7(VAR_7[VAR_10]) + VAR_12[(u8) *VAR_3++];
   if (VAR_9[VAR_11] == VAR_10)
    VAR_10 = VAR_8[VAR_11];
   else
    VAR_10 = VAR_6[VAR_10];
   if (FUNC_9(VAR_4, VAR_10, &VAR_13)) {
    VAR_10 = FUNC_6(VAR_1, VAR_10, VAR_3);
    *VAR_5 -= VAR_13;
    goto out;
   }
   FUNC_8(VAR_4);
   (*VAR_5)++;
  }
 } else {

  while (*VAR_3) {
   unsigned int VAR_14;

   VAR_4->history[VAR_4->pos] = VAR_10;
   VAR_11 = FUNC_7(VAR_7[VAR_10]) + (u8) *VAR_3++;
   if (VAR_9[VAR_11] == VAR_10)
    VAR_10 = VAR_8[VAR_11];
   else
    VAR_10 = VAR_6[VAR_10];
   if (FUNC_9(VAR_4, VAR_10, &VAR_14)) {
    VAR_10 = FUNC_6(VAR_1, VAR_10, VAR_3);
    *VAR_5 -= VAR_14;
    goto out;
   }
   FUNC_8(VAR_4);
   (*VAR_5)++;
  }
 }

out:
 if (!VAR_10)
  *VAR_5 = 0;
 return VAR_10;
}
