
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int x; } ;
struct TYPE_6__ {int width; } ;
struct TYPE_8__ {TYPE_2__ origin; TYPE_1__ size; } ;
typedef TYPE_3__ MMRect ;
typedef int MMRGBHex ;
typedef int MMPoint ;
typedef int MMBitmapRef ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,int *,TYPE_3__,float,int ) ;

size_t FUNC_2(MMBitmapRef VAR_1, MMRGBHex VAR_2, MMRect VAR_3,
                           float VAR_4)
{
 size_t VAR_5 = 0;
 MMPoint VAR_6 = VAR_0;

 while (FUNC_1(VAR_1, VAR_2, &VAR_6, VAR_3, VAR_4, VAR_6) == 0) {
  FUNC_0(VAR_6, VAR_3.size.width, VAR_3.origin.x);
  ++VAR_5;
 }

 return VAR_5;
}
