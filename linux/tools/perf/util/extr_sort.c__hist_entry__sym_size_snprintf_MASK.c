
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;


 int FUNC_0 (char*,size_t,char*,unsigned int,char*) ;
 char* FUNC_1 (struct symbol*) ;

__attribute__((used)) static int FUNC_2(struct symbol *VAR_0, char *VAR_1,
       size_t VAR_2, unsigned int VAR_3)
{
 if (VAR_0)
  return FUNC_0(VAR_1, VAR_2, "%*d", VAR_3, FUNC_1(VAR_0));

 return FUNC_0(VAR_1, VAR_2, "%*s", VAR_3, "unknown");
}
