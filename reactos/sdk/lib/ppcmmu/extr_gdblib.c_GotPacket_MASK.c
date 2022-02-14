
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int srr1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 void* FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (char,int) ;
 int FUNC_6 (int ) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_7 () ;

void FUNC_8()
{
    int VAR_6, VAR_7, VAR_8;

    VAR_0 = 0;
    switch (VAR_2[VAR_1++])
    {
    case 'g':
        FUNC_4();
        for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
        {
            FUNC_5(((int *)VAR_4)[VAR_6], 8);
        }
        FUNC_1();
        break;

    case 'G':
        for (VAR_6 = 0; VAR_6 < sizeof(*VAR_4) / sizeof(int); VAR_6++)
        {
            ((int *)VAR_4)[VAR_6] = FUNC_3(8);
        }
        FUNC_2();
        break;

    case 'm':
        VAR_7 = FUNC_3(8);
        VAR_1++;
        VAR_8 = FUNC_3(8);
        FUNC_4();
        while(VAR_8-- > 0)
        {
            FUNC_5(*((char *)VAR_7++), 2);
        }
        FUNC_1();
        break;

    case 'M':
        VAR_7 = FUNC_3(8);
        VAR_1++;
        VAR_8 = FUNC_3(8);
        VAR_1++;
        while(VAR_8-- > 0)
        {
            *((char *)VAR_7++) = FUNC_3(2);
        }
        FUNC_2();
        break;

    case '?':
        FUNC_6(VAR_5);
        break;

    case 'c':
        FUNC_2();
        VAR_0 = 1;
        break;

    case 'S':
        FUNC_2();
        VAR_0 = 0;
        break;

    case 's':
        VAR_4->srr1 |= 0x400;
        FUNC_2();
        VAR_0 = 1;
        FUNC_7();
        break;

    case 'q':
        switch (VAR_2[1])
        {
        case 'S':
            FUNC_0();
            break;

        case 'O':
            FUNC_0();
            break;
        }
        break;

    default:
        FUNC_0();
        break;
    }
}
