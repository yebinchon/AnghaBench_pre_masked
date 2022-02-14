
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int on_detach; scalar_t__ resowner; scalar_t__ mapped_size; int * mapped_address; int * impl_private; int control_slot; int node; } ;
typedef TYPE_1__ dsm_segment ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_3 (int *,int *) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static dsm_segment *
FUNC_5(void)
{
 dsm_segment *VAR_4;

 if (VAR_0)
  FUNC_1(VAR_0);

 VAR_4 = FUNC_0(VAR_2, sizeof(dsm_segment));
 FUNC_3(&VAR_3, &VAR_4->node);


 VAR_4->control_slot = VAR_1;
 VAR_4->impl_private = ((void*)0);
 VAR_4->mapped_address = ((void*)0);
 VAR_4->mapped_size = 0;

 VAR_4->resowner = VAR_0;
 if (VAR_0)
  FUNC_2(VAR_0, VAR_4);

 FUNC_4(&VAR_4->on_detach);

 return VAR_4;
}
