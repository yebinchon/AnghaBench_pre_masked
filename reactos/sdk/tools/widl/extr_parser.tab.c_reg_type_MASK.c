
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* c_name; } ;
typedef TYPE_1__ type_t ;
struct rtype {char const* name; int t; struct rtype* next; TYPE_1__* type; } ;
struct namespace {struct rtype** type_hash; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 char const* FUNC_2 (struct namespace*,char*,char*,char const*) ;
 struct namespace VAR_0 ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (struct namespace*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct rtype* FUNC_5 (int) ;

type_t *FUNC_6(type_t *VAR_3, const char *VAR_4, struct namespace *VAR_5, int VAR_6)
{
  struct rtype *VAR_7;
  int VAR_8;
  if (!VAR_4) {
    FUNC_0("registering named type without name\n");
    return VAR_3;
  }
  if (!VAR_5)
    VAR_5 = &VAR_0;
  VAR_8 = FUNC_3(VAR_4);
  VAR_7 = FUNC_5(sizeof(struct rtype));
  VAR_7->name = VAR_4;
  if (FUNC_4(VAR_5))
    VAR_3->c_name = VAR_4;
  else
    VAR_3->c_name = FUNC_2(VAR_5, "__x_", "_C", VAR_4);
  VAR_7->type = VAR_3;
  VAR_7->t = VAR_6;
  VAR_7->next = VAR_5->type_hash[VAR_8];
  VAR_5->type_hash[VAR_8] = VAR_7;
  if ((VAR_6 == VAR_1 || VAR_6 == VAR_2))
    FUNC_1(VAR_3);
  return VAR_3;
}
