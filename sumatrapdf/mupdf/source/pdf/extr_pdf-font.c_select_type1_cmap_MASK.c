
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int platform_id; } ;
struct TYPE_5__ {int num_charmaps; TYPE_2__** charmaps; } ;
typedef TYPE_1__* FT_Face ;
typedef TYPE_2__* FT_CharMap ;



__attribute__((used)) static FT_CharMap
FUNC_0(FT_Face VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->num_charmaps; VAR_1++)
  if (VAR_0->charmaps[VAR_1]->platform_id == 7)
   return VAR_0->charmaps[VAR_1];
 if (VAR_0->num_charmaps > 0)
  return VAR_0->charmaps[0];
 return ((void*)0);
}
