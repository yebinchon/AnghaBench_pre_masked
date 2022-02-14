
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8 ;
struct TYPE_6__ {int length; TYPE_1__* data; scalar_t__ isvoid; } ;
struct TYPE_5__ {scalar_t__ val; TYPE_2__* node; scalar_t__ naff; } ;
typedef TYPE_1__ AffixNodeData ;
typedef TYPE_2__ AffixNode ;


 scalar_t__ FUNC_0 (char const*,int,int,int) ;

__attribute__((used)) static AffixNodeData *
FUNC_1(AffixNode *VAR_0, const char *VAR_1, int VAR_2, int *VAR_3, int VAR_4)
{
 AffixNodeData *VAR_5,
      *VAR_6,
      *VAR_7;
 uint8 VAR_8;

 if (VAR_0->isvoid)
 {
  if (VAR_0->data->naff)
   return VAR_0->data;
  VAR_0 = VAR_0->data->node;
 }

 while (VAR_0 && *VAR_3 < VAR_2)
 {
  VAR_5 = VAR_0->data;
  VAR_6 = VAR_0->data + VAR_0->length;
  while (VAR_5 < VAR_6)
  {
   VAR_7 = VAR_5 + ((VAR_6 - VAR_5) >> 1);
   VAR_8 = FUNC_0(VAR_1, VAR_2, *VAR_3, VAR_4);

   if (VAR_7->val == VAR_8)
   {
    (*VAR_3)++;
    if (VAR_7->naff)
     return VAR_7;
    VAR_0 = VAR_7->node;
    break;
   }
   else if (VAR_7->val < VAR_8)
    VAR_5 = VAR_7 + 1;
   else
    VAR_6 = VAR_7;
  }
  if (VAR_5 >= VAR_6)
   break;
 }
 return ((void*)0);
}
