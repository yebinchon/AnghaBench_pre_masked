
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int * namespace; } ;


 int * FUNC_0 (int ) ;
 struct symbol* FUNC_1 (char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char const*,char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(const char *VAR_0, const char *VAR_1)
{
 struct symbol *VAR_2 = FUNC_1(VAR_0);





 if (!VAR_2) {
  FUNC_3("Could not update namespace(%s) for symbol %s\n",
         VAR_1, VAR_0);
  return;
 }

 FUNC_2(VAR_2->namespace);
 VAR_2->namespace =
  VAR_1 && VAR_1[0] ? FUNC_0(FUNC_4(VAR_1)) : ((void*)0);
}
