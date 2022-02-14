
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct aa_dfa {scalar_t__* tables; } ;


 int * FUNC_0 (struct aa_dfa*) ;
 int * FUNC_1 (struct aa_dfa*) ;
 int * FUNC_2 (struct aa_dfa*) ;
 size_t* FUNC_3 (struct aa_dfa*) ;
 int * FUNC_4 (struct aa_dfa*) ;
 size_t VAR_0 ;
 int FUNC_5 (unsigned int,int *,int *,int *,int *,size_t) ;

unsigned int FUNC_6(struct aa_dfa *VAR_1, unsigned int VAR_2,
     const char VAR_3)
{
 u16 *VAR_4 = FUNC_2(VAR_1);
 u32 *VAR_5 = FUNC_0(VAR_1);
 u16 *VAR_6 = FUNC_4(VAR_1);
 u16 *VAR_7 = FUNC_1(VAR_1);


 if (VAR_1->tables[VAR_0]) {

  u8 *VAR_8 = FUNC_3(VAR_1);
  FUNC_5(VAR_2, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8[(u8) VAR_3]);
 } else
  FUNC_5(VAR_2, VAR_4, VAR_5, VAR_6, VAR_7, (u8) VAR_3);

 return VAR_2;
}
