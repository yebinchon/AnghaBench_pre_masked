
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct update_info {char* etag_remote; } ;


 char* FUNC_0 (char*) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static size_t FUNC_3(char *VAR_0, size_t VAR_1, size_t VAR_2,
     struct update_info *VAR_3)
{
 if (!FUNC_2(VAR_0, "ETag: ", 6)) {
  char *VAR_4 = VAR_0 + 6;
  if (*VAR_4) {
   char *VAR_5, *VAR_6;

   VAR_5 = FUNC_0(VAR_4);

   VAR_6 = FUNC_1(VAR_5, '\r');
   if (VAR_6)
    *VAR_6 = 0;

   VAR_6 = FUNC_1(VAR_5, '\n');
   if (VAR_6)
    *VAR_6 = 0;

   VAR_3->etag_remote = VAR_5;
  }
 }
 return VAR_2 * VAR_1;
}
