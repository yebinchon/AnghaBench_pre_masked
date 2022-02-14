
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_profile {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct aa_profile*) ;
 int FUNC_2 (struct aa_profile*,struct aa_profile*) ;
 int FUNC_3 (struct aa_profile**,int,int,int ,int *) ;
 int VAR_1 ;
 int FUNC_4 (struct aa_profile**,int) ;

int FUNC_5(struct aa_profile **VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6 = 0;

 FUNC_0(VAR_3 < 1);
 FUNC_0(!VAR_2);


 if (VAR_3 > 8) {
  FUNC_3(VAR_2, VAR_3, sizeof(struct aa_profile *), VAR_1, ((void*)0));
  VAR_6 = FUNC_4(VAR_2, VAR_3);
  goto out;
 }


 for (VAR_5 = 1; VAR_5 < VAR_3; VAR_5++) {
  struct aa_profile *VAR_7 = VAR_2[VAR_5];
  int VAR_8, VAR_9;

  for (VAR_8 = VAR_5 - 1 - VAR_6; VAR_8 >= 0; VAR_8--) {
   int VAR_10 = FUNC_2(VAR_2[VAR_8], VAR_7);

   if (VAR_10 == 0) {

    FUNC_1(VAR_7);
    VAR_6++;
    goto continue_outer;
   } else if (VAR_10 < 0)
    break;
  }

  VAR_8++;

  for (VAR_9 = VAR_5 - VAR_6; VAR_9 > VAR_8; VAR_9--)
   VAR_2[VAR_9] = VAR_2[VAR_9 - 1];
  VAR_2[VAR_8] = VAR_7;
continue_outer:
  ;
 }

 FUNC_0(VAR_6 < 0);

out:
 if (VAR_4 & VAR_0)
  VAR_2[VAR_3 - VAR_6] = ((void*)0);

 return VAR_6;
}
