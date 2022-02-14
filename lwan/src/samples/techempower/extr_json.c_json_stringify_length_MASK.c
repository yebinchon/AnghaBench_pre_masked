
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SB ;
typedef int JsonNode ;


 int FUNC_0 (int *,int const*) ;
 int FUNC_1 (int *,int const*,char const*,int ) ;
 char* FUNC_2 (int *,size_t*) ;
 int FUNC_3 (int *) ;

char *FUNC_4(const JsonNode *VAR_0, const char *VAR_1, size_t *VAR_2)
{
 SB VAR_3;
 FUNC_3(&VAR_3);

 if (VAR_1 != ((void*)0))
  FUNC_1(&VAR_3, VAR_0, VAR_1, 0);
 else
  FUNC_0(&VAR_3, VAR_0);

 return FUNC_2(&VAR_3, VAR_2);
}
