
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WindCtx ;
typedef int RIODesc ;
typedef int RIO ;


 int FUNC_0 (int *,char const*,int ) ;
 int FUNC_1 (char*,...) ;
 void* FUNC_2 (char const*) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int *,int *,char const*,int,int,int *) ;
 int VAR_0 ;
 int * FUNC_5 (void*) ;

__attribute__((used)) static RIODesc *FUNC_6(RIO *VAR_1, const char *VAR_2, int VAR_3, int VAR_4) {
 if (!FUNC_0 (VAR_1, VAR_2, 0)) {
  return ((void*)0);
 }

 if (!FUNC_3 ("pipe")) {
  FUNC_1("Could not initialize the IO backend\n");
  return ((void*)0);
 }

 void *VAR_5 = FUNC_2 (VAR_2 + 9);
 if (!VAR_5) {
  FUNC_1 ("Could not open the pipe\n");
  return ((void*)0);
 }
 FUNC_1 ("Opened pipe %s with fd %p\n", VAR_2 + 9, VAR_5);

 WindCtx *VAR_6 = FUNC_5 (VAR_5);
 if (!VAR_6) {
  FUNC_1 ("Failed to initialize windbg context\n");
  return ((void*)0);
 }
 return FUNC_4 (VAR_1, &VAR_0, VAR_2, VAR_3, VAR_4, VAR_6);
}
