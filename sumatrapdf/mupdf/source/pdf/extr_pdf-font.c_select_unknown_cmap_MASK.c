
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ num_charmaps; int ** charmaps; } ;
typedef TYPE_1__* FT_Face ;
typedef int * FT_CharMap ;



__attribute__((used)) static FT_CharMap
FUNC_0(FT_Face VAR_0)
{
 if (VAR_0->num_charmaps > 0)
  return VAR_0->charmaps[0];
 return ((void*)0);
}
