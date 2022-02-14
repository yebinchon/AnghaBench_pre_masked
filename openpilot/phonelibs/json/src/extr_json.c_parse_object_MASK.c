
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JsonNode ;


 int FUNC_0 (int *,char*,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (char const**,char**) ;
 int FUNC_5 (char const**,int **) ;
 int FUNC_6 (char const**) ;

__attribute__((used)) static bool FUNC_7(const char **VAR_0, JsonNode **VAR_1)
{
 const char *VAR_2 = *VAR_0;
 JsonNode *VAR_3 = VAR_1 ? FUNC_3() : ((void*)0);
 char *VAR_4;
 JsonNode *VAR_5;

 if (*VAR_2++ != '{')
  goto failure;
 FUNC_6(&VAR_2);

 if (*VAR_2 == '}') {
  VAR_2++;
  goto success;
 }

 for (;;) {
  if (!FUNC_4(&VAR_2, VAR_1 ? &VAR_4 : ((void*)0)))
   goto failure;
  FUNC_6(&VAR_2);

  if (*VAR_2++ != ':')
   goto failure_free_key;
  FUNC_6(&VAR_2);

  if (!FUNC_5(&VAR_2, VAR_1 ? &VAR_5 : ((void*)0)))
   goto failure_free_key;
  FUNC_6(&VAR_2);

  if (VAR_1)
   FUNC_0(VAR_3, VAR_4, VAR_5);

  if (*VAR_2 == '}') {
   VAR_2++;
   goto success;
  }

  if (*VAR_2++ != ',')
   goto failure;
  FUNC_6(&VAR_2);
 }

success:
 *VAR_0 = VAR_2;
 if (VAR_1)
  *VAR_1 = VAR_3;
 return 1;

failure_free_key:
 if (VAR_1)
  FUNC_1(VAR_4);
failure:
 FUNC_2(VAR_3);
 return 0;
}
