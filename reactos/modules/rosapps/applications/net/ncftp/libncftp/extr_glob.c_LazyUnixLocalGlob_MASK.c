
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef char* string ;
typedef int longstring ;
typedef int gfile ;
typedef int cmd ;
struct TYPE_5__ {int errNo; } ;
typedef int LineListPtr ;
typedef int FTPSigProc ;
typedef TYPE_1__* FTPCIPtr ;
typedef int FILE ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ,char*,char*) ;
 int * FUNC_2 (int ,int,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,char*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int,char*,char*,char*,char*,char const* const) ;
 int FUNC_8 (char*,char*,char*,char*,char*,char const* const) ;

__attribute__((used)) static int
FUNC_9(FTPCIPtr VAR_5, LineListPtr VAR_6, const char *const VAR_7)
{
 string VAR_8;
 longstring VAR_9;
 FILE *VAR_10;
 FTPSigProc VAR_11;
 (void) FUNC_8(VAR_8, "%s -c \"%s %s %s\"", "/bin/sh", "/bin/ls",
  "-d", VAR_7);


 VAR_10 = (FILE *) FUNC_6(VAR_8, "r");
 if (VAR_10 == ((void*)0)) {
  FUNC_1(VAR_5, VAR_2, "Could not Lglob: [%s]\n", VAR_8);
  VAR_5->errNo = VAR_3;
  return (VAR_3);
 }
 VAR_11 = FUNC_3(VAR_0, (FTPSigProc) VAR_1);
 while (FUNC_2(VAR_9, sizeof(VAR_9), (FILE *) VAR_10) != ((void*)0)) {
  FUNC_4(VAR_5, "  Lglob [%s]\n", VAR_9);
  (void) FUNC_0(VAR_6, VAR_9);
 }
 (void) FUNC_5(VAR_10);
 (void) FUNC_3(VAR_0, VAR_11);
 return (VAR_4);
}
