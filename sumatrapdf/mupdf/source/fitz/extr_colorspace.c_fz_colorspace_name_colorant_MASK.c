
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_5__ {int ** colorant; } ;
struct TYPE_6__ {TYPE_1__ separation; } ;
struct TYPE_7__ {int n; scalar_t__ type; int flags; TYPE_2__ u; } ;
typedef TYPE_3__ fz_colorspace ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (char const*,char*) ;

void FUNC_4(fz_context *VAR_4, fz_colorspace *VAR_5, int VAR_6, const char *VAR_7)
{
 if (VAR_6 < 0 || VAR_6 >= VAR_5->n)
  FUNC_2(VAR_4, VAR_3, "Attempt to name out of range colorant");
 if (VAR_5->type != VAR_2)
  FUNC_2(VAR_4, VAR_3, "Attempt to name colorant for non-separation colorspace");

 FUNC_0(VAR_4, VAR_5->u.separation.colorant[VAR_6]);
 VAR_5->u.separation.colorant[VAR_6] = ((void*)0);
 VAR_5->u.separation.colorant[VAR_6] = FUNC_1(VAR_4, VAR_7);

 if (!FUNC_3(VAR_7, "Cyan") || !FUNC_3(VAR_7, "Magenta") || !FUNC_3(VAR_7, "Yellow") || !FUNC_3(VAR_7, "Black"))
  VAR_5->flags |= VAR_0;
 else
  VAR_5->flags |= VAR_1;
}
