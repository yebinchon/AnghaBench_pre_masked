
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * path; } ;
typedef TYPE_1__ php_url ;
typedef int php_stream_wrapper ;
typedef int php_stream_context ;
typedef int php_stream ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,char*,char const*) ;
 int * FUNC_3 (int *,char const*,char*,int ,int *,int *,int *,TYPE_1__**,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,char*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(php_stream_wrapper *VAR_2, const char *VAR_3, int VAR_4, php_stream_context *VAR_5)
{
 php_stream *VAR_6 = ((void*)0);
 php_url *VAR_7 = ((void*)0);
 int VAR_8;
 char VAR_9[512];

 VAR_6 = FUNC_3(VAR_2, VAR_3, "r", 0, ((void*)0), VAR_5, ((void*)0), &VAR_7, ((void*)0), ((void*)0));
 if (!VAR_6) {
  if (VAR_4 & VAR_1) {
   FUNC_2(((void*)0), VAR_0, "Unable to connect to %s", VAR_3);
  }
  goto unlink_errexit;
 }

 if (VAR_7->path == ((void*)0)) {
  if (VAR_4 & VAR_1) {
   FUNC_2(((void*)0), VAR_0, "Invalid path provided in %s", VAR_3);
  }
  goto unlink_errexit;
 }


 FUNC_5(VAR_6, "DELE %s\r\n", (VAR_7->path != ((void*)0) ? FUNC_1(VAR_7->path) : "/"));

 VAR_8 = FUNC_0(VAR_6);
 if (VAR_8 < 200 || VAR_8 > 299) {
  if (VAR_4 & VAR_1) {
   FUNC_2(((void*)0), VAR_0, "Error Deleting file: %s", VAR_9);
  }
  goto unlink_errexit;
 }

 FUNC_6(VAR_7);
 FUNC_4(VAR_6);
 return 1;

unlink_errexit:
 if (VAR_7) {
  FUNC_6(VAR_7);
 }
 if (VAR_6) {
  FUNC_4(VAR_6);
 }
 return 0;
}
