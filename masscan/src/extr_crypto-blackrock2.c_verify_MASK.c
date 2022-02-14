
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct BlackRock {scalar_t__ range; } ;


 unsigned char* FUNC_0 (int,size_t) ;
 scalar_t__ FUNC_1 (struct BlackRock*,scalar_t__) ;
 int FUNC_2 (unsigned char*) ;

__attribute__((used)) static unsigned
FUNC_3(struct BlackRock *VAR_0, uint64_t VAR_1)
{
    unsigned char *VAR_2;
    uint64_t VAR_3;
    unsigned VAR_4 = 1;
    uint64_t VAR_5 = VAR_0->range;


    VAR_2 = FUNC_0(1, (size_t)((VAR_5<VAR_1)?VAR_5:VAR_1));



    for (VAR_3=0; VAR_3<VAR_5; VAR_3++) {
        uint64_t VAR_6 = FUNC_1(VAR_0, VAR_3);
        if (VAR_6 < VAR_1)
            VAR_2[VAR_6]++;
    }



    for (VAR_3=0; VAR_3<VAR_1 && VAR_3<VAR_5; VAR_3++) {
        if (VAR_2[VAR_3] != 1)
            VAR_4 = 0;
    }

    FUNC_2(VAR_2);

    return VAR_4;
}
