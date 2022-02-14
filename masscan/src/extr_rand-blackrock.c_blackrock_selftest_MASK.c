
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct BlackRock {int dummy; } ;


 int FUNC_0 (struct BlackRock*,int,int ,int) ;
 int FUNC_1 (struct BlackRock*,int) ;
 int FUNC_2 (struct BlackRock*,int) ;
 int FUNC_3 (struct BlackRock*,int) ;
 int FUNC_4 (int ,char*) ;
 int VAR_0 ;
 int FUNC_5 (int ) ;

int
FUNC_6(void)
{
    uint64_t VAR_1;
    uint64_t VAR_2;
    {
        struct BlackRock VAR_3;

        FUNC_0(&VAR_3, 1000, 0, 4);

        for (VAR_1=0; VAR_1<10; VAR_1++) {
            uint64_t VAR_4, VAR_5;
            VAR_4 = FUNC_1(&VAR_3, VAR_1);
            VAR_5 = FUNC_2(&VAR_3, VAR_4);
            if (VAR_1 != VAR_5)
                return 1;
        }

    }


    VAR_2 = 3015 * 3;

    for (VAR_1=0; VAR_1<5; VAR_1++) {
        struct BlackRock VAR_6;
        int VAR_7;

        VAR_2 += 10 + VAR_1;
        VAR_2 *= 2;

        FUNC_0(&VAR_6, VAR_2, FUNC_5(0), 4);

        VAR_7 = FUNC_3(&VAR_6, VAR_2);
        if (!VAR_7) {
            FUNC_4(VAR_0, "BLACKROCK: randomization failed\n");
            return 1;
        }
    }

    return 0;
}
