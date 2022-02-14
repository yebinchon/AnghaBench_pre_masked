
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct str_match {char* error; int sm_nmatch; scalar_t__ sm_so; scalar_t__ sm_eo; int ** sm_match; } ;
struct str_find {char* error; int sm_nmatch; scalar_t__ sm_so; scalar_t__ sm_eo; int ** sm_match; } ;
struct match_state {char* error; int sm_nmatch; scalar_t__ sm_so; scalar_t__ sm_eo; int ** sm_match; } ;
typedef int sm ;
typedef int ms ;


 int VAR_0 ;
 int ** FUNC_0 (size_t,int) ;
 int VAR_1 ;
 int FUNC_1 (struct str_match*,int ,int) ;
 int FUNC_2 (struct str_match*,char const*,char const*,struct str_match*,size_t,int ) ;
 int FUNC_3 (struct str_match*) ;
 char* FUNC_4 (int ) ;
 int * FUNC_5 (char const*,size_t) ;

int
FUNC_6(const char *VAR_2, const char *VAR_3, struct str_match *VAR_4,
    const char **VAR_5)
{
 struct str_find VAR_6[VAR_0];
 struct match_state VAR_7;
 int VAR_8, VAR_9;
 size_t VAR_10, VAR_11;

 VAR_11 = VAR_0;
 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 FUNC_1(VAR_6, 0, sizeof(VAR_6));
 FUNC_1(VAR_4, 0, sizeof(*VAR_4));

 VAR_9 = FUNC_2(&VAR_7, VAR_3, VAR_2, VAR_6, VAR_11, 0);
 if (VAR_9 <= 0 || VAR_7.error != ((void*)0)) {

  *VAR_5 = VAR_7.error;
  return (-1);
 }

 if ((VAR_4->sm_match = FUNC_0((size_t)VAR_9, sizeof(char *))) == ((void*)0)) {
  *VAR_5 = FUNC_4(VAR_1);
  return (-1);
 }
 VAR_4->sm_nmatch = VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  if (VAR_6[VAR_8].sm_so > VAR_6[VAR_8].sm_eo)
   continue;
  VAR_10 = (size_t)(VAR_6[VAR_8].sm_eo - VAR_6[VAR_8].sm_so);
  if ((VAR_4->sm_match[VAR_8] = FUNC_5(VAR_2 +
      VAR_6[VAR_8].sm_so, VAR_10)) == ((void*)0)) {
   *VAR_5 = FUNC_4(VAR_1);
   FUNC_3(VAR_4);
   return (-1);
  }
 }

 *VAR_5 = ((void*)0);
 return (0);
}
