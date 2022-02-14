
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int file; int port; int host; } ;
typedef TYPE_1__ TextLog ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,int *,int*) ;
 char* FUNC_2 (char*,int ,int ,int ,char*) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char*,char*) ;

__attribute__((used)) static char *FUNC_5 (TextLog VAR_0, const char *VAR_1) {
 char *VAR_2, *VAR_3;
 char *VAR_4 = FUNC_3 (VAR_1);
 char *VAR_5 = FUNC_2 ("http://%s:%s/%s%s", VAR_0.host, VAR_0.port, VAR_0.file, VAR_4? VAR_4: VAR_1);
 int VAR_6;
 FUNC_0 (VAR_4);
 VAR_3 = FUNC_1 (VAR_5, ((void*)0), &VAR_6);
 FUNC_0 (VAR_5);
 if (VAR_3) {
  VAR_3[VAR_6] = 0;
  VAR_2 = FUNC_4 (VAR_3, "\n\n");
  if (VAR_2) {
   VAR_2 = FUNC_4 (VAR_2 + 1, "\n\n");
  }
  return VAR_2? VAR_2 + 2: VAR_3;
 }
 return ((void*)0);
}
