
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buff ;
typedef int FILE ;


 size_t FUNC_0 (unsigned char*) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 unsigned int FUNC_6 (int *) ;
 int * FUNC_7 (char*,char*) ;
 int FUNC_8 (int ,char*,char*) ;
 size_t FUNC_9 (unsigned char**,int,size_t,int *) ;
 int FUNC_10 (unsigned char**,int,size_t,int *) ;
 int FUNC_11 () ;
 int FUNC_12 (unsigned int) ;
 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;

int FUNC_13(int VAR_5, char* VAR_6[])
{
    int VAR_7;
    FILE* VAR_8;
    unsigned char VAR_9[512];
    size_t VAR_10, VAR_11;

    if (VAR_5 >= 2)
    {
        if (FUNC_3(VAR_6[1], "-h" ) == 0 ||
            FUNC_3(VAR_6[1], "--help") == 0 ||
            FUNC_3(VAR_6[1], "/?" ) == 0 ||
            FUNC_3(VAR_6[1], "/help" ) == 0)
        {
            FUNC_11();
            return 0;
        }
    }


    FUNC_2(FUNC_1(VAR_4), VAR_1);


    if (VAR_5 <= 1)
    {
        unsigned int VAR_12;


        FUNC_2(FUNC_1(VAR_3), VAR_1);
        while ((VAR_12 = FUNC_6(VAR_3)) != VAR_0)
        {
            FUNC_12(VAR_12);
        }


        return 0;
    }


    for (VAR_7 = 1; VAR_7 < VAR_5; VAR_7++)
    {

        VAR_8 = FUNC_7(VAR_6[VAR_7], "rb");
        if (VAR_8 == ((void*)0))
        {
            FUNC_8(VAR_2, "Failed to open file '%s'\n", VAR_6[VAR_7]);
            return -1;
        }


        VAR_10 = 0; VAR_11 = 0;
        while (VAR_11 == VAR_10)
        {

            VAR_10 = FUNC_0(VAR_9);
            VAR_11 = FUNC_9(&VAR_9, sizeof(VAR_9[0]), VAR_10, VAR_8);
            if (VAR_11 != VAR_10)
            {





                if (!FUNC_5(VAR_8))
                {
                    FUNC_8(VAR_2, "Error while reading file '%s'\n", VAR_6[VAR_7]);
                    FUNC_4(VAR_8);
                    return -1;
                }
            }


            if (VAR_11 == 0) break;


            FUNC_10(&VAR_9, sizeof(VAR_9[0]), VAR_11, VAR_4);
        }


        FUNC_4(VAR_8);
    }

    return 0;
}
