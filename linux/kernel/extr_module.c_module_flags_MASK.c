
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {scalar_t__ state; scalar_t__ taints; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct module*,char*) ;

__attribute__((used)) static char *FUNC_2(struct module *VAR_3, char *VAR_4)
{
 int VAR_5 = 0;

 FUNC_0(VAR_3->state == VAR_2);
 if (VAR_3->taints ||
     VAR_3->state == VAR_1 ||
     VAR_3->state == VAR_0) {
  VAR_4[VAR_5++] = '(';
  VAR_5 += FUNC_1(VAR_3, VAR_4 + VAR_5);

  if (VAR_3->state == VAR_1)
   VAR_4[VAR_5++] = '-';

  if (VAR_3->state == VAR_0)
   VAR_4[VAR_5++] = '+';
  VAR_4[VAR_5++] = ')';
 }
 VAR_4[VAR_5] = '\0';

 return VAR_4;
}
