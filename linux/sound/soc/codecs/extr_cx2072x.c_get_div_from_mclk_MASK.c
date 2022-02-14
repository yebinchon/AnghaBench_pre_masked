
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int mclk; unsigned int div; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static unsigned int FUNC_1(unsigned int VAR_1)
{
 unsigned int VAR_2 = 8;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (VAR_1 <= VAR_0[VAR_3].mclk) {
   VAR_2 = VAR_0[VAR_3].div;
   break;
  }
 }
 return VAR_2;
}
