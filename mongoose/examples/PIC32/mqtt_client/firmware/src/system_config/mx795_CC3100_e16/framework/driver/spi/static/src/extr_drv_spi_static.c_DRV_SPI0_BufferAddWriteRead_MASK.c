
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint32_t ;
typedef size_t int32_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;

int32_t FUNC_4(const void * VAR_1, void * VAR_2, uint32_t VAR_3)
{
    bool VAR_4;
    int32_t VAR_5 = 0;
    int32_t VAR_6 = 0;
    do {
        VAR_4 = 0;
        if(!FUNC_3(VAR_0) && VAR_5 < VAR_3)
        {
            FUNC_1(VAR_0, ((uint8_t*)VAR_1)[VAR_5]);
            VAR_5++;
            VAR_4 = 1;
        }

        while (VAR_5 != VAR_6)
        {
            while(!FUNC_2(VAR_0));
            ((uint8_t*)VAR_2)[VAR_6] = FUNC_0(VAR_0);
            VAR_6++;
            VAR_4 = 1;
        }
        if (VAR_5 > VAR_6)
        {
            VAR_4 = 1;
        }
    }while(VAR_4);
    return VAR_5;
}
