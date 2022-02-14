
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counted_str {char* name; int count; } ;
typedef int gfp_t ;


 struct counted_str* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;

char *FUNC_2(int VAR_0, gfp_t VAR_1)
{
 struct counted_str *VAR_2;

 VAR_2 = FUNC_0(sizeof(struct counted_str) + VAR_0, VAR_1);
 if (!VAR_2)
  return ((void*)0);

 FUNC_1(&VAR_2->count);
 return VAR_2->name;
}
