
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct namespace_list {struct namespace_list* next; int namespace; } ;


 struct namespace_list* FUNC_0 (int ) ;
 int FUNC_1 (struct namespace_list*,char const*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(struct namespace_list **VAR_0, const char *VAR_1)
{
 struct namespace_list *VAR_2;

 if (!FUNC_1(*VAR_0, VAR_1)) {
  VAR_2 = FUNC_0(FUNC_2(sizeof(struct namespace_list) +
      FUNC_4(VAR_1) + 1));
  FUNC_3(VAR_2->namespace, VAR_1);
  VAR_2->next = *VAR_0;
  *VAR_0 = VAR_2;
 }
}
