
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tok ;
struct TYPE_3__ {char* bookmarkName; char* pass; int xferType; int hasSIZE; int hasMDTM; int hasPASV; int isUnix; char* lastIP; int xferMode; int hasUTIME; int ldir; int comment; scalar_t__ lastCall; scalar_t__ port; int dir; int acct; int user; int name; } ;
typedef int FILE ;
typedef TYPE_1__ Bookmark ;


 char* FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*,char*,int ,int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(Bookmark *VAR_2, FILE *VAR_3, int VAR_4)
{
 char VAR_5[256];
 char VAR_6[160];

 if (FUNC_3(VAR_3, "%s", VAR_2->bookmarkName) < 0) return (-1) ;
 if (FUNC_3(VAR_3, ",%s", FUNC_0(VAR_5, sizeof(VAR_5), VAR_2->name)) < 0) return (-1) ;
 if (FUNC_3(VAR_3, ",%s", FUNC_0(VAR_5, sizeof(VAR_5), VAR_2->user)) < 0) return (-1) ;
 if ((VAR_2->pass[0] != '\0') && (VAR_4 == 1)) {
  (void) FUNC_4(VAR_6, VAR_0, VAR_1);
  FUNC_1(VAR_6 + VAR_1, VAR_2->pass, FUNC_5(VAR_2->pass), 1);
  if (FUNC_3(VAR_3, ",%s", VAR_6) < 0) return (-1) ;
 } else {
  if (FUNC_3(VAR_3, ",%s", "") < 0) return (-1) ;
 }
 if (FUNC_3(VAR_3, ",%s", FUNC_0(VAR_5, sizeof(VAR_5), VAR_2->acct)) < 0) return (-1) ;
 if (FUNC_3(VAR_3, ",%s", FUNC_0(VAR_5, sizeof(VAR_5), VAR_2->dir)) < 0) return (-1) ;
 if (FUNC_3(VAR_3, ",%c", VAR_2->xferType) < 0) return (-1) ;
 if (FUNC_3(VAR_3, ",%u", (unsigned int) VAR_2->port) < 0) return (-1) ;
 if (FUNC_3(VAR_3, ",%lu", (unsigned long) VAR_2->lastCall) < 0) return (-1) ;
 if (FUNC_3(VAR_3, ",%d", VAR_2->hasSIZE) < 0) return (-1) ;
 if (FUNC_3(VAR_3, ",%d", VAR_2->hasMDTM) < 0) return (-1) ;
 if (FUNC_3(VAR_3, ",%d", VAR_2->hasPASV) < 0) return (-1) ;
 if (FUNC_3(VAR_3, ",%d", VAR_2->isUnix) < 0) return (-1) ;
 if (FUNC_3(VAR_3, ",%s", VAR_2->lastIP) < 0) return (-1) ;
 if (FUNC_3(VAR_3, ",%s", FUNC_0(VAR_5, sizeof(VAR_5), VAR_2->comment)) < 0) return (-1) ;
 if (FUNC_3(VAR_3, ",%s", "") < 0) return (-1) ;
 if (FUNC_3(VAR_3, ",%s", "") < 0) return (-1) ;
 if (FUNC_3(VAR_3, ",%s", "") < 0) return (-1) ;
 if (FUNC_3(VAR_3, ",%s", "") < 0) return (-1) ;
 if (FUNC_3(VAR_3, ",%c", VAR_2->xferMode) < 0) return (-1) ;
 if (FUNC_3(VAR_3, ",%d", VAR_2->hasUTIME) < 0) return (-1) ;
 if (FUNC_3(VAR_3, ",%s", FUNC_0(VAR_5, sizeof(VAR_5), VAR_2->ldir)) < 0) return (-1) ;
 if (FUNC_3(VAR_3, "\n") < 0) return (-1) ;
 if (FUNC_2(VAR_3) < 0) return (-1);
 return (0);
}
