
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,char const*,size_t) ;
 int FUNC_3 (char*,size_t,char*) ;
 int FUNC_4 (char*,char*) ;
 size_t FUNC_5 (char const*) ;

bool
FUNC_6(const char *VAR_0, const char *VAR_1, size_t VAR_2,
      char *VAR_3)
{
 size_t VAR_4 = FUNC_5(VAR_0);


 char *VAR_5 = FUNC_1(VAR_4 + VAR_2 + 1);
 bool VAR_6;

 if (!VAR_5)
  return 0;





 FUNC_2(VAR_5, VAR_0, VAR_4);
 FUNC_2(VAR_5 + VAR_4, VAR_1, VAR_2);

 FUNC_4(VAR_3, "md5");
 VAR_6 = FUNC_3(VAR_5, VAR_4 + VAR_2, VAR_3 + 3);

 FUNC_0(VAR_5);

 return VAR_6;
}
