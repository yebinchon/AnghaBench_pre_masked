
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xarray {int xa_flags; int xa_head; } ;
struct ida {struct xarray xa; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,struct ida*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ida *VAR_1)
{
 struct xarray *VAR_2 = &VAR_1->xa;
 FUNC_1("ida: %p node %p free %d\n", VAR_1, VAR_2->xa_head,
    VAR_2->xa_flags >> VAR_0);
 FUNC_0(VAR_2->xa_head, 0);
}
