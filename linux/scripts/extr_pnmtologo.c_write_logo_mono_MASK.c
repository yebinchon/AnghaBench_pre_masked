
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ red; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (TYPE_1__) ;
 TYPE_1__** VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned char) ;

__attribute__((used)) static void FUNC_6(void)
{
    unsigned int VAR_3, VAR_4;
    unsigned char VAR_5, VAR_6;


    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
     if (!FUNC_1(VAR_0[VAR_3][VAR_4]) && !FUNC_2(VAR_0[VAR_3][VAR_4]))
  FUNC_0("Image must be monochrome\n");


    FUNC_4();


    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
 for (VAR_4 = 0; VAR_4 < VAR_2;) {
     for (VAR_5 = 0, VAR_6 = 0x80; VAR_6 && VAR_4 < VAR_2; VAR_4++, VAR_6 >>= 1)
  if (VAR_0[VAR_3][VAR_4].red)
      VAR_5 |= VAR_6;
     FUNC_5(VAR_5);
 }
    }


    FUNC_3();
}
