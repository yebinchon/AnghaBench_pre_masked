
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {int dummy; } ;
struct altbuf {scalar_t__ len; } ;


 char* FUNC_0 (struct altbuf*,int) ;
 int FUNC_1 (struct altbuf*,char*,size_t) ;
 int FUNC_2 (struct mg_str*,char const*,struct altbuf*) ;

int FUNC_3(struct mg_str *VAR_0, const char *VAR_1, char **VAR_2,
                          size_t VAR_3) {
  struct altbuf VAR_4;
  FUNC_1(&VAR_4, *VAR_2, VAR_3);
  if (VAR_0 == ((void*)0)) return 0;
  if (*VAR_2 != ((void*)0) && VAR_3 > 0) *VAR_2[0] = '\0';

  FUNC_2(VAR_0, VAR_1, &VAR_4);





  *VAR_2 = FUNC_0(&VAR_4, 1 );
  return VAR_4.len > 0 ? VAR_4.len - 1 : 0;
}
