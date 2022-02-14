
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; scalar_t__** message; } ;
typedef TYPE_1__ MATRIX_MESSAGE ;



void FUNC_0(MATRIX_MESSAGE *VAR_0)
{
 int VAR_1, VAR_2;

 for(VAR_1 = 0; VAR_1 < VAR_0->width; VAR_1++)
  for(VAR_2 = 0; VAR_2 < VAR_0->height; VAR_2++)
   VAR_0->message[VAR_1][VAR_2] = 0;
}
