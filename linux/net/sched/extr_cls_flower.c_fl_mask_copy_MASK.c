
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fl_flow_mask {int range; int key; } ;


 void* FUNC_0 (int *,struct fl_flow_mask*) ;
 int FUNC_1 (struct fl_flow_mask*) ;
 int FUNC_2 (void*,void const*,int ) ;

__attribute__((used)) static void FUNC_3(struct fl_flow_mask *VAR_0,
    struct fl_flow_mask *VAR_1)
{
 const void *VAR_2 = FUNC_0(&VAR_1->key, VAR_1);
 void *VAR_3 = FUNC_0(&VAR_0->key, VAR_1);

 FUNC_2(VAR_3, VAR_2, FUNC_1(VAR_1));
 VAR_0->range = VAR_1->range;
}
