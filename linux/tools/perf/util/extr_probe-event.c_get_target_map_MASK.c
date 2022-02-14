
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nsinfo {int dummy; } ;
struct map {TYPE_1__* dso; } ;
struct TYPE_2__ {int nsinfo; } ;


 struct map* FUNC_0 (char const*) ;
 struct map* FUNC_1 (char const*) ;
 int FUNC_2 (struct nsinfo*) ;

struct map *FUNC_3(const char *VAR_0, struct nsinfo *VAR_1, bool VAR_2)
{

 if (VAR_2) {
  struct map *VAR_3;

  VAR_3 = FUNC_0(VAR_0);
  if (VAR_3 && VAR_3->dso)
   VAR_3->dso->nsinfo = FUNC_2(VAR_1);
  return VAR_3;
 } else {
  return FUNC_1(VAR_0);
 }
}
