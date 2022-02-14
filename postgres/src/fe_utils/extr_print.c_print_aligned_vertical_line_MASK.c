
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t printTextRule ;
struct TYPE_4__ {char* leftvrule; char* hrule; char* midvrule; char* rightvrule; } ;
typedef TYPE_1__ printTextLineFormat ;
struct TYPE_5__ {TYPE_1__* lrule; } ;
typedef TYPE_2__ printTextFormat ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (char,int *) ;
 int FUNC_2 (char*,int *) ;

__attribute__((used)) static void
FUNC_3(const printTextFormat *VAR_0,
       const unsigned short VAR_1,
       unsigned long VAR_2,
       unsigned int VAR_3,
       unsigned int VAR_4,
       printTextRule VAR_5,
       FILE *VAR_6)
{
 const printTextLineFormat *VAR_7 = &VAR_0->lrule[VAR_5];
 unsigned int VAR_8;
 int VAR_9 = 0;

 if (VAR_1 == 2)
  FUNC_0(VAR_6, "%s%s", VAR_7->leftvrule, VAR_7->hrule);
 else if (VAR_1 == 1)
  FUNC_2(VAR_7->hrule, VAR_6);

 if (VAR_2)
 {
  if (VAR_1 == 0)
   VAR_9 = FUNC_0(VAR_6, "* Record %lu", VAR_2);
  else
   VAR_9 = FUNC_0(VAR_6, "[ RECORD %lu ]", VAR_2);
 }
 if (VAR_1 != 2)
  VAR_9++;
 if (VAR_9 < 0)
  VAR_9 = 0;
 for (VAR_8 = VAR_9; VAR_8 < VAR_3; VAR_8++)
  FUNC_2(VAR_1 > 0 ? VAR_7->hrule : " ", VAR_6);
 VAR_9 -= VAR_3;

 if (VAR_1 > 0)
 {
  if (VAR_9-- <= 0)
   FUNC_2(VAR_7->hrule, VAR_6);
  if (VAR_9-- <= 0)
   FUNC_2(VAR_7->midvrule, VAR_6);
  if (VAR_9-- <= 0)
   FUNC_2(VAR_7->hrule, VAR_6);
 }
 else
 {
  if (VAR_9-- <= 0)
   FUNC_1(' ', VAR_6);
 }
 if (VAR_9 < 0)
  VAR_9 = 0;
 for (VAR_8 = VAR_9; VAR_8 < VAR_4; VAR_8++)
  FUNC_2(VAR_1 > 0 ? VAR_7->hrule : " ", VAR_6);
 if (VAR_1 == 2)
  FUNC_0(VAR_6, "%s%s", VAR_7->hrule, VAR_7->rightvrule);
 FUNC_1('\n', VAR_6);
}
