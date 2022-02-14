
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8 ;
struct TYPE_8__ {TYPE_2__* Dictionary; } ;
struct TYPE_7__ {int length; TYPE_1__* data; } ;
struct TYPE_6__ {scalar_t__ const val; int compoundflag; TYPE_2__* node; int affix; scalar_t__ isword; } ;
typedef TYPE_1__ SPNodeData ;
typedef TYPE_2__ SPNode ;
typedef TYPE_3__ IspellDict ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ,char const*) ;

__attribute__((used)) static int
FUNC_1(IspellDict *VAR_2, const char *VAR_3, const char *VAR_4, int VAR_5)
{
 SPNode *VAR_6 = VAR_2->Dictionary;
 SPNodeData *VAR_7,
      *VAR_8,
      *VAR_9;
 const uint8 *VAR_10 = (const uint8 *) VAR_3;

 VAR_5 &= VAR_0;

 while (VAR_6 && *VAR_10)
 {
  VAR_7 = VAR_6->data;
  VAR_8 = VAR_6->data + VAR_6->length;
  while (VAR_7 < VAR_8)
  {
   VAR_9 = VAR_7 + ((VAR_8 - VAR_7) >> 1);
   if (VAR_9->val == *VAR_10)
   {
    if (*(VAR_10 + 1) == '\0' && VAR_9->isword)
    {
     if (VAR_5 == 0)
     {





      if (VAR_9->compoundflag & VAR_1)
       return 0;
     }
     else if ((VAR_5 & VAR_9->compoundflag) == 0)
      return 0;





     if (FUNC_0(VAR_2, VAR_9->affix, VAR_4))
      return 1;
    }
    VAR_6 = VAR_9->node;
    VAR_10++;
    break;
   }
   else if (VAR_9->val < *VAR_10)
    VAR_7 = VAR_9 + 1;
   else
    VAR_8 = VAR_9;
  }
  if (VAR_7 >= VAR_8)
   break;
 }
 return 0;
}
