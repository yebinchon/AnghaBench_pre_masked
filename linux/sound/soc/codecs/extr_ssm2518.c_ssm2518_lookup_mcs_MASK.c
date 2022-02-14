
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ssm2518 {unsigned int const sysclk; } ;
struct TYPE_3__ {unsigned int rate; unsigned int* sysclks; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct ssm2518 *VAR_2,
 unsigned int VAR_3)
{
 const unsigned int *VAR_4 = ((void*)0);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  if (VAR_1[VAR_5].rate == VAR_3) {
   VAR_4 = VAR_1[VAR_5].sysclks;
   break;
  }
 }

 if (!VAR_4)
  return -VAR_0;

 for (VAR_5 = 0; VAR_4[VAR_5]; VAR_5++) {
  if (VAR_4[VAR_5] == VAR_2->sysclk)
   return VAR_5;
 }

 return -VAR_0;
}
