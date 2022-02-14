
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int x0; int x1; int y0; int y1; } ;
typedef TYPE_2__ fz_irect ;
typedef enum side { ____Placeholder_side } side ;
typedef enum fill { ____Placeholder_fill } fill ;
typedef enum anchor { ____Placeholder_anchor } anchor ;
struct TYPE_7__ {TYPE_1__* cavity; } ;
struct TYPE_5__ {int x0; int x1; int y0; int y1; } ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;

fz_irect FUNC_0(int VAR_3, int VAR_4, enum side VAR_5, enum fill VAR_6, enum anchor VAR_7, int VAR_8, int VAR_9)
{
 fz_irect VAR_10, VAR_11;
 int VAR_12, VAR_13;
 int VAR_14, VAR_15;

 switch (VAR_5)
 {
 default:
 case 141:
  VAR_10.x0 = VAR_2.cavity->x0 + VAR_8;
  VAR_10.x1 = VAR_2.cavity->x1 - VAR_8;
  VAR_10.y0 = VAR_2.cavity->y0 + VAR_9;
  VAR_10.y1 = VAR_2.cavity->y1 - VAR_9;
  VAR_2.cavity->x0 = VAR_2.cavity->x1;
  VAR_2.cavity->y0 = VAR_2.cavity->y1;
  break;
 case 129:
  VAR_10.x0 = VAR_2.cavity->x0 + VAR_8;
  VAR_10.x1 = VAR_2.cavity->x1 - VAR_8;
  VAR_10.y0 = VAR_2.cavity->y0 + VAR_9;
  VAR_10.y1 = VAR_2.cavity->y0 + VAR_9 + VAR_4;
  VAR_2.cavity->y0 = VAR_10.y1 + VAR_9;
  break;
 case 140:
  VAR_10.x0 = VAR_2.cavity->x0 + VAR_8;
  VAR_10.x1 = VAR_2.cavity->x1 - VAR_8;
  VAR_10.y0 = VAR_2.cavity->y1 - VAR_9 - VAR_4;
  VAR_10.y1 = VAR_2.cavity->y1 - VAR_9;
  VAR_2.cavity->y1 = VAR_10.y0 - VAR_9;
  break;
 case 137:
  VAR_10.x0 = VAR_2.cavity->x0 + VAR_8;
  VAR_10.x1 = VAR_2.cavity->x0 + VAR_8 + VAR_3;
  VAR_10.y0 = VAR_2.cavity->y0 + VAR_9;
  VAR_10.y1 = VAR_2.cavity->y1 - VAR_9;
  VAR_2.cavity->x0 = VAR_10.x1 + VAR_8;
  break;
 case 133:
  VAR_10.x0 = VAR_2.cavity->x1 - VAR_8 - VAR_3;
  VAR_10.x1 = VAR_2.cavity->x1 - VAR_8;
  VAR_10.y0 = VAR_2.cavity->y0 + VAR_9;
  VAR_10.y1 = VAR_2.cavity->y1 - VAR_9;
  VAR_2.cavity->x1 = VAR_10.x0 - VAR_8;
  break;
 }

 VAR_12 = VAR_10.x1 - VAR_10.x0;
 VAR_13 = VAR_10.y1 - VAR_10.y0;

 if (VAR_6 & VAR_0)
  VAR_3 = VAR_12;
 if (VAR_6 & VAR_1)
  VAR_4 = VAR_13;

 VAR_14 = VAR_12 - VAR_3;
 VAR_15 = VAR_13 - VAR_4;

 switch (VAR_7)
 {
 default:
 case 139:
  VAR_11.x0 = VAR_10.x0 + VAR_14 / 2;
  VAR_11.y0 = VAR_10.y0 + VAR_15 / 2;
  break;
 case 136:
  VAR_11.x0 = VAR_10.x0 + VAR_14 / 2;
  VAR_11.y0 = VAR_10.y0;
  break;
 case 135:
  VAR_11.x0 = VAR_10.x0 + VAR_14;
  VAR_11.y0 = VAR_10.y0;
  break;
 case 138:
  VAR_11.x0 = VAR_10.x0 + VAR_14;
  VAR_11.y0 = VAR_10.y0 + VAR_15 / 2;
  break;
 case 131:
  VAR_11.x0 = VAR_10.x0 + VAR_14;
  VAR_11.y0 = VAR_10.y0 + VAR_15;
  break;
 case 132:
  VAR_11.x0 = VAR_10.x0 + VAR_14 / 2;
  VAR_11.y0 = VAR_10.y0 + VAR_15;
  break;
 case 130:
  VAR_11.x0 = VAR_10.x0;
  VAR_11.y0 = VAR_10.y0 + VAR_15;
  break;
 case 128:
  VAR_11.x0 = VAR_10.x0;
  VAR_11.y0 = VAR_10.y0 + VAR_15 / 2;
  break;
 case 134:
  VAR_11.x0 = VAR_10.x0;
  VAR_11.y0 = VAR_10.y0;
  break;
 }

 VAR_11.x1 = VAR_11.x0 + VAR_3;
 VAR_11.y1 = VAR_11.y0 + VAR_4;

 return VAR_11;
}
