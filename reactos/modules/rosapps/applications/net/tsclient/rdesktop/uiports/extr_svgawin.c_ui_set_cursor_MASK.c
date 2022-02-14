
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tcursor ;
struct TYPE_3__ {int x; int y; } ;


 int FUNC_0 () ;
 int FUNC_1 (int,int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (TYPE_1__*,void*,int) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_3(void* VAR_3)
{
  int VAR_4;
  int VAR_5;
  int VAR_6;
  int VAR_7;

  VAR_6 = VAR_1;
  VAR_7 = VAR_2;
  VAR_4 = VAR_1 + VAR_0.x;
  VAR_5 = VAR_2 + VAR_0.y;
  FUNC_2(&VAR_0, VAR_3, sizeof(tcursor));
  VAR_1 = VAR_4 - VAR_0.x;
  VAR_2 = VAR_5 - VAR_0.y;
  FUNC_1(VAR_6, VAR_7);
  FUNC_0();
}
