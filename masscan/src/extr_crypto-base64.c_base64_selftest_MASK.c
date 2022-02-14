
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf3 ;
typedef int buf2 ;
typedef int buf ;


 size_t FUNC_0 (char*,int,char*,size_t) ;
 size_t FUNC_1 (char*,int,char*,size_t) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (unsigned int*) ;
 int VAR_0 ;
 int FUNC_5 (int ) ;

int
FUNC_6(void)
{
    char VAR_1[100];
    char VAR_2[100];
    char VAR_3[100];
    size_t VAR_4;
    size_t VAR_5;
    unsigned VAR_6;
    unsigned VAR_7 = (unsigned)FUNC_5(0);

    VAR_4 = FUNC_1(VAR_1, sizeof(VAR_1), "hello", 5);
    VAR_5 = FUNC_0(VAR_2, sizeof(VAR_2), VAR_1, VAR_4);
    if (VAR_5 != 5 && FUNC_3(VAR_2, "hello", 5) != 0) {
        FUNC_2(VAR_0, "base64: selftest failed\n");
        return 1;
    }





    for (VAR_6=0; VAR_6<100; VAR_6++) {
        unsigned VAR_8;
        size_t VAR_9;


        VAR_4 = FUNC_4(&VAR_7) % 50;
        for (VAR_8=0; VAR_8<VAR_4; VAR_8++) {
            VAR_1[VAR_8] = (char)FUNC_4(&VAR_7);
        }


        VAR_5 = FUNC_1(VAR_2, sizeof(VAR_2), VAR_1, VAR_4);


        VAR_9 = FUNC_0(VAR_3, sizeof(VAR_3), VAR_2, VAR_5);


        if (VAR_9 != VAR_4 && FUNC_3(VAR_3, VAR_1, VAR_4) != 0) {
            FUNC_2(VAR_0, "base64: selftest failed\n");
            return 1;
        }
    }

    return 0;
}
