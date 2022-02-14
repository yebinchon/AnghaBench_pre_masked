
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int x1; int x0; int y1; int y0; } ;
typedef TYPE_1__ fz_rect ;
struct TYPE_8__ {int ctx; } ;
struct TYPE_7__ {int page; TYPE_3__* doc; } ;
typedef TYPE_2__ MuOfficePage ;
typedef TYPE_3__ MuOfficeDoc ;
typedef int MuError ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ FUNC_0 (int ,int ) ;

MuError FUNC_1( MuOfficePage *VAR_2,
    float *VAR_3,
    float *VAR_4)
{
 MuOfficeDoc *VAR_5;
 fz_rect VAR_6;

 if (!VAR_2)
  return VAR_0;
 VAR_5 = VAR_2->doc;
 if (!VAR_5)
  return VAR_0;

 VAR_6 = FUNC_0(VAR_5->ctx, VAR_2->page);




 if (VAR_3)
  *VAR_3 = 90 * (VAR_6.x1 - VAR_6.x0) / 72;
 if (VAR_4)
  *VAR_4 = 90 * (VAR_6.y1 - VAR_6.y0) / 72;

 return VAR_1;
}
