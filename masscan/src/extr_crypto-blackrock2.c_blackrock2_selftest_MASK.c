
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct BlackRock {int dummy; } ;


 int FUNC_0 (struct BlackRock*,int,int ,int) ;
 int FUNC_1 (struct BlackRock*,int) ;
 int FUNC_2 (struct BlackRock*,int) ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct BlackRock*,int) ;

int
FUNC_6(void)
{
    uint64_t VAR_1;
    int VAR_2 = 0;
    uint64_t VAR_3;
    {
        struct BlackRock VAR_4;
        uint64_t VAR_5, VAR_6;
        FUNC_0(&VAR_4, 1000, 0, 6);

        for (VAR_1=0; VAR_1<10; VAR_1++) {
            VAR_5 = FUNC_1(&VAR_4, VAR_1);
            VAR_6 = FUNC_2(&VAR_4, VAR_5);
            if (VAR_1 != VAR_6)
                return 1;
        }

    }


    VAR_3 = 3015 * 3;

    for (VAR_1=0; VAR_1<5; VAR_1++) {
        struct BlackRock VAR_7;

        VAR_3 += 11 + VAR_1;
        VAR_3 *= 1 + VAR_1;

        FUNC_0(&VAR_7, VAR_3, FUNC_4(0), 6);

        VAR_2 = FUNC_5(&VAR_7, VAR_3);

        if (!VAR_2) {
            FUNC_3(VAR_0, "BLACKROCK: randomization failed\n");
            return 1;
        }
    }

    return 0;
}
