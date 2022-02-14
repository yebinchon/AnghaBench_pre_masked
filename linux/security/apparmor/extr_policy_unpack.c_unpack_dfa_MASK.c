
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_ext {int start; int pos; } ;
struct aa_dfa {int dummy; } ;


 size_t FUNC_0 (size_t,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct aa_dfa*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 struct aa_dfa* FUNC_4 (char*,size_t,int) ;
 size_t FUNC_5 (struct aa_ext*,char**,char*) ;

__attribute__((used)) static struct aa_dfa *FUNC_6(struct aa_ext *VAR_2)
{
 char *VAR_3 = ((void*)0);
 size_t VAR_4;
 struct aa_dfa *VAR_5 = ((void*)0);

 VAR_4 = FUNC_5(VAR_2, &VAR_3, "aadfa");
 if (VAR_4) {





  size_t VAR_6 = VAR_3 - (char *) VAR_2->start -
   ((VAR_2->pos - VAR_2->start) & 7);
  size_t VAR_7 = FUNC_0(VAR_6, 8) - VAR_6;
  int VAR_8 = FUNC_2(VAR_1) |
   FUNC_3(VAR_1) | VAR_0;
  VAR_5 = FUNC_4(VAR_3 + VAR_7, VAR_4 - VAR_7, VAR_8);

  if (FUNC_1(VAR_5))
   return VAR_5;

 }

 return VAR_5;
}
