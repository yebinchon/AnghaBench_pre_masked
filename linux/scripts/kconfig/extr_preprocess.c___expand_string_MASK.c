
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const**,int,char**) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*,char const*,size_t) ;
 char* FUNC_5 (int) ;
 char* FUNC_6 (char*,size_t) ;

__attribute__((used)) static char *FUNC_7(const char **VAR_0, bool (*VAR_1)(char VAR_2),
        int VAR_3, char *VAR_4[])
{
 const char *VAR_5, *VAR_6;
 char *VAR_7, *VAR_8;
 size_t VAR_9, VAR_10;

 VAR_8 = FUNC_5(1);
 *VAR_8 = 0;
 VAR_10 = 1;

 VAR_6 = VAR_5 = *VAR_0;

 while (1) {
  if (*VAR_6 == '$') {
   VAR_9 = VAR_6 - VAR_5;
   VAR_6++;
   VAR_7 = FUNC_0(&VAR_6, VAR_3, VAR_4);
   VAR_10 += VAR_9 + FUNC_3(VAR_7);
   VAR_8 = FUNC_6(VAR_8, VAR_10);
   FUNC_4(VAR_8, VAR_5, VAR_9);
   FUNC_2(VAR_8, VAR_7);
   FUNC_1(VAR_7);
   VAR_5 = VAR_6;
   continue;
  }

  if (VAR_1(*VAR_6))
   break;

  VAR_6++;
 }

 VAR_9 = VAR_6 - VAR_5;
 VAR_10 += VAR_9;
 VAR_8 = FUNC_6(VAR_8, VAR_10);
 FUNC_4(VAR_8, VAR_5, VAR_9);


 *VAR_0 = VAR_6;

 return VAR_8;
}
