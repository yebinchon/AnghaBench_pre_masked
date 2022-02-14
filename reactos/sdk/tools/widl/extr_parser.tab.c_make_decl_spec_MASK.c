
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {void* attrs; } ;
typedef TYPE_1__ type_t ;
typedef enum storage_class { ____Placeholder_storage_class } storage_class ;
struct TYPE_12__ {scalar_t__ stgclass; int * attrs; TYPE_1__* type; } ;
typedef TYPE_2__ decl_spec_t ;
typedef int attr_t ;
typedef int attr_list_t ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *,int *) ;
 void* FUNC_1 (int *,int *) ;
 int FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_2__*) ;
 int * FUNC_6 (void*,int *) ;
 TYPE_2__* FUNC_7 (int) ;

__attribute__((used)) static decl_spec_t *FUNC_8(type_t *VAR_1, decl_spec_t *VAR_2, decl_spec_t *VAR_3, attr_t *VAR_4, enum storage_class VAR_5)
{
  decl_spec_t *VAR_6 = VAR_2 ? VAR_2 : VAR_3;
  if (!VAR_6)
  {
    VAR_6 = FUNC_7(sizeof(*VAR_6));
    VAR_6->type = ((void*)0);
    VAR_6->attrs = ((void*)0);
    VAR_6->stgclass = VAR_0;
  }
  VAR_6->type = VAR_1;
  if (VAR_2 && VAR_6 != VAR_2)
  {
    VAR_6->attrs = FUNC_1(VAR_6->attrs, VAR_2->attrs);
    if (VAR_6->stgclass == VAR_0)
      VAR_6->stgclass = VAR_2->stgclass;
    else if (VAR_2->stgclass != VAR_0)
      FUNC_4("only one storage class can be specified\n");
    FUNC_2(!VAR_2->type);
    FUNC_5(VAR_2);
  }
  if (VAR_3 && VAR_6 != VAR_3)
  {
    VAR_6->attrs = FUNC_1(VAR_6->attrs, VAR_3->attrs);
    if (VAR_6->stgclass == VAR_0)
      VAR_6->stgclass = VAR_3->stgclass;
    else if (VAR_3->stgclass != VAR_0)
      FUNC_4("only one storage class can be specified\n");
    FUNC_2(!VAR_3->type);
    FUNC_5(VAR_3);
  }

  VAR_6->attrs = FUNC_0(VAR_6->attrs, VAR_4);
  if (VAR_6->stgclass == VAR_0)
    VAR_6->stgclass = VAR_5;
  else if (VAR_5 != VAR_0)
    FUNC_4("only one storage class can be specified\n");


  if (VAR_1 && VAR_6->attrs)
  {
    attr_list_t *VAR_7;
    VAR_6->type = FUNC_3(VAR_1, 1);
    VAR_7 = FUNC_6(VAR_1->attrs, ((void*)0));
    VAR_6->type->attrs = FUNC_1(VAR_7, VAR_6->attrs);
    VAR_6->attrs = ((void*)0);
  }

  return VAR_6;
}
