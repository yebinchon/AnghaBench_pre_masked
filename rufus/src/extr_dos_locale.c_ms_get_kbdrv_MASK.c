
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int size; int * list; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_1 (int ,char const*) ;

__attribute__((used)) static int FUNC_2(const char* VAR_1)
{
 unsigned int VAR_2, VAR_3;
 for (VAR_2=0; VAR_2<FUNC_0(VAR_0); VAR_2++) {
  for (VAR_3=0; VAR_3<VAR_0[VAR_2].size; VAR_3++) {
   if (FUNC_1(VAR_0[VAR_2].list[VAR_3], VAR_1) == 0) {
    return VAR_2;
   }
  }
 }
 return -1;
}
