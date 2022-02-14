
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {char* name; } ;
struct map {TYPE_1__* dso; } ;
struct TYPE_2__ {char* long_name; } ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*,size_t,char*,char*,char*,char*) ;

__attribute__((used)) static int FUNC_2(struct symbol *VAR_0, struct map *VAR_1, char *VAR_2,
       size_t VAR_3, int VAR_4)
{
 return FUNC_1(VAR_2, VAR_3, "%s  %s [Percent: %s]", VAR_0->name, VAR_1->dso->long_name,
   FUNC_0(VAR_4));
}
