
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char const*,char*,unsigned int) ;
 int FUNC_1 (char*,char const*,unsigned int) ;
 int FUNC_2 (char*,char*,char*,char*,char*,char*,char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (unsigned int) ;

int FUNC_6(const char *VAR_3, unsigned VAR_4,
          const char *VAR_5, char *VAR_6)
{
 char *VAR_7;
 char *VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_7 = FUNC_5(VAR_4);
 if (!VAR_7)
  return -VAR_1;

 FUNC_1(VAR_7, VAR_3, VAR_4);
 VAR_7[VAR_4 - 1] = '\0';

 VAR_8 = FUNC_0(VAR_5, VAR_7, VAR_4);
 if (!VAR_8) {
  VAR_9 = -VAR_0;
  goto free;
 }

 if (FUNC_3(VAR_8) == 19 && VAR_8[0] == '"' && VAR_8[18] == '"') {
  VAR_8[18] = 0;
  VAR_8++;
 }

 VAR_10 = FUNC_2(VAR_8, "%02hhx:%02hhx:%02hhx:%02hhx:%02hhx:%02hhx",
     &VAR_6[0], &VAR_6[1], &VAR_6[2], &VAR_6[3], &VAR_6[4], &VAR_6[5]);

 if (VAR_10 != VAR_2)
  VAR_10 = FUNC_2(VAR_8, "%02hhx-%02hhx-%02hhx-%02hhx-%02hhx-%02hhx",
   &VAR_6[0], &VAR_6[1], &VAR_6[2], &VAR_6[3], &VAR_6[4], &VAR_6[5]);

 if (VAR_10 != VAR_2) {
  VAR_9 = -VAR_0;
  goto free;
 }

 VAR_9 = 0;

free:
 FUNC_4(VAR_7);
 return VAR_9;
}
