
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_profile {int dummy; } ;


 int FUNC_0 (int,...) ;
 int FUNC_1 (struct aa_profile*) ;
 int FUNC_2 (struct aa_profile*,struct aa_profile*) ;

__attribute__((used)) static inline int FUNC_3(struct aa_profile **VAR_0, int VAR_1)
{
 int VAR_2, VAR_3, VAR_4 = 0;

 FUNC_0(VAR_1 < 1);
 FUNC_0(!VAR_0);

 VAR_3 = 0;
 for (VAR_2 = 1; VAR_2 < VAR_1; VAR_2++) {
  int VAR_5 = FUNC_2(VAR_0[VAR_3], VAR_0[VAR_2]);

  FUNC_0(VAR_5 > 0, "vec not sorted");
  if (VAR_5 == 0) {

   FUNC_1(VAR_0[VAR_2]);
   VAR_4++;
   continue;
  }
  VAR_3++;
  if (VAR_4)
   VAR_0[VAR_3] = VAR_0[VAR_2];
 }

 FUNC_0(VAR_4 < 0);

 return VAR_4;
}
