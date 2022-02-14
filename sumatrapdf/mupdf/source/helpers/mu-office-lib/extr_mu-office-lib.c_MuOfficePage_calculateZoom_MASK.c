
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
     int VAR_3,
     int VAR_4,
     float *VAR_5,
     float *VAR_6)
{
 MuOfficeDoc *VAR_7;
 fz_rect VAR_8;
 float VAR_9, VAR_10;

 if (!VAR_2)
  return VAR_0;
 VAR_7 = VAR_2->doc;
 if (!VAR_7)
  return VAR_0;

 VAR_8 = FUNC_0(VAR_7->ctx, VAR_2->page);



 VAR_9 = 90 * (VAR_8.x1 - VAR_8.x0) / 72;
 VAR_10 = 90 * (VAR_8.y1 - VAR_8.y0) / 72;

 if (VAR_5)
  *VAR_5 = VAR_3/VAR_9;
 if (VAR_6)
  *VAR_6 = VAR_4/VAR_10;

 return VAR_1;
}
