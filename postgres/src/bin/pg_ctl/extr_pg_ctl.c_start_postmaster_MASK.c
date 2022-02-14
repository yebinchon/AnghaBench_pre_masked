
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ pgpid_t ;
struct TYPE_3__ {scalar_t__ dwProcessId; int hThread; int hProcess; } ;
typedef TYPE_1__ PROCESS_INFORMATION ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,TYPE_1__*,int) ;
 char* VAR_0 ;
 scalar_t__ FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_4 (char*,char*,char*,char*,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 () ;
 char* FUNC_8 (char*) ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (char*,int,char*,char const*,char*,char*,char*,...) ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned long FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,unsigned long) ;

__attribute__((used)) static pgpid_t
FUNC_13(void)
{
 char VAR_11[VAR_1];


 pgpid_t VAR_12;


 FUNC_6(VAR_10);
 FUNC_6(VAR_9);

 VAR_12 = FUNC_7();
 if (VAR_12 < 0)
 {

  FUNC_12(FUNC_3("%s: could not start server: %s\n"),
      VAR_8, FUNC_11(VAR_2));
  FUNC_5(1);
 }
 if (VAR_12 > 0)
 {

  return VAR_12;
 }
 if (VAR_4 != ((void*)0))
  FUNC_10(VAR_11, VAR_1, "exec \"%s\" %s%s < \"%s\" >> \"%s\" 2>&1",
     VAR_3, VAR_5, VAR_6,
     VAR_0, VAR_4);
 else
  FUNC_10(VAR_11, VAR_1, "exec \"%s\" %s%s < \"%s\" 2>&1",
     VAR_3, VAR_5, VAR_6, VAR_0);

 (void) FUNC_4("/bin/sh", "/bin/sh", "-c", VAR_11, (char *) ((void*)0));


 FUNC_12(FUNC_3("%s: could not start server: %s\n"),
     VAR_8, FUNC_11(VAR_2));
 FUNC_5(1);

 return 0;
}
