
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ shortlen; char* shorterror; scalar_t__ longlen; char* longerror; } ;
typedef TYPE_1__ SLpassfail ;
typedef scalar_t__ INT ;
typedef char CHAR ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*,char*,char*,char*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,char*,char*,TYPE_1__*,char*) ;

__attribute__((used)) static void FUNC_5(CHAR *VAR_5,CHAR *VAR_6,CHAR *VAR_7, INT VAR_8,CHAR *VAR_9)
{
  CHAR VAR_10[VAR_3],VAR_11[VAR_3];
  SLpassfail VAR_12;

  FUNC_4(VAR_5,"",VAR_7,VAR_10,&VAR_12,VAR_9);
  if(VAR_8) {
    FUNC_2(VAR_11,"%s\\%s",VAR_6,VAR_7);
      FUNC_1((VAR_12.shortlen==0 &&
          (VAR_12.shorterror==VAR_0 || VAR_12.shorterror==VAR_2 || !VAR_12.shorterror)) ||
         (VAR_12.shortlen==FUNC_3(VAR_11) && FUNC_0(VAR_10,VAR_11)==0),
         "%s: GetShortPathNameA error: len=%d error=%d tmpstr=[%s]\n",
         VAR_9,VAR_12.shortlen,VAR_12.shorterror,VAR_10);
  } else {
      FUNC_1(VAR_12.shortlen==0 &&
         (VAR_12.shorterror==VAR_1 || VAR_12.shorterror==VAR_0 || !VAR_12.shorterror),
         "%s: GetShortPathA should have failed len=%d, error=%d\n",
         VAR_9,VAR_12.shortlen,VAR_12.shorterror);
  }
  if(VAR_4) {
    FUNC_1(VAR_12.longlen==0,"GetLongPathNameA passed when it shouldn't have\n");
    if(VAR_8) {
      FUNC_1(VAR_12.longerror==VAR_0,
         "%s: GetLongPathA returned %d and not %d\n",
         VAR_9,VAR_12.longerror,VAR_0);
    } else {
      FUNC_1(VAR_12.longerror==VAR_1 ||
         VAR_12.longerror==VAR_0,
         "%s: GetLongPathA returned %d and not %d or %d'\n",
         VAR_9, VAR_12.longerror,VAR_1,VAR_0);
    }
  }
}
