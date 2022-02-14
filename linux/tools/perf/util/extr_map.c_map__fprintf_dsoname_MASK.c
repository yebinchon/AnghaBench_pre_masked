
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct map {TYPE_1__* dso; } ;
struct TYPE_4__ {int pad_output_len_dso; scalar_t__ show_kernel_path; } ;
struct TYPE_3__ {char* long_name; char* name; } ;
typedef int FILE ;


 size_t FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (char*,int,char*,char const*) ;
 TYPE_2__ VAR_0 ;

size_t FUNC_2(struct map *VAR_1, FILE *VAR_2)
{
 char VAR_3[VAR_0.pad_output_len_dso + 1];
 const char *VAR_4 = "[unknown]";

 if (VAR_1 && VAR_1->dso) {
  if (VAR_0.show_kernel_path && VAR_1->dso->long_name)
   VAR_4 = VAR_1->dso->long_name;
  else
   VAR_4 = VAR_1->dso->name;
 }

 if (VAR_0.pad_output_len_dso) {
  FUNC_1(VAR_3, VAR_0.pad_output_len_dso, "%s", VAR_4);
  VAR_4 = VAR_3;
 }

 return FUNC_0(VAR_2, "%s", VAR_4);
}
