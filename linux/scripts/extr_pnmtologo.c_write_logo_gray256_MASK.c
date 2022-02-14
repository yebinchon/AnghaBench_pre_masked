
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int red; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__) ;
 TYPE_1__** VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(void)
{
    unsigned int VAR_3, VAR_4;


    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
     if (!FUNC_1(VAR_0[VAR_3][VAR_4]))
  FUNC_0("Image must be grayscale\n");


    FUNC_3();


    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
     FUNC_4(VAR_0[VAR_3][VAR_4].red);


    FUNC_2();
}
