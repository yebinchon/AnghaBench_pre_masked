
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct module {int taints; } ;
struct TYPE_2__ {char c_true; scalar_t__ module; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (int,int *) ;

__attribute__((used)) static size_t FUNC_1(struct module *VAR_2, char *VAR_3)
{
 size_t VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_1[VAR_5].module && FUNC_0(VAR_5, &VAR_2->taints))
   VAR_3[VAR_4++] = VAR_1[VAR_5].c_true;
 }

 return VAR_4;
}
