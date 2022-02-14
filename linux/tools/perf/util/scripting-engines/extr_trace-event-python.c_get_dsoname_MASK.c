
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct map {TYPE_1__* dso; } ;
struct TYPE_4__ {scalar_t__ show_kernel_path; } ;
struct TYPE_3__ {char* long_name; char* name; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static const char *FUNC_0(struct map *VAR_1)
{
 const char *VAR_2 = "[unknown]";

 if (VAR_1 && VAR_1->dso) {
  if (VAR_0.show_kernel_path && VAR_1->dso->long_name)
   VAR_2 = VAR_1->dso->long_name;
  else
   VAR_2 = VAR_1->dso->name;
 }

 return VAR_2;
}
