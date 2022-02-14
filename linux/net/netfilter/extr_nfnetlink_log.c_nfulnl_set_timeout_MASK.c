
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct nfulnl_instance {int lock; int flushtimeout; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct nfulnl_instance *VAR_0, u_int32_t VAR_1)
{
 FUNC_0(&VAR_0->lock);
 VAR_0->flushtimeout = VAR_1;
 FUNC_1(&VAR_0->lock);
}
