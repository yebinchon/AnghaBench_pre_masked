
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UCHAR ;
typedef int PUCHAR ;
typedef size_t INT ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (size_t) ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (size_t,int ) ;
 int* VAR_3 ;
 int FUNC_3 (int) ;
 size_t VAR_4 ;
 size_t* VAR_5 ;
 size_t* VAR_6 ;

BOOL FUNC_4(INT VAR_7, INT VAR_8, INT VAR_9, UCHAR VAR_10)
{
    INT VAR_11, VAR_12;

    VAR_11 = VAR_5[VAR_7]+VAR_6[VAR_8];




    FUNC_1((PUCHAR)VAR_1,0x08);
    FUNC_1((PUCHAR)VAR_0,VAR_3[VAR_7]);


    for(VAR_12=VAR_8; VAR_12<VAR_8+VAR_9; VAR_12++)
    {
        FUNC_0(VAR_4 + VAR_11);
        FUNC_2(VAR_4 + VAR_11, VAR_10);
        VAR_11 += 80;
    }

    return VAR_2;
}
