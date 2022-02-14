
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
 int VAR_2 ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,int) ;
 int FUNC_5 (int *,int ,char*,char const*) ;
 int * FUNC_6 (int *,char const*,char*,int ,int *,int *,int *,TYPE_1__**,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,char*) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (char*) ;
 char* FUNC_11 (char*,char) ;

__attribute__((used)) static int FUNC_12(php_stream_wrapper *VAR_3, const char *VAR_4, int VAR_5, int VAR_6, php_stream_context *VAR_7)
{
 php_stream *VAR_8 = ((void*)0);
 php_url *VAR_9 = ((void*)0);
 int VAR_10, VAR_11 = VAR_6 & VAR_1;
 char VAR_12[512];

 VAR_8 = FUNC_6(VAR_3, VAR_4, "r", 0, ((void*)0), VAR_7, ((void*)0), &VAR_9, ((void*)0), ((void*)0));
 if (!VAR_8) {
  if (VAR_6 & VAR_2) {
   FUNC_5(((void*)0), VAR_0, "Unable to connect to %s", VAR_4);
  }
  goto mkdir_errexit;
 }

 if (VAR_9->path == ((void*)0)) {
  if (VAR_6 & VAR_2) {
   FUNC_5(((void*)0), VAR_0, "Invalid path provided in %s", VAR_4);
  }
  goto mkdir_errexit;
 }

 if (!VAR_11) {
  FUNC_8(VAR_8, "MKD %s\r\n", FUNC_2(VAR_9->path));
  VAR_10 = FUNC_0(VAR_8);
    } else {

        char *VAR_13, *VAR_14, *VAR_15;

        VAR_15 = FUNC_4(FUNC_2(VAR_9->path), FUNC_1(VAR_9->path));
        VAR_14 = VAR_15 + FUNC_1(VAR_9->path);


        while ((VAR_13 = FUNC_11(VAR_15, '/'))) {
   *VAR_13 = '\0';
   FUNC_8(VAR_8, "CWD %s\r\n", FUNC_10(VAR_15) ? VAR_15 : "/");
   VAR_10 = FUNC_0(VAR_8);
   if (VAR_10 >= 200 && VAR_10 <= 299) {
    *VAR_13 = '/';
    break;
   }
  }

  FUNC_8(VAR_8, "MKD %s\r\n", FUNC_10(VAR_15) ? VAR_15 : "/");
  VAR_10 = FUNC_0(VAR_8);

  if (VAR_10 >= 200 && VAR_10 <= 299) {
   if (!VAR_13) {
    VAR_13 = VAR_15;
   }

   while (VAR_13 != VAR_14) {
    if (*VAR_13 == '\0' && *(VAR_13 + 1) != '\0') {
     *VAR_13 = '/';
     FUNC_8(VAR_8, "MKD %s\r\n", VAR_15);
     VAR_10 = FUNC_0(VAR_8);
     if (VAR_10 < 200 || VAR_10 > 299) {
      if (VAR_6 & VAR_2) {
       FUNC_5(((void*)0), VAR_0, "%s", VAR_12);
      }
      break;
     }
    }
    ++VAR_13;
   }
  }

  FUNC_3(VAR_15);
    }

 FUNC_9(VAR_9);
 FUNC_7(VAR_8);

 if (VAR_10 < 200 || VAR_10 > 299) {

  return 0;
 }

 return 1;

mkdir_errexit:
 if (VAR_9) {
  FUNC_9(VAR_9);
 }
 if (VAR_8) {
  FUNC_7(VAR_8);
 }
 return 0;
}
