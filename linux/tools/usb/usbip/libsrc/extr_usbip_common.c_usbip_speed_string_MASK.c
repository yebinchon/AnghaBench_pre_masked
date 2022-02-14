
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num; char const* desc; int * speed; } ;


 TYPE_1__* VAR_0 ;

const char *FUNC_0(int VAR_1)
{
 for (int VAR_2 = 0; VAR_0[VAR_2].speed != ((void*)0); VAR_2++)
  if (VAR_0[VAR_2].num == VAR_1)
   return VAR_0[VAR_2].desc;

 return "Unknown Speed";
}
