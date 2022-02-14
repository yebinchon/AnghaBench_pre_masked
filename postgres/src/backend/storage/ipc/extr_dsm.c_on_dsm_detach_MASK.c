
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int on_dsm_detach_callback ;
struct TYPE_5__ {int node; int arg; int function; } ;
typedef TYPE_1__ dsm_segment_detach_callback ;
struct TYPE_6__ {int on_detach; } ;
typedef TYPE_2__ dsm_segment ;
typedef int Datum ;


 TYPE_1__* FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;

void
FUNC_2(dsm_segment *VAR_1, on_dsm_detach_callback VAR_2, Datum VAR_3)
{
 dsm_segment_detach_callback *VAR_4;

 VAR_4 = FUNC_0(VAR_0,
       sizeof(dsm_segment_detach_callback));
 VAR_4->function = VAR_2;
 VAR_4->arg = VAR_3;
 FUNC_1(&VAR_1->on_detach, &VAR_4->node);
}
