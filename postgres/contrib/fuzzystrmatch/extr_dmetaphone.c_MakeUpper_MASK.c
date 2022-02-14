
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* str; } ;
typedef TYPE_1__ metastring ;


 char FUNC_0 (unsigned char) ;

__attribute__((used)) static void
FUNC_1(metastring *VAR_0)
{
 char *VAR_1;

 for (VAR_1 = VAR_0->str; *VAR_1; VAR_1++)
  *VAR_1 = FUNC_0((unsigned char) *VAR_1);
}
