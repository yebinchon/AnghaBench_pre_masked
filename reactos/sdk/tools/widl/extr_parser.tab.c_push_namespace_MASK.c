
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct namespace {int type_hash; int children; int entry; struct namespace* parent; int name; } ;


 struct namespace* VAR_0 ;
 struct namespace* FUNC_0 (struct namespace*,char const*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int) ;
 struct namespace* FUNC_4 (int) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static void FUNC_6(const char *VAR_1)
{
  struct namespace *VAR_2;

  VAR_2 = FUNC_0(VAR_0, VAR_1);
  if(!VAR_2) {
    VAR_2 = FUNC_4(sizeof(*VAR_2));
    VAR_2->name = FUNC_5(VAR_1);
    VAR_2->parent = VAR_0;
    FUNC_1(&VAR_0->children, &VAR_2->entry);
    FUNC_2(&VAR_2->children);
    FUNC_3(VAR_2->type_hash, 0, sizeof(VAR_2->type_hash));
  }

  VAR_0 = VAR_2;
}
