
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_5__ {char const** colorant; } ;
struct TYPE_6__ {TYPE_1__ separation; } ;
struct TYPE_7__ {int n; int type; TYPE_2__ u; } ;
typedef TYPE_3__ fz_colorspace ;
 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;

const char *FUNC_1(fz_context *VAR_1, fz_colorspace *VAR_2, int VAR_3)
{
 if (!VAR_2 || VAR_3 < 0 || VAR_3 >= VAR_2->n)
  FUNC_0(VAR_1, VAR_0, "Colorant out of range");
 switch (VAR_2->type)
 {
 case 130:
  return "None";
 case 133:
  return "Gray";
 case 129:
  if (VAR_3 == 0) return "Red";
  if (VAR_3 == 1) return "Green";
  if (VAR_3 == 2) return "Blue";
  break;
 case 135:
  if (VAR_3 == 0) return "Blue";
  if (VAR_3 == 1) return "Green";
  if (VAR_3 == 2) return "Red";
  break;
 case 134:
  if (VAR_3 == 0) return "Cyan";
  if (VAR_3 == 1) return "Magenta";
  if (VAR_3 == 2) return "Yellow";
  if (VAR_3 == 3) return "Black";
  break;
 case 131:
  if (VAR_3 == 0) return "L*";
  if (VAR_3 == 1) return "a*";
  if (VAR_3 == 2) return "b*";
  break;
 case 132:
  return "Index";
 case 128:
  return VAR_2->u.separation.colorant[VAR_3];
 }
 return "None";
}
