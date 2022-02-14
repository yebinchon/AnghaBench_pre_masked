
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_serve_http_opts {char* per_directory_auth_file; char* hidden_file_pattern; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,scalar_t__,char const*) ;
 int FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,int ) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1,
                             const struct mg_serve_http_opts *VAR_2,
                             int VAR_3) {
  const char *VAR_4 = VAR_2->per_directory_auth_file;
  const char *VAR_5 = VAR_2->hidden_file_pattern;


  const char *VAR_6 = FUNC_3(VAR_1, VAR_0);
  if (VAR_6 != ((void*)0)) {
    VAR_1 = VAR_6 + 1;
  }

  return (VAR_3 && (!FUNC_1(VAR_1, ".") || !FUNC_1(VAR_1, ".."))) ||
         (VAR_4 != ((void*)0) && FUNC_0(VAR_4, FUNC_2(VAR_4), VAR_1) == FUNC_2(VAR_4)) ||
         (VAR_5 != ((void*)0) && FUNC_0(VAR_5, FUNC_2(VAR_5), VAR_1) > 0);
}
