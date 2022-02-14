
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ verbose; } ;
struct TYPE_10__ {int ndbs; int * dbs; } ;
struct TYPE_9__ {TYPE_2__ dbarr; } ;
typedef TYPE_1__ ClusterInfo ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 TYPE_4__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_2__*) ;

void
FUNC_5(ClusterInfo *VAR_3)
{
 int VAR_4;

 if (VAR_3->dbarr.dbs != ((void*)0))
  FUNC_0(&VAR_3->dbarr);

 FUNC_1(VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_3->dbarr.ndbs; VAR_4++)
  FUNC_2(VAR_3, &VAR_3->dbarr.dbs[VAR_4]);

 if (VAR_3 == &VAR_2)
  FUNC_3(VAR_0, "\nsource databases:\n");
 else
  FUNC_3(VAR_0, "\ntarget databases:\n");

 if (VAR_1.verbose)
  FUNC_4(&VAR_3->dbarr);
}
