
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int call ;
struct TYPE_3__ {char* pyname; scalar_t__ proname; int * code; int globals; int mcxt; int src; int statics; } ;
typedef int PyObject ;
typedef TYPE_1__ PLyProcedure ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_2 ;
 char* FUNC_2 (char*,char const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,int ) ;
 int * FUNC_6 (char*,int ,int ,int *) ;
 int * FUNC_7 (char*,char*,int ) ;
 int FUNC_8 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,int,char*,char*) ;

void
FUNC_12(PLyProcedure *VAR_5, const char *VAR_6)
{
 PyObject *VAR_7 = ((void*)0);
 char *VAR_8;

 VAR_5->globals = FUNC_3(VAR_2);





 VAR_5->statics = FUNC_4();
 if (!VAR_5->statics)
  FUNC_1(VAR_0, ((void*)0));
 FUNC_5(VAR_5->globals, "SD", VAR_5->statics);




 VAR_8 = FUNC_2(VAR_5->pyname, VAR_6);

 VAR_5->src = FUNC_0(VAR_5->mcxt, VAR_8);
 VAR_7 = FUNC_6(VAR_8, VAR_4, VAR_5->globals, ((void*)0));
 FUNC_10(VAR_8);

 if (VAR_7 != ((void*)0))
 {
  int VAR_9;
  char VAR_10[VAR_1 + 256];

  FUNC_8(VAR_7);




  VAR_9 = FUNC_11(VAR_10, sizeof(VAR_10), "%s()", VAR_5->pyname);
  if (VAR_9 < 0 || VAR_9 >= sizeof(VAR_10))
   FUNC_9(VAR_0, "string would overflow buffer");
  VAR_5->code = FUNC_7(VAR_10, "<string>", VAR_3);
  if (VAR_5->code != ((void*)0))
   return;
 }

 if (VAR_5->proname)
  FUNC_1(VAR_0, "could not compile PL/Python function \"%s\"",
     VAR_5->proname);
 else
  FUNC_1(VAR_0, "could not compile anonymous PL/Python code block");
}
