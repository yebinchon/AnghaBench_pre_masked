
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct klp_shadow {int data; int obj; int node; } ;
typedef int (* klp_shadow_dtor_t ) (int ,int ) ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct klp_shadow*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct klp_shadow *VAR_1,
       klp_shadow_dtor_t VAR_2)
{
 FUNC_0(&VAR_1->node);
 if (VAR_2)
  VAR_2(VAR_1->obj, VAR_1->data);
 FUNC_1(VAR_1, VAR_0);
}
