
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* PUCHAR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int VAR_3 ;

BOOLEAN FUNC_4(void)
{
 PUCHAR VAR_4;
 BOOLEAN VAR_5 = VAR_2;

    FUNC_1();
 FUNC_0((0,"IsRetAtEIP()\n"));

 VAR_4=(PUCHAR)FUNC_2(VAR_0,VAR_1);

    switch(*VAR_4)
    {
        case 0xc2:
        case 0xc3:
        case 0xca:
        case 0xcb:
        case 0xcf:
   VAR_5 = VAR_3;
            break;
    }

    FUNC_3();

    return VAR_5;
}
