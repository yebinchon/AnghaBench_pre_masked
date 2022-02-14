
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nsIDOMKeyEvent ;
typedef int nsIDOMEvent ;
typedef int UINT32 ;
typedef int HTMLDocument ;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *,char const* const*) ;
 int FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (int *) ;

void FUNC_5(HTMLDocument *VAR_1, nsIDOMEvent *VAR_2)
{
    nsIDOMKeyEvent *VAR_3;
    UINT32 VAR_4;

    FUNC_2(VAR_2, &VAR_0, (void**)&VAR_3);

    FUNC_3(VAR_3, &VAR_4);

    switch(VAR_4) {
    case 156: {
        static const char * const VAR_5[] = {
            151,
            128,
            138,
            130
        };

        FUNC_0("left\n");
        FUNC_1(VAR_1, VAR_3, VAR_5);
        break;
    }
    case 155: {
        static const char * const VAR_6[] = {
            152,
            129,
            139,
            131
        };

        FUNC_0("right\n");
        FUNC_1(VAR_1, VAR_3, VAR_6);
        break;
    }
    case 154: {
        static const char * const VAR_7[] = {
            146,
            143,
            135,
            133
        };

        FUNC_0("up\n");
        FUNC_1(VAR_1, VAR_3, VAR_7);
        break;
    }
    case 159: {
        static const char * const VAR_8[] = {
            147,
            144,
            136,
            134
        };

        FUNC_0("down\n");
        FUNC_1(VAR_1, VAR_3, VAR_8);
        break;
    }
    case 160: {
        static const char * const VAR_9[] = {
            150,
            149,
            ((void*)0), ((void*)0)
        };

        FUNC_0("delete\n");
        FUNC_1(VAR_1, VAR_3, VAR_9);
        break;
    }
    case 157: {
        static const char * const VAR_10[] = {
            153,
            142,
            141,
            132
        };

        FUNC_0("home\n");
        FUNC_1(VAR_1, VAR_3, VAR_10);
        break;
    }
    case 158: {
        static const char * const VAR_11[] = {
            148,
            145,
            137,
            140
        };

        FUNC_0("end\n");
        FUNC_1(VAR_1, VAR_3, VAR_11);
        break;
    }
    }

    FUNC_4(VAR_3);
}
