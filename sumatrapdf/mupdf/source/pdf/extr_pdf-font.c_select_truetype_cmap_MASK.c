
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int platform_id; int encoding_id; } ;
struct TYPE_6__ {int num_charmaps; TYPE_2__** charmaps; } ;
typedef TYPE_1__* FT_Face ;
typedef TYPE_2__* FT_CharMap ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static FT_CharMap
FUNC_1(FT_Face VAR_0, int VAR_1)
{
 int VAR_2;


 if (VAR_1)
 {
  for (VAR_2 = 0; VAR_2 < VAR_0->num_charmaps; VAR_2++)
   if (VAR_0->charmaps[VAR_2]->platform_id == 3 && VAR_0->charmaps[VAR_2]->encoding_id == 0)
    return VAR_0->charmaps[VAR_2];
 }


 for (VAR_2 = 0; VAR_2 < VAR_0->num_charmaps; VAR_2++)
  if (VAR_0->charmaps[VAR_2]->platform_id == 3 && VAR_0->charmaps[VAR_2]->encoding_id == 1)
   if (FUNC_0(VAR_0->charmaps[VAR_2]) != -1)
    return VAR_0->charmaps[VAR_2];


 for (VAR_2 = 0; VAR_2 < VAR_0->num_charmaps; VAR_2++)
  if (VAR_0->charmaps[VAR_2]->platform_id == 1 && VAR_0->charmaps[VAR_2]->encoding_id == 0)
   if (FUNC_0(VAR_0->charmaps[VAR_2]) != -1)
    return VAR_0->charmaps[VAR_2];

 if (VAR_0->num_charmaps > 0)
  if (FUNC_0(VAR_0->charmaps[0]) != -1)
   return VAR_0->charmaps[0];
 return ((void*)0);
}
