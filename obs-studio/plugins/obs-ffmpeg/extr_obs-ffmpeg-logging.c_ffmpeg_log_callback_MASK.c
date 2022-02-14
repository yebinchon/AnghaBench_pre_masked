
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct log_context {char* str; int print_prefix; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*,int,char const*,int ,char*,int,int *) ;
 int FUNC_1 (int,char*,char*) ;
 struct log_context* FUNC_2 (void*) ;
 int FUNC_3 (struct log_context*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void *VAR_4, int VAR_5, const char *VAR_6,
    va_list VAR_7)
{
 if (VAR_6 == ((void*)0))
  return;

 struct log_context *VAR_8 = FUNC_2(VAR_4);

 char *VAR_9 = VAR_8->str;

 FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_9 + FUNC_4(VAR_9),
      (int)(sizeof(VAR_8->str) - FUNC_4(VAR_9)),
      &VAR_8->print_prefix);

 int VAR_10;
 switch (VAR_5) {
 case 130:
 case 132:
  VAR_10 = VAR_1;
  break;
 case 133:
 case 128:
  VAR_10 = VAR_3;
  break;
 case 131:
 case 129:
  VAR_10 = VAR_2;
  break;
 case 134:
 default:
  VAR_10 = VAR_0;
 }

 if (!VAR_8->print_prefix)
  return;

 char *VAR_11 = VAR_9 + FUNC_4(VAR_9) - 1;
 while (VAR_9 < VAR_11) {
  if (*VAR_11 != '\n')
   break;
  *VAR_11-- = '\0';
 }

 if (VAR_11 <= VAR_9)
  goto cleanup;

 FUNC_1(VAR_10, "[ffmpeg] %s", VAR_9);

cleanup:
 FUNC_3(VAR_8);
}
