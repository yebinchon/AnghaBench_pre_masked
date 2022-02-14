
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; } ;
typedef TYPE_1__* CommandPtr ;



__attribute__((used)) static int
FUNC_0(const char *const VAR_0, const CommandPtr VAR_1)
{
 register const char *VAR_2, *VAR_3;
 int VAR_4;

 for (VAR_3 = (*VAR_1).name, VAR_2 = VAR_0; ; ) {
  if (*VAR_2 == 0)
   break;
  VAR_4 = *VAR_2++ - *VAR_3++;
  if (VAR_4)
   return VAR_4;
 }
 return (0);
}
