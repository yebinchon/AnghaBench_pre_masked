
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t num; int * array; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_1__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_9(void)
{
 if (!VAR_3)
  return;

 if (VAR_2 && FUNC_2()) {
  FUNC_0();

  FUNC_3(VAR_1);
  FUNC_1();
 }



 FUNC_7(VAR_5, ((void*)0));

 for (size_t VAR_8 = 0; VAR_8 < VAR_4.num; VAR_8++)
  FUNC_4(VAR_4.array[VAR_8]);
 FUNC_5(VAR_4);

 FUNC_8(&VAR_6);
 FUNC_8(&VAR_7);
 FUNC_6(&VAR_0);

 VAR_3 = 0;
}
