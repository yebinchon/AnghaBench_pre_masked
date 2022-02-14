
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* text; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__ subst; } ;
typedef TYPE_2__ pp_entry_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*,int *,int *,int ) ;
 int FUNC_2 (scalar_t__*) ;

__attribute__((used)) static void FUNC_3(pp_entry_t *VAR_1)
{
 FUNC_0(VAR_1->type == VAR_0);

 if(VAR_1->subst.text && VAR_1->subst.text[0])
 {
  FUNC_1(VAR_1, ((void*)0), ((void*)0), 0);
  FUNC_2(VAR_1->subst.text);
 }
}
