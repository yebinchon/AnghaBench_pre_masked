
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* speakers; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (unsigned char) ;

__attribute__((used)) static int FUNC_2(int VAR_1, unsigned char VAR_2)
{
 int VAR_3 = FUNC_1(VAR_2);
 int VAR_4;




 if (VAR_1 >= FUNC_0(VAR_0))
  return -1;

 if (VAR_3) {
  for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
   if (VAR_0[VAR_1].speakers[7 - VAR_4] == VAR_3)
    return VAR_4;
  }
 }

 return -1;
}
