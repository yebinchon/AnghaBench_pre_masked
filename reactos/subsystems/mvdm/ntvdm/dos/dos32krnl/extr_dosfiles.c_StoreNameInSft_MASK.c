
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int * FileName; } ;
typedef int ShortPath ;
typedef TYPE_1__* PDOS_FILE_DESCRIPTOR ;
typedef int * PCHAR ;
typedef int LPCSTR ;
typedef int CHAR ;


 int FUNC_0 (int ,int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;
 int * FUNC_4 (int *,char) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int) ;
 int * FUNC_7 (int *,char) ;

__attribute__((used)) static VOID FUNC_8(LPCSTR VAR_1, PDOS_FILE_DESCRIPTOR VAR_2)
{
    CHAR VAR_3[VAR_0];
    PCHAR VAR_4;
    PCHAR VAR_5;


    if (!FUNC_0(VAR_1, VAR_3, sizeof(VAR_3)))
    {

        FUNC_6(VAR_3, VAR_1, sizeof(VAR_3) - 1);
        FUNC_2(VAR_3);
    }


    VAR_4 = FUNC_7(VAR_3, '\\');
    if (VAR_4 == ((void*)0)) VAR_4 = VAR_3;


    VAR_5 = FUNC_4(VAR_4, '.');

    if (VAR_5)
    {

        *VAR_5++ = 0;
    }


    FUNC_1(VAR_2->FileName, VAR_4, FUNC_3(FUNC_5(VAR_4), 8));

    if (VAR_5)
    {

        FUNC_1(&VAR_2->FileName[8], VAR_5, FUNC_3(FUNC_5(VAR_5), 3));
    }
}
