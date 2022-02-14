
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 unsigned char* FUNC_0 (int,size_t) ;
 int FUNC_1 (unsigned char*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static unsigned
FUNC_3(uint64_t VAR_0, uint64_t VAR_1, uint64_t VAR_2, uint64_t VAR_3)
{
    unsigned char *VAR_4;
    uint64_t VAR_5;
    unsigned VAR_6 = 1;


    VAR_4 = FUNC_0(1, (size_t)((VAR_2<VAR_3)?VAR_2:VAR_3));



    for (VAR_5=0; VAR_5<VAR_2; VAR_5++) {
        uint64_t VAR_7 = FUNC_2(VAR_5, VAR_0, VAR_1, VAR_2);
        if (VAR_7 < VAR_3)
            VAR_4[VAR_7]++;
    }



    for (VAR_5=0; VAR_5<VAR_3 && VAR_5<VAR_2; VAR_5++) {
        if (VAR_4[VAR_5] != 1)
            VAR_6 = 0;
    }

    FUNC_1(VAR_4);

    return VAR_6;
}
