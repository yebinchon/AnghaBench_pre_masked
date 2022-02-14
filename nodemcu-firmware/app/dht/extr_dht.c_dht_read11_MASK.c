
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (scalar_t__,int ) ;
 void* VAR_6 ;

int FUNC_1(uint8_t VAR_7)
{

    int VAR_8 = FUNC_0(VAR_7, VAR_0);
    if (VAR_8 != VAR_3)
    {
        VAR_5 = VAR_2;
        VAR_6 = VAR_2;
        return VAR_8;
    }


    VAR_5 = VAR_4[0];
    VAR_6 = VAR_4[2];



    uint8_t VAR_9 = VAR_4[0] + VAR_4[1] + VAR_4[2] + VAR_4[3];
    if (VAR_4[4] != VAR_9) return VAR_1;

    return VAR_3;
}
