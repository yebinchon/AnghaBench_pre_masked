
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_ext {void* pos; } ;
typedef enum aa_code { ____Placeholder_aa_code } aa_code ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (struct aa_ext*,int) ;
 size_t FUNC_2 (struct aa_ext*,char**) ;

__attribute__((used)) static bool FUNC_3(struct aa_ext *VAR_1, enum aa_code VAR_2, const char *VAR_3)
{



 void *VAR_4 = VAR_1->pos;




 if (FUNC_1(VAR_1, VAR_0)) {
  char *VAR_5 = ((void*)0);
  size_t VAR_6 = FUNC_2(VAR_1, &VAR_5);

  if (VAR_3 && (!VAR_6 || VAR_5[VAR_6-1] != '\0' || FUNC_0(VAR_3, VAR_5)))
   goto fail;
 } else if (VAR_3) {

  goto fail;
 }


 if (FUNC_1(VAR_1, VAR_2))
  return 1;

fail:
 VAR_1->pos = VAR_4;
 return 0;
}
