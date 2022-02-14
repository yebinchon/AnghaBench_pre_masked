
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int start; int end; } ;
typedef TYPE_1__ jsmntok_t ;



__attribute__((used)) static void FUNC_0(char *VAR_0, jsmntok_t *VAR_1)
{
 int VAR_2;


 for (VAR_2 = VAR_1->start; VAR_2 < VAR_1->end; VAR_2++) {
  if (VAR_0[VAR_2] == ',')
   VAR_1->end = VAR_2;
 }
}
