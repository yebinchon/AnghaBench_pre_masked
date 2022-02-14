
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* name; struct namespace* namespace; } ;
typedef TYPE_1__ type_t ;
struct namespace {int dummy; } ;
typedef enum type_type { ____Placeholder_type_type } type_type ;


 TYPE_1__* FUNC_0 (char*,struct namespace*,int) ;
 int FUNC_1 (char*) ;
 struct namespace VAR_0 ;
 TYPE_1__* FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,char*,struct namespace*,int) ;

type_t *FUNC_4(enum type_type VAR_1, char *VAR_2, struct namespace *VAR_3, int VAR_4)
{
  type_t *VAR_5;
  if (!VAR_3)
    VAR_3 = &VAR_0;
  if (VAR_2) {
    VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
    if (VAR_5) {
      FUNC_1(VAR_2);
      return VAR_5;
    }
  }
  VAR_5 = FUNC_2(VAR_1);
  VAR_5->name = VAR_2;
  VAR_5->namespace = VAR_3;
  if (!VAR_2) return VAR_5;
  return FUNC_3(VAR_5, VAR_2, VAR_3, VAR_4);
}
