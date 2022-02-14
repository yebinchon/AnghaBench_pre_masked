
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aa_dfa {TYPE_1__** tables; } ;
struct TYPE_2__ {size_t td_lolen; } ;


 int* FUNC_0 (struct aa_dfa*) ;
 size_t* FUNC_1 (struct aa_dfa*) ;
 size_t* FUNC_2 (struct aa_dfa*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t* FUNC_3 (struct aa_dfa*) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct aa_dfa *VAR_5)
{
 size_t VAR_6, VAR_7, VAR_8;
 int VAR_9 = -VAR_0;

 VAR_7 = VAR_5->tables[VAR_3]->td_lolen;
 VAR_8 = VAR_5->tables[VAR_4]->td_lolen;
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  if (!(FUNC_0(VAR_5)[VAR_6] & VAR_2) &&
      (FUNC_2(VAR_5)[VAR_6] >= VAR_7))
   goto out;
  if (FUNC_4(FUNC_0(VAR_5)[VAR_6]) + 255 >= VAR_8) {
   FUNC_5("AppArmor DFA next/check upper bounds error\n");
   goto out;
  }
 }

 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
  if (FUNC_3(VAR_5)[VAR_6] >= VAR_7)
   goto out;
  if (FUNC_1(VAR_5)[VAR_6] >= VAR_7)
   goto out;
 }


 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  size_t VAR_10, VAR_11;

  for (VAR_10 = VAR_6;
       (FUNC_0(VAR_5)[VAR_10] & VAR_2) &&
       !(FUNC_0(VAR_5)[VAR_10] & VAR_1);
       VAR_10 = VAR_11) {
   VAR_11 = FUNC_2(VAR_5)[VAR_10];
   if (VAR_10 == VAR_11)
    goto out;
   if (VAR_11 < VAR_10)
    break;
   FUNC_0(VAR_5)[VAR_10] |= VAR_1;
  }
 }
 VAR_9 = 0;

out:
 return VAR_9;
}
