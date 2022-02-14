
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_ext {void* pos; } ;


 int VAR_0 ;
 char* FUNC_0 (char const*,int,int ) ;
 int FUNC_1 (struct aa_ext*,char const**,char const*) ;

__attribute__((used)) static int FUNC_2(struct aa_ext *VAR_1, char **VAR_2, const char *VAR_3)
{
 const char *VAR_4;
 void *VAR_5 = VAR_1->pos;
 int VAR_6 = FUNC_1(VAR_1, &VAR_4, VAR_3);
 *VAR_2 = ((void*)0);

 if (!VAR_6)
  return 0;

 *VAR_2 = FUNC_0(VAR_4, VAR_6, VAR_0);
 if (!*VAR_2) {
  VAR_1->pos = VAR_5;
  return 0;
 }

 return VAR_6;
}
