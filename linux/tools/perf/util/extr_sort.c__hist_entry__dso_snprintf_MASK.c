
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct map {TYPE_1__* dso; } ;
struct TYPE_2__ {char* long_name; char* short_name; } ;


 int FUNC_0 (char*,size_t,char*,unsigned int,unsigned int,char const*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_1(struct map *VAR_1, char *VAR_2,
         size_t VAR_3, unsigned int VAR_4)
{
 if (VAR_1 && VAR_1->dso) {
  const char *VAR_5 = VAR_0 > 0 ? VAR_1->dso->long_name :
   VAR_1->dso->short_name;
  return FUNC_0(VAR_2, VAR_3, "%-*.*s", VAR_4, VAR_4, VAR_5);
 }

 return FUNC_0(VAR_2, VAR_3, "%-*.*s", VAR_4, VAR_4, "[unknown]");
}
