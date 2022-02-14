
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 size_t FUNC_1 (char const**,unsigned char**,size_t*) ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static size_t FUNC_3(const char *VAR_0, unsigned char *VAR_1,
    size_t VAR_2)
{
 const char *VAR_3;
 size_t VAR_4, VAR_5 = 0;


 VAR_3 = FUNC_2(VAR_0, ':');
 if (!VAR_3)
  return 0;
 VAR_3++;


 while (*VAR_3) {
  if (!FUNC_0(*VAR_3))
   break;
  VAR_3++;
 }

 do {
  VAR_4 = FUNC_1(&VAR_3, &VAR_1, &VAR_2);
  VAR_5 += VAR_4;
  VAR_3++;
 } while (VAR_4 > 0);


 return VAR_5;
}
