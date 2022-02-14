
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int len; unsigned int hash; struct item* next; int name; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 struct item** VAR_1 ;
 struct item* FUNC_1 (int) ;
 int FUNC_2 (int ,char const*,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(const char *VAR_2, int VAR_3, unsigned int VAR_4)
{
 struct item *VAR_5 = FUNC_1(sizeof(*VAR_5) + VAR_3);

 if (!VAR_5) {
  FUNC_3("fixdep:malloc");
  FUNC_0(1);
 }
 FUNC_2(VAR_5->name, VAR_2, VAR_3);
 VAR_5->len = VAR_3;
 VAR_5->hash = VAR_4;
 VAR_5->next = VAR_1[VAR_4 % VAR_0];
 VAR_1[VAR_4 % VAR_0] = VAR_5;
}
