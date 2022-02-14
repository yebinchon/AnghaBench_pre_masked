
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct symbol {int dummy; } ;
struct map {int dso; } ;


 char* VAR_0 ;
 char* FUNC_0 (int ,int ,struct symbol*,int,int,int ) ;
 int FUNC_1 (struct map*,int ) ;

char *FUNC_2(struct map *VAR_1, u64 VAR_2, struct symbol *VAR_3)
{
 if (VAR_1 == ((void*)0))
  return VAR_0;
 return FUNC_0(VAR_1->dso, FUNC_1(VAR_1, VAR_2), VAR_3, 1, 1, VAR_2);
}
