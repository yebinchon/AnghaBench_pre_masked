
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_ext {void* pos; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct aa_ext*,int ,char const*) ;
 size_t FUNC_1 (struct aa_ext*,char**) ;

__attribute__((used)) static int FUNC_2(struct aa_ext *VAR_1, const char **VAR_2, const char *VAR_3)
{
 char *VAR_4;
 size_t VAR_5 = 0;
 void *VAR_6 = VAR_1->pos;
 *VAR_2 = ((void*)0);
 if (FUNC_0(VAR_1, VAR_0, VAR_3)) {
  VAR_5 = FUNC_1(VAR_1, &VAR_4);
  if (VAR_5) {

   if (VAR_4[VAR_5 - 1] != 0)
    goto fail;
   *VAR_2 = VAR_4;

   return VAR_5;
  }
 }

fail:
 VAR_1->pos = VAR_6;
 return 0;
}
