
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ WORD ;
struct TYPE_6__ {int counter; scalar_t__ random_reg1; void* height; void* width; scalar_t__ msgindex; } ;
typedef TYPE_1__ MATRIX_MESSAGE ;
typedef int HWND ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 TYPE_1__* FUNC_5 (int) ;
 void* FUNC_6 (int,int ) ;

MATRIX_MESSAGE *FUNC_7(HWND VAR_7, int VAR_8, int VAR_9)
{
 MATRIX_MESSAGE *VAR_10;

 if((VAR_10 = FUNC_5(sizeof(MATRIX_MESSAGE))) == 0)
  return 0;

 FUNC_0(VAR_10);

 VAR_10->msgindex = 0;
 VAR_10->width = FUNC_6(VAR_8, VAR_1);
 VAR_10->height = FUNC_6(VAR_9, VAR_0);
 VAR_10->counter = -(int)(FUNC_4() % VAR_2 + VAR_2);

 VAR_10->random_reg1 = (WORD)FUNC_1();

 FUNC_3(VAR_7, VAR_5, VAR_4, VAR_3);

 FUNC_2(VAR_10, 0, VAR_6[0]);

 return VAR_10;
}
