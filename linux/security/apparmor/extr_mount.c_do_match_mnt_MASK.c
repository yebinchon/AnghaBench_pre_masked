
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_perms {int allow; } ;
struct aa_dfa {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (struct aa_dfa*,unsigned int,void*) ;
 unsigned int FUNC_2 (struct aa_dfa*,unsigned int) ;
 struct aa_perms FUNC_3 (struct aa_dfa*,unsigned int) ;
 unsigned int FUNC_4 (struct aa_dfa*,unsigned int,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct aa_dfa *VAR_2, unsigned int VAR_3,
   const char *VAR_4, const char *VAR_5,
   const char *VAR_6, unsigned long VAR_7,
   void *VAR_8, bool VAR_9, struct aa_perms *VAR_10)
{
 unsigned int VAR_11;

 FUNC_0(!VAR_2);
 FUNC_0(!VAR_10);

 VAR_11 = FUNC_1(VAR_2, VAR_3, VAR_4);
 VAR_11 = FUNC_2(VAR_2, VAR_11);
 if (!VAR_11)
  return 1;

 if (VAR_5)
  VAR_11 = FUNC_1(VAR_2, VAR_11, VAR_5);
 VAR_11 = FUNC_2(VAR_2, VAR_11);
 if (!VAR_11)
  return 2;

 if (VAR_6)
  VAR_11 = FUNC_1(VAR_2, VAR_11, VAR_6);
 VAR_11 = FUNC_2(VAR_2, VAR_11);
 if (!VAR_11)
  return 3;

 VAR_11 = FUNC_4(VAR_2, VAR_11, VAR_7);
 if (!VAR_11)
  return 4;
 *VAR_10 = FUNC_3(VAR_2, VAR_11);
 if (VAR_10->allow & VAR_0)
  return 0;


 if (VAR_8 && !VAR_9 && (VAR_10->allow & VAR_1)) {
  VAR_11 = FUNC_2(VAR_2, VAR_11);
  if (!VAR_11)
   return 4;

  VAR_11 = FUNC_1(VAR_2, VAR_11, VAR_8);
  if (!VAR_11)
   return 5;
  *VAR_10 = FUNC_3(VAR_2, VAR_11);
  if (VAR_10->allow & VAR_0)
   return 0;
 }


 return 4;
}
