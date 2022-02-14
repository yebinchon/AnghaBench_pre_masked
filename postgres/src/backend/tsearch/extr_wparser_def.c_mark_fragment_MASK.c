
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* words; } ;
struct TYPE_4__ {int selected; int replace; int skip; int in; scalar_t__ repeated; int type; scalar_t__ item; } ;
typedef TYPE_2__ HeadlineParsedText ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(HeadlineParsedText *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = VAR_2; VAR_4 <= VAR_3; VAR_4++)
 {
  if (VAR_0->words[VAR_4].item)
   VAR_0->words[VAR_4].selected = 1;
  if (VAR_1 == 0)
  {
   if (FUNC_0(VAR_0->words[VAR_4].type))
    VAR_0->words[VAR_4].replace = 1;
   else if (FUNC_1(VAR_0->words[VAR_4].type))
    VAR_0->words[VAR_4].skip = 1;
  }
  else
  {
   if (FUNC_2(VAR_0->words[VAR_4].type))
    VAR_0->words[VAR_4].skip = 1;
  }

  VAR_0->words[VAR_4].in = (VAR_0->words[VAR_4].repeated) ? 0 : 1;
 }
}
