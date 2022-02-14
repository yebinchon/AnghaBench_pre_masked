
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (void*,int,char const*,int) ;
 int FUNC_1 (void*,int,char const*,int) ;
 int FUNC_2 (char const*,int,int) ;
 char* FUNC_3 (char const*,char) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(void *VAR_1, const char *VAR_2)
{
 const char *VAR_3 = VAR_2;
 const char *VAR_4;
 int VAR_5, VAR_6 = 0;


 while (*VAR_3 == '/')
  VAR_3++;

 for (VAR_4 = VAR_3; *VAR_4; VAR_3 = VAR_4 + 1, VAR_6 = VAR_5) {

  VAR_4 = FUNC_3(VAR_3, '/');
  if (!VAR_4)
   VAR_4 = VAR_3 + FUNC_4(VAR_3);

  VAR_5 = FUNC_1(VAR_1, VAR_6, VAR_3,
    VAR_4 - VAR_3);
  if (VAR_5 == -VAR_0) {
   VAR_5 = FUNC_0(VAR_1, VAR_6, VAR_3,
             VAR_4 - VAR_3);
  }
  if (VAR_5 < 0) {
   FUNC_2(VAR_3, VAR_4 - VAR_3, VAR_5);
   return -1;
  }
 }

 return 0;
}
