
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t printTextRule ;
struct TYPE_4__ {char* hrule; char* leftvrule; char* midvrule; char* rightvrule; } ;
typedef TYPE_1__ printTextLineFormat ;
struct TYPE_5__ {TYPE_1__* lrule; } ;
typedef TYPE_2__ printTextFormat ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char*,char*,...) ;
 int FUNC_1 (char,int *) ;
 int FUNC_2 (char*,int *) ;

__attribute__((used)) static void
FUNC_3(const unsigned int VAR_0, const unsigned int *VAR_1,
        unsigned short VAR_2, printTextRule VAR_3,
        const printTextFormat *VAR_4,
        FILE *VAR_5)
{
 const printTextLineFormat *VAR_6 = &VAR_4->lrule[VAR_3];
 unsigned int VAR_7,
    VAR_8;

 if (VAR_2 == 1)
  FUNC_2(VAR_6->hrule, VAR_5);
 else if (VAR_2 == 2)
  FUNC_0(VAR_5, "%s%s", VAR_6->leftvrule, VAR_6->hrule);

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
 {
  for (VAR_8 = 0; VAR_8 < VAR_1[VAR_7]; VAR_8++)
   FUNC_2(VAR_6->hrule, VAR_5);

  if (VAR_7 < VAR_0 - 1)
  {
   if (VAR_2 == 0)
    FUNC_1(' ', VAR_5);
   else
    FUNC_0(VAR_5, "%s%s%s", VAR_6->hrule,
      VAR_6->midvrule, VAR_6->hrule);
  }
 }

 if (VAR_2 == 2)
  FUNC_0(VAR_5, "%s%s", VAR_6->hrule, VAR_6->rightvrule);
 else if (VAR_2 == 1)
  FUNC_2(VAR_6->hrule, VAR_5);

 FUNC_1('\n', VAR_5);
}
