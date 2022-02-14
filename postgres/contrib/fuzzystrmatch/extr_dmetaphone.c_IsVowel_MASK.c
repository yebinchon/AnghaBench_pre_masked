
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; char* str; } ;
typedef TYPE_1__ metastring ;



__attribute__((used)) static int
FUNC_0(metastring *VAR_0, int VAR_1)
{
 char VAR_2;

 if ((VAR_1 < 0) || (VAR_1 >= VAR_0->length))
  return 0;

 VAR_2 = *(VAR_0->str + VAR_1);
 if ((VAR_2 == 'A') || (VAR_2 == 'E') || (VAR_2 == 'I') || (VAR_2 == 'O') ||
  (VAR_2 == 'U') || (VAR_2 == 'Y'))
  return 1;

 return 0;
}
