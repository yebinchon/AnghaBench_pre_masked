
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int hdc; } ;
struct TYPE_7__ {int Count; int Types; int Points; } ;
struct TYPE_8__ {TYPE_1__ pathdata; } ;
typedef int GpStatus ;
typedef TYPE_2__ GpPath ;
typedef TYPE_3__ GpGraphics ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*,int *,int ,int ,int ,int ) ;

GpStatus FUNC_3(GpGraphics *VAR_1, GpPath *VAR_2)
{
    GpStatus VAR_3;

    FUNC_0(VAR_1->hdc);
    VAR_3 = FUNC_2(VAR_1, ((void*)0), VAR_2->pathdata.Points,
                       VAR_2->pathdata.Types, VAR_2->pathdata.Count, VAR_0);
    FUNC_1(VAR_1->hdc);
    return VAR_3;
}
