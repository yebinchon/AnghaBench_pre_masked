
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (size_t) ;
 int FUNC_1 (char**,char const**) ;
 size_t FUNC_2 (char const*) ;

char *FUNC_3(const char *VAR_0, size_t VAR_1)
{
 const char *VAR_2;
 char *VAR_3, *VAR_4;

 if (!VAR_1)
  VAR_1 = FUNC_2(VAR_0);

 if (VAR_1 < 2)
  return ((void*)0);
 if (VAR_0[0] != VAR_0[VAR_1 - 1])
  return ((void*)0);
 if (VAR_0[0] != '\"' && VAR_0[0] != '\'')
  return ((void*)0);


 VAR_3 = FUNC_0(--VAR_1);
 VAR_2 = VAR_0 + 1;
 VAR_4 = VAR_3;

 while (*VAR_2 && --VAR_1 > 0) {
  if (*VAR_2 == '\\') {
   VAR_2++;
   FUNC_1(&VAR_4, &VAR_2);
  } else {
   *(VAR_4++) = *(VAR_2++);
  }
 }

 *VAR_4 = 0;
 return VAR_3;
}
