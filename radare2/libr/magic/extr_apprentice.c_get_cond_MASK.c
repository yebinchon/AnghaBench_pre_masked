
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;






 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,char*,size_t) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, const char **VAR_1) {
 const struct cond_tbl_s *VAR_2;
 static const struct cond_tbl_s {
  char name[8];
  size_t len;
  int cond;
 } VAR_3[] = {
  { "if", 2, 129 },
  { "elif", 4, 131 },
  { "else", 4, 130 },
  { "", 0, 128 },
 };

 for (VAR_2 = VAR_3; VAR_2->len; VAR_2++) {
  if (FUNC_1 (VAR_0, VAR_2->name, VAR_2->len) == 0 &&
    FUNC_0 ((ut8)VAR_0[VAR_2->len])) {
   if (VAR_1) {
    *VAR_1 = VAR_0 + VAR_2->len;
   }
   break;
  }
 }
 return VAR_2->cond;
}
