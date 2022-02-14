
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int bytes; } ;
typedef TYPE_1__ trgm_mb_char ;
typedef int regex_t ;
typedef int pg_wchar ;
struct TYPE_7__ {int ncolors; TYPE_3__* colorInfo; } ;
typedef TYPE_2__ TrgmNFA ;
struct TYPE_8__ {int expandable; int containsNonWord; scalar_t__ wordCharsCount; TYPE_1__* wordChars; } ;
typedef TYPE_3__ TrgmColorInfo ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(regex_t *VAR_1, TrgmNFA *VAR_2)
{
 int VAR_3 = FUNC_7(VAR_1);
 int VAR_4;

 VAR_2->ncolors = VAR_3;
 VAR_2->colorInfo = (TrgmColorInfo *)
  FUNC_3(VAR_3 * sizeof(TrgmColorInfo));




 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
 {
  TrgmColorInfo *VAR_5 = &VAR_2->colorInfo[VAR_4];
  int VAR_6 = FUNC_6(VAR_1, VAR_4);
  pg_wchar *VAR_7;
  int VAR_8;

  if (VAR_6 < 0 || VAR_6 > VAR_0)
  {

   VAR_5->expandable = 0;
   continue;
  }

  VAR_5->expandable = 1;
  VAR_5->containsNonWord = 0;
  VAR_5->wordChars = (trgm_mb_char *)
   FUNC_2(sizeof(trgm_mb_char) * VAR_6);
  VAR_5->wordCharsCount = 0;


  VAR_7 = (pg_wchar *) FUNC_2(sizeof(pg_wchar) * VAR_6);
  FUNC_5(VAR_1, VAR_4, VAR_7, VAR_6);







  for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
  {
   trgm_mb_char VAR_9;

   if (!FUNC_1(VAR_7[VAR_8], &VAR_9))
    continue;
   if (FUNC_0(VAR_9.bytes))
    VAR_5->wordChars[VAR_5->wordCharsCount++] = VAR_9;
   else
    VAR_5->containsNonWord = 1;
  }

  FUNC_4(VAR_7);
 }
}
