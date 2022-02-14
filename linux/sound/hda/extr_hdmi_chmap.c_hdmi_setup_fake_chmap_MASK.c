
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int channels; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 unsigned char FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int** VAR_1 ;

__attribute__((used)) static void FUNC_3(unsigned char *VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5 = FUNC_2(VAR_3);

 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
  if (VAR_5 < FUNC_0(VAR_0) &&
      VAR_4 < VAR_0[VAR_5].channels)
   VAR_2[VAR_4] = FUNC_1(VAR_5, VAR_1[VAR_3][VAR_4] & 0x0f);
  else
   VAR_2[VAR_4] = 0;
 }
}
