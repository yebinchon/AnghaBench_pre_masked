
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int priv_data; } ;
typedef TYPE_1__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,char*,char*,int ) ;
 int FUNC_1 (int ,char*,char*,char*) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static bool FUNC_3(AVCodecContext *VAR_2, char **VAR_3)
{
 bool VAR_4 = 1;

 if (!VAR_2 || !VAR_2->priv_data)
  return 1;

 while (*VAR_3) {
  char *VAR_5 = *VAR_3;
  char *VAR_6 = FUNC_2(VAR_5, '=');

  if (VAR_6) {
   char *VAR_7 = VAR_5;
   char *VAR_8;

   *VAR_6 = 0;
   VAR_8 = VAR_6 + 1;

   if (FUNC_0(VAR_2, VAR_7, VAR_8,
           VAR_0)) {
    FUNC_1(VAR_1, "Failed to set %s=%s", VAR_7,
         VAR_8);
    VAR_4 = 0;
   }
  }

  VAR_3++;
 }

 return VAR_4;
}
