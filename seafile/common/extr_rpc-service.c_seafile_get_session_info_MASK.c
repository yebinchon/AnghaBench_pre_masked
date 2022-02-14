
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int seaf_dir; } ;
typedef int SeafileSessionInfo ;
typedef int GObject ;
typedef int GError ;


 int FUNC_0 (int *,char*,int ,int *) ;
 TYPE_1__* VAR_0 ;
 int * FUNC_1 () ;

GObject *
FUNC_2 (GError **VAR_1)
{
    SeafileSessionInfo *VAR_2;

    VAR_2 = FUNC_1 ();
    FUNC_0 (VAR_2, "datadir", VAR_0->seaf_dir, ((void*)0));
    return (GObject *) VAR_2;
}
