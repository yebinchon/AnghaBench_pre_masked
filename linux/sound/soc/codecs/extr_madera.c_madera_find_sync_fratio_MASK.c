
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int min; unsigned int max; int fratio; int ratio; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_2, int *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  if (VAR_1[VAR_4].min <= VAR_2 &&
      VAR_2 <= VAR_1[VAR_4].max) {
   if (VAR_3)
    *VAR_3 = VAR_1[VAR_4].fratio;

   return VAR_1[VAR_4].ratio;
  }
 }

 return -VAR_0;
}
