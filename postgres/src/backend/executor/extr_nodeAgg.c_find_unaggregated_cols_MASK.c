
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ qual; scalar_t__ targetlist; } ;
struct TYPE_11__ {TYPE_3__ plan; } ;
struct TYPE_7__ {scalar_t__ plan; } ;
struct TYPE_8__ {TYPE_1__ ps; } ;
struct TYPE_10__ {TYPE_2__ ss; } ;
typedef int Node ;
typedef int Bitmapset ;
typedef TYPE_4__ AggState ;
typedef TYPE_5__ Agg ;


 int FUNC_0 (int *,int **) ;

__attribute__((used)) static Bitmapset *
FUNC_1(AggState *VAR_0)
{
 Agg *VAR_1 = (Agg *) VAR_0->ss.ps.plan;
 Bitmapset *VAR_2;

 VAR_2 = ((void*)0);
 (void) FUNC_0((Node *) VAR_1->plan.targetlist,
           &VAR_2);
 (void) FUNC_0((Node *) VAR_1->plan.qual,
           &VAR_2);
 return VAR_2;
}
