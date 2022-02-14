
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_incoming {int i_refcount; } ;


 int FUNC_0 (char*,struct rds_incoming*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct rds_incoming *VAR_0)
{
 FUNC_0("addref inc %p ref %d\n", VAR_0, FUNC_2(&VAR_0->i_refcount));
 FUNC_1(&VAR_0->i_refcount);
}
