
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPCTSTR ;
typedef int INT ;
typedef int DWORD ;


 int FUNC_0 () ;
 int FUNC_1 (int,int *,int **,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int **,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int VAR_0 ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int **,int,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 () ;
 int FUNC_18 (int *) ;
 int FUNC_19 () ;
 int FUNC_20 (int *) ;
 int FUNC_21 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_22 (int *,int *) ;
 int FUNC_23 () ;
 int FUNC_24 (int *) ;
 int FUNC_25 () ;
 int FUNC_26 (int **,int) ;
 int FUNC_27 (int *,int *) ;
 int FUNC_28 () ;
 int FUNC_29 (int **,int) ;
 int FUNC_30 (int *,int **,int) ;
 int FUNC_31 () ;
 int FUNC_32 () ;
 int VAR_10 ;
 int FUNC_33 (char*) ;
 int FUNC_34 (int ) ;
 int FUNC_35 (int *) ;
 int FUNC_36 (int *,int ) ;

__attribute__((used)) static INT
FUNC_37(LPCTSTR VAR_11,
          LPCTSTR VAR_12,
          LPCTSTR *VAR_13,
          DWORD VAR_14)
{
    LPCTSTR VAR_15 = ((void*)0);

    if (VAR_11)
    {
        FUNC_34(FUNC_33("Remote service control is not yet implemented\n"));
        return 2;
    }

    if (!FUNC_36(VAR_12, FUNC_33("query")))
    {
        FUNC_15(VAR_13,
              VAR_14,
              VAR_0);
    }
    else if (!FUNC_36(VAR_12, FUNC_33("queryex")))
    {
        FUNC_15(VAR_13,
              VAR_14,
              VAR_10);
    }
    else if (!FUNC_36(VAR_12, FUNC_33("start")))
    {
        if (VAR_14 > 0)
        {
            VAR_15 = *VAR_13++;
            VAR_14--;

            FUNC_30(VAR_15,
                  VAR_13,
                  VAR_14);
        }
        else
            FUNC_31();
    }
    else if (!FUNC_36(VAR_12, FUNC_33("pause")))
    {
        if (VAR_14 > 0)
        {
            VAR_15 = *VAR_13++;
            VAR_14--;

            FUNC_1(VAR_8,
                    VAR_15,
                    VAR_13,
                    VAR_14);
        }
        else
            FUNC_14();
    }
    else if (!FUNC_36(VAR_12, FUNC_33("interrogate")))
    {
        if (VAR_14 > 0)
        {
            VAR_15 = *VAR_13++;
            VAR_14--;

            FUNC_1(VAR_2,
                    VAR_15,
                    VAR_13,
                    VAR_14);
        }
        else
            FUNC_12();
    }
    else if (!FUNC_36(VAR_12, FUNC_33("stop")))
    {
        if (VAR_14 > 0)
        {
            VAR_15 = *VAR_13++;
            VAR_14--;

            FUNC_1(VAR_9,
                    VAR_15,
                    VAR_13,
                    VAR_14);
        }
        else
            FUNC_32();
    }
    else if (!FUNC_36(VAR_12, FUNC_33("continue")))
    {
        if (VAR_14 > 0)
        {
            VAR_15 = *VAR_13++;
            VAR_14--;

            FUNC_1(VAR_1,
                    VAR_15,
                    VAR_13,
                    VAR_14);
        }
        else
            FUNC_0();
    }
    else if (!FUNC_36(VAR_12, FUNC_33("delete")))
    {
        if (VAR_14 > 0)
        {
            VAR_15 = *VAR_13++;
            VAR_14--;

            FUNC_4(VAR_15);
        }
        else
            FUNC_5();
    }
    else if (!FUNC_36(VAR_12, FUNC_33("create")))
    {
        FUNC_3(VAR_13, VAR_14);
    }
    else if (!FUNC_36(VAR_12, FUNC_33("control")))
    {
        INT VAR_16 = 0;

        if (VAR_14 > 1)
        {
            VAR_15 = *VAR_13++;
            VAR_14--;

            if (!FUNC_36(VAR_13[0], FUNC_33("paramchange")))
                VAR_16 = VAR_7;
            else if (!FUNC_36(VAR_13[0], FUNC_33("netbindadd")))
                VAR_16 = VAR_3;
            else if (!FUNC_36(VAR_13[0], FUNC_33("netbindremove")))
                VAR_16 = VAR_6;
            else if (!FUNC_36(VAR_13[0], FUNC_33("netbindenable")))
                VAR_16 = VAR_5;
            else if (!FUNC_36(VAR_13[0], FUNC_33("netbinddisable")))
                VAR_16 = VAR_4;
            else
            {
                VAR_16 = FUNC_35(VAR_13[0]);
                if ((VAR_16 < 128) || (VAR_16 > 255))
                    VAR_16 = 0;
            }

            VAR_13++;
            VAR_14--;

            if (VAR_16 != 0)
                FUNC_1(VAR_16,
                        VAR_15,
                        VAR_13,
                        VAR_14);
            else
                FUNC_2();
        }
        else
            FUNC_2();
    }
    else if (!FUNC_36(VAR_12, FUNC_33("sdshow")))
    {
        if (VAR_14 > 0)
        {
            VAR_15 = *VAR_13++;
            VAR_14--;

            FUNC_24(VAR_15);
        }
        else
            FUNC_25();
    }
    else if (!FUNC_36(VAR_12, FUNC_33("sdset")))
    {
        LPCTSTR VAR_17;

        if (VAR_14 > 1)
        {
            VAR_15 = *VAR_13++;
            VAR_14--;

            VAR_17 = *VAR_13++;
            VAR_14--;

            FUNC_22(VAR_15, VAR_17);
        }
        else
            FUNC_23();
    }
    else if (!FUNC_36(VAR_12, FUNC_33("qc")))
    {
        if (VAR_14 > 0)
        {
            VAR_15 = *VAR_13++;
            VAR_14--;

            FUNC_16(VAR_15);
        }
        else
            FUNC_17();
    }
    else if (!FUNC_36(VAR_12, FUNC_33("qdescription")))
    {
        if (VAR_14 > 0)
        {
            VAR_15 = *VAR_13++;
            VAR_14--;

            FUNC_18(VAR_15);
        }
        else
            FUNC_19();
    }
    else if (!FUNC_36(VAR_12, FUNC_33("qfailure")))
    {
        if (VAR_14 > 0)
        {
            VAR_15 = *VAR_13++;
            VAR_14--;

            FUNC_20(VAR_15);
        }
        else
            FUNC_21();
    }
    else if (!FUNC_36(VAR_12, FUNC_33("description")))
    {
        LPCTSTR VAR_18 = ((void*)0);

        if (VAR_14 > 0)
        {
            VAR_15 = *VAR_13++;
            VAR_14--;

            if (VAR_14 > 0)
            {
                VAR_18 = *VAR_13++;
                VAR_14--;
            }

            FUNC_27(VAR_15, VAR_18);
        }
        else
            FUNC_28();
    }
    else if (!FUNC_36(VAR_12, FUNC_33("config")))
    {
        FUNC_26(VAR_13, VAR_14);
    }
    else if (!FUNC_36(VAR_12, FUNC_33("failure")))
    {
        FUNC_29(VAR_13, VAR_14);
    }
    else if (!FUNC_36(VAR_12, FUNC_33("GetDisplayName")))
    {
        if (VAR_14 > 0)
        {
            VAR_15 = *VAR_13++;
            VAR_14--;

            FUNC_8(VAR_15);
        }
        else
            FUNC_9();
    }
    else if (!FUNC_36(VAR_12, FUNC_33("GetKeyName")))
    {
        if (VAR_14 > 0)
        {
            VAR_15 = *VAR_13++;
            VAR_14--;

            FUNC_10(VAR_15);
        }
        else
            FUNC_11();
    }
    else if (!FUNC_36(VAR_12, FUNC_33("EnumDepend")))
    {
        if (VAR_14 > 0)
        {
            VAR_15 = *VAR_13++;
            VAR_14--;

            FUNC_6(VAR_15);
        }
        else
            FUNC_7();
    }
    else
    {
        FUNC_13();
    }

    return 0;
}
