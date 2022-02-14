
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct of_phandle_args {int* args; } ;
struct TYPE_3__ {int id; char* name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct snd_soc_component *VAR_2,
       struct of_phandle_args *VAR_3,
       const char **VAR_4)
{
 int VAR_5 = VAR_3->args[0];
 int VAR_6 = -VAR_0;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++) {
  if (VAR_1[VAR_7].id == VAR_5) {
   *VAR_4 = VAR_1[VAR_7].name;
   VAR_6 = 0;
   break;
  }
 }

 return VAR_6;
}
