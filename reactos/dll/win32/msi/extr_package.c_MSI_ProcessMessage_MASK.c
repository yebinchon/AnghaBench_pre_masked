
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_4__ {char* LastAction; char* LastActionTemplate; int db; } ;
typedef int MSIRECORD ;
typedef TYPE_1__ MSIPACKAGE ;
typedef char* LPWSTR ;
typedef int INT ;
typedef int INSTALLMESSAGE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int const,int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int) ;
 char* FUNC_5 (int) ;
 void* FUNC_6 (int *,int) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (int ,int) ;
 int FUNC_9 (char*,char const*,char*,char*) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,char*) ;
 void* FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (char*) ;
 int VAR_5 ;

INT FUNC_14( MSIPACKAGE *VAR_6, INSTALLMESSAGE VAR_7, MSIRECORD *VAR_8 )
{
    switch (VAR_7 & 0xff000000)
    {
    case 132:
    case 133:
    case 128:
    case 129:
    case 131:
    case 130:
        if (FUNC_1(VAR_8, 1) != VAR_4)
        {


            LPWSTR VAR_9;
            LPWSTR VAR_10 = ((void*)0), VAR_11 = ((void*)0);
            int VAR_12 = FUNC_1(VAR_8, 1);

            if (FUNC_2(VAR_8, 0))
            {
                if (VAR_12 >= 32)
                {
                    VAR_10 = FUNC_8(VAR_6->db, VAR_12);

                    if (!VAR_10 && VAR_12 >= 2000)
                    {

                        if ((VAR_10 = (LPWSTR) FUNC_4(VAR_12)))
                        {
                            FUNC_3(VAR_8, 0, VAR_10);
                            FUNC_0(VAR_6, 131, VAR_8);
                        }
                        VAR_10 = FUNC_8(VAR_6->db, VAR_3);
                        FUNC_3(VAR_8, 0, VAR_10);
                        FUNC_0(VAR_6, VAR_7, VAR_8);
                        FUNC_7(VAR_10);
                        return 0;
                    }
                }
            }
            else
                VAR_10 = FUNC_6(VAR_8, 0);

            VAR_11 = FUNC_8(VAR_6->db, VAR_7 >> 24);
            if (!VAR_11) VAR_11 = FUNC_12(VAR_5);

            if (!VAR_10)
            {

                FUNC_3(VAR_8, 0, VAR_11);
                FUNC_0(VAR_6, VAR_7, VAR_8);
                FUNC_7(VAR_11);
                return 0;
            }

            VAR_9 = FUNC_5((FUNC_13(VAR_10) + FUNC_13(VAR_11) + 1) * sizeof(WCHAR));
            if (!VAR_9) return VAR_0;

            FUNC_11(VAR_9, VAR_11);
            FUNC_10(VAR_9, VAR_10);
            FUNC_3(VAR_8, 0, VAR_9);

            FUNC_7(VAR_11);
            FUNC_7(VAR_10);
            FUNC_7(VAR_9);
        }
        break;
    case 135:
    {
        WCHAR *VAR_13 = FUNC_8(VAR_6->db, VAR_1);
        FUNC_3(VAR_8, 0, VAR_13);
        FUNC_7(VAR_13);

        FUNC_7(VAR_6->LastAction);
        FUNC_7(VAR_6->LastActionTemplate);
        VAR_6->LastAction = FUNC_6(VAR_8, 1);
        if (!VAR_6->LastAction) VAR_6->LastAction = FUNC_12(VAR_5);
        VAR_6->LastActionTemplate = FUNC_6(VAR_8, 3);
        break;
    }
    case 136:
        if (VAR_6->LastAction && VAR_6->LastActionTemplate)
        {
            static const WCHAR VAR_14[] =
                {'{','{','%','s',':',' ','}','}','%','s',0};
            WCHAR *VAR_15;

            VAR_15 = FUNC_5((FUNC_13(VAR_6->LastAction) + FUNC_13(VAR_6->LastActionTemplate) + 7) * sizeof(WCHAR));
            if (!VAR_15) return VAR_0;
            FUNC_9(VAR_15, VAR_14, VAR_6->LastAction, VAR_6->LastActionTemplate);
            FUNC_3(VAR_8, 0, VAR_15);
            FUNC_7(VAR_15);
        }
        break;
    case 134:
    {
        WCHAR *VAR_16 = FUNC_8(VAR_6->db, VAR_2);
        FUNC_3(VAR_8, 0, VAR_16);
        FUNC_7(VAR_16);
    }
    break;
    }

    return FUNC_0(VAR_6, VAR_7, VAR_8);
}
