
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ph_node; } ;
typedef TYPE_1__* Snapshot ;
typedef int Oid ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;

Snapshot
FUNC_5(Oid VAR_3)
{







 if (VAR_0 &&
  !FUNC_3(VAR_3) &&
  !FUNC_2(VAR_3))
  FUNC_1();

 if (VAR_0 == ((void*)0))
 {

  VAR_0 = FUNC_0(&VAR_1);
  FUNC_4(&VAR_2, &VAR_0->ph_node);
 }

 return VAR_0;
}
