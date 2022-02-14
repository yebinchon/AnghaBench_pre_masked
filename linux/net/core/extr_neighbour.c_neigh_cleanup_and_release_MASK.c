
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct neighbour {TYPE_1__* parms; } ;
struct TYPE_2__ {int (* neigh_cleanup ) (struct neighbour*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct neighbour*,int ,int ,int ) ;
 int FUNC_1 (int ,struct neighbour*) ;
 int FUNC_2 (struct neighbour*) ;
 int FUNC_3 (struct neighbour*) ;
 int FUNC_4 (struct neighbour*,int ) ;

__attribute__((used)) static void FUNC_5(struct neighbour *VAR_2)
{
 if (VAR_2->parms->neigh_cleanup)
  VAR_2->parms->neigh_cleanup(VAR_2);

 FUNC_4(VAR_2, 0);
 FUNC_0(VAR_2, VAR_1, 0, 0);
 FUNC_1(VAR_0, VAR_2);
 FUNC_2(VAR_2);
}
