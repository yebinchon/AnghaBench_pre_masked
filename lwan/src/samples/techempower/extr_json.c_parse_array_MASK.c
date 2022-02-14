
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JsonNode ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (char const**,int **) ;
 int FUNC_4 (char const**) ;

__attribute__((used)) static bool FUNC_5(const char **VAR_0, JsonNode **VAR_1)
{
 const char *VAR_2 = *VAR_0;
 JsonNode *VAR_3 = VAR_1 ? FUNC_2() : ((void*)0);
 JsonNode *VAR_4;

 if (*VAR_2++ != '[')
  goto failure;
 FUNC_4(&VAR_2);

 if (*VAR_2 == ']') {
  VAR_2++;
  goto success;
 }

 for (;;) {
  if (!FUNC_3(&VAR_2, VAR_1 ? &VAR_4 : ((void*)0)))
   goto failure;
  FUNC_4(&VAR_2);

  if (VAR_1)
   FUNC_0(VAR_3, VAR_4);

  if (*VAR_2 == ']') {
   VAR_2++;
   goto success;
  }

  if (*VAR_2++ != ',')
   goto failure;
  FUNC_4(&VAR_2);
 }

success:
 *VAR_0 = VAR_2;
 if (VAR_1)
  *VAR_1 = VAR_3;
 return 1;

failure:
 FUNC_1(VAR_3);
 return 0;
}
