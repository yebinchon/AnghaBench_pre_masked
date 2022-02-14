
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct xarray {int xa_head; } ;
struct TYPE_7__ {int * xa_node; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__,struct xarray*,int ) ;
 void* FUNC_2 (struct xarray*) ;
 scalar_t__ FUNC_3 (void*) ;
 int FUNC_4 (struct xarray*,int ) ;
 int FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (struct xarray*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,unsigned long) ;
 int FUNC_10 (TYPE_1__*,unsigned long) ;

void FUNC_11(struct xarray *VAR_2)
{
 FUNC_1(VAR_1, VAR_2, 0);
 unsigned long VAR_3;
 void *VAR_4;

 VAR_1.xa_node = ((void*)0);
 FUNC_9(&VAR_1, VAR_3);
 VAR_4 = FUNC_2(VAR_2);
 FUNC_0(VAR_2->xa_head, ((void*)0));
 FUNC_8(&VAR_1);
 if (FUNC_6(VAR_2))
  FUNC_4(VAR_2, VAR_0);

 if (FUNC_3(VAR_4))
  FUNC_7(&VAR_1, FUNC_5(VAR_4));
 FUNC_10(&VAR_1, VAR_3);
}
