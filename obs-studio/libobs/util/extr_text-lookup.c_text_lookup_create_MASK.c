
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct text_lookup {int dummy; } ;
typedef struct text_lookup lookup_t ;


 int FUNC_0 (struct text_lookup*) ;
 struct text_lookup* FUNC_1 (int) ;
 int FUNC_2 (struct text_lookup*,char const*) ;

lookup_t *FUNC_3(const char *VAR_0)
{
 struct text_lookup *VAR_1 = FUNC_1(sizeof(struct text_lookup));

 if (!FUNC_2(VAR_1, VAR_0)) {
  FUNC_0(VAR_1);
  VAR_1 = ((void*)0);
 }

 return VAR_1;
}
