
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct BannerOutput {scalar_t__ next; } ;
struct BannerBase64 {int dummy; } ;


 int FUNC_0 (struct BannerOutput*,int,char*,int) ;
 int FUNC_1 (struct BannerOutput*,int,char*,int,struct BannerBase64*) ;
 int FUNC_2 (struct BannerOutput*,int,struct BannerBase64*) ;
 int FUNC_3 (struct BannerOutput*) ;
 int FUNC_4 (struct BannerBase64*) ;
 int FUNC_5 (struct BannerOutput*) ;
 int FUNC_6 (struct BannerOutput*,int,char*) ;
 int FUNC_7 (struct BannerOutput*,int) ;

int
FUNC_8(void)
{



    {
        struct BannerOutput VAR_0[1];
        unsigned VAR_1;

        FUNC_3(VAR_0);

        for (VAR_1=0; VAR_1<10; VAR_1++) {
            FUNC_0(VAR_0, 1, "xxxx", 4);
            FUNC_0(VAR_0, 2, "yyyyy", 5);
        }

        if (VAR_0->next == 0)
            return 1;
        if (FUNC_7(VAR_0, 1) != 40)
            return 1;
        if (FUNC_7(VAR_0, 2) != 50)
            return 1;

        FUNC_5(VAR_0);
        if (VAR_0->next != 0)
            return 1;
    }






    {
        struct BannerOutput VAR_2[1];
        struct BannerBase64 VAR_3[1];

        FUNC_3(VAR_2);

        FUNC_4(VAR_3);
        FUNC_1(VAR_2, 1, "x", 1, VAR_3);
        FUNC_2(VAR_2, 1, VAR_3);

        FUNC_4(VAR_3);
        FUNC_1(VAR_2, 2, "bc", 2, VAR_3);
        FUNC_2(VAR_2, 2, VAR_3);

        FUNC_4(VAR_3);
        FUNC_1(VAR_2, 3, "mno", 3, VAR_3);
        FUNC_2(VAR_2, 3, VAR_3);

        FUNC_4(VAR_3);
        FUNC_1(VAR_2, 4, "stuv", 4, VAR_3);
        FUNC_2(VAR_2, 4, VAR_3);

        FUNC_4(VAR_3);
        FUNC_1(VAR_2, 5, "fghij", 5, VAR_3);
        FUNC_2(VAR_2, 5, VAR_3);


        if (!FUNC_6(VAR_2, 1, "eA=="))
            return 1;
        if (!FUNC_6(VAR_2, 2, "YmM="))
            return 1;
        if (!FUNC_6(VAR_2, 3, "bW5v"))
            return 1;
        if (!FUNC_6(VAR_2, 4, "c3R1dg=="))
            return 1;
        if (!FUNC_6(VAR_2, 5, "ZmdoaWo="))
            return 1;

        FUNC_5(VAR_2);
    }


    return 0;
}
