
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct str_find {char* error; } ;
struct match_state {char* error; } ;
typedef int ms ;


 int FUNC_0 (struct str_find*,int ,size_t) ;
 int FUNC_1 (struct str_find*,char const*,char const*,struct str_find*,size_t,int ) ;

int
FUNC_2(const char *VAR_0, const char *VAR_1, struct str_find *VAR_2,
    size_t VAR_3, const char **VAR_4)
{
 struct match_state VAR_5;
 int VAR_6;

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 FUNC_0(VAR_2, 0, VAR_3 * sizeof(*VAR_2));

 VAR_6 = FUNC_1(&VAR_5, VAR_1, VAR_0, VAR_2, VAR_3, 0);
 if (VAR_5.error != ((void*)0)) {

  *VAR_4 = VAR_5.error;
  VAR_6 = 0;
 } else
  *VAR_4 = ((void*)0);

 return (VAR_6);
}
