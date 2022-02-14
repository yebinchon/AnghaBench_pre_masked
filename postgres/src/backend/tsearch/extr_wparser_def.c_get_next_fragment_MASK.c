
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* words; } ;
struct TYPE_4__ {int type; int repeated; scalar_t__ item; } ;
typedef TYPE_2__ HeadlineParsedText ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(HeadlineParsedText *VAR_0, int *VAR_1, int *VAR_2,
      int *VAR_3, int *VAR_4, int VAR_5)
{
 int VAR_6;
 for (VAR_6 = *VAR_1; VAR_6 <= *VAR_2; VAR_6++)
 {
  *VAR_1 = VAR_6;
  if (VAR_0->words[VAR_6].item && !VAR_0->words[VAR_6].repeated)
   break;
 }

 *VAR_3 = 0;
 *VAR_4 = 0;
 for (VAR_6 = *VAR_1; VAR_6 <= *VAR_2 && *VAR_3 < VAR_5; VAR_6++)
 {
  if (!FUNC_0(VAR_0->words[VAR_6].type))
   *VAR_3 += 1;
  if (VAR_0->words[VAR_6].item && !VAR_0->words[VAR_6].repeated)
   *VAR_4 += 1;
 }

 if (*VAR_2 > VAR_6)
 {
  *VAR_2 = VAR_6;
  for (VAR_6 = *VAR_2; VAR_6 >= *VAR_1; VAR_6--)
  {
   *VAR_2 = VAR_6;
   if (VAR_0->words[VAR_6].item && !VAR_0->words[VAR_6].repeated)
    break;
   if (!FUNC_0(VAR_0->words[VAR_6].type))
    *VAR_3 -= 1;
  }
 }
}
