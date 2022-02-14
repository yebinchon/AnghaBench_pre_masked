
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msxmlsupported_data_t {scalar_t__ clsid; int name; } ;
typedef char WCHAR ;
typedef int ISAXAttributes ;
typedef int IMXAttributes ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int *,int ,int *,void**) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char const*,int ,char const*,int ,int*) ;
 scalar_t__ FUNC_7 (scalar_t__,int *) ;
 int VAR_7 ;
 int FUNC_8 (char*) ;
 int FUNC_9 () ;
 int FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (char const*) ;
 int VAR_8 ;
 int FUNC_12 (int,char*,int ,int) ;
 struct msxmlsupported_data_t* VAR_9 ;

__attribute__((used)) static void FUNC_13(void)
{
    static const WCHAR VAR_10[] = {'l','o','c','a','l','n','a','m','e','1',0};
    static const WCHAR VAR_11[] = {'l','o','c','a','l','n','a','m','e',0};
    static const WCHAR VAR_12[] = {'u','r','i','1',0};
    static const WCHAR VAR_13[] = {'u','r','i',0};

    const struct msxmlsupported_data_t *VAR_14 = VAR_9;

    while (VAR_14->clsid)
    {
        ISAXAttributes *VAR_15;
        IMXAttributes *VAR_16;
        HRESULT VAR_17;
        int VAR_18;

        if (!FUNC_10(VAR_14->clsid, VAR_8))
        {
            VAR_14++;
            continue;
        }

        VAR_17 = FUNC_0(VAR_14->clsid, ((void*)0), VAR_0,
            &VAR_5, (void**)&VAR_16);
        FUNC_1(VAR_17, VAR_7);

        VAR_17 = FUNC_2(VAR_16, &VAR_6, (void**)&VAR_15);
        FUNC_1(VAR_17, VAR_7);

        VAR_17 = FUNC_6(VAR_15, ((void*)0), 0, ((void*)0), 0, &VAR_18);
        FUNC_1(VAR_17, VAR_3);


        VAR_17 = FUNC_4(VAR_16, FUNC_8("uri"), FUNC_8("localname"),
            FUNC_8("a:localname"), FUNC_8(""), FUNC_8("value"));
        FUNC_1(VAR_17, VAR_7);
        VAR_17 = FUNC_4(VAR_16, FUNC_8("uri"), FUNC_8("localname"),
            FUNC_8("b:localname"), FUNC_8(""), FUNC_8("value"));
        FUNC_1(VAR_17, VAR_7);

        VAR_18 = -1;
        VAR_17 = FUNC_6(VAR_15, VAR_13, FUNC_11(VAR_13), VAR_11, FUNC_11(VAR_11), &VAR_18);
        FUNC_1(VAR_17, VAR_7);
        FUNC_12(VAR_18 == 0, "%s: got index %d\n", VAR_14->name, VAR_18);

        VAR_18 = -1;
        VAR_17 = FUNC_6(VAR_15, VAR_12, FUNC_11(VAR_12), VAR_11, FUNC_11(VAR_11), &VAR_18);
        FUNC_1(VAR_17, VAR_3);
        FUNC_12(VAR_18 == -1, "%s: got index %d\n", VAR_14->name, VAR_18);

        VAR_18 = -1;
        VAR_17 = FUNC_6(VAR_15, VAR_13, FUNC_11(VAR_13), VAR_10, FUNC_11(VAR_10), &VAR_18);
        FUNC_1(VAR_17, VAR_3);
        FUNC_12(VAR_18 == -1, "%s: got index %d\n", VAR_14->name, VAR_18);

        if (FUNC_7(VAR_14->clsid, &VAR_1) ||
            FUNC_7(VAR_14->clsid, &VAR_2))
        {
            VAR_17 = FUNC_6(VAR_15, ((void*)0), 0, ((void*)0), 0, ((void*)0));
            FUNC_1(VAR_17, VAR_4);

            VAR_17 = FUNC_6(VAR_15, VAR_13, FUNC_11(VAR_13), VAR_10, FUNC_11(VAR_10), ((void*)0));
            FUNC_1(VAR_17, VAR_4);
        }
        else
        {
            VAR_17 = FUNC_6(VAR_15, ((void*)0), 0, ((void*)0), 0, ((void*)0));
            FUNC_1(VAR_17, VAR_3);

            VAR_17 = FUNC_6(VAR_15, VAR_13, FUNC_11(VAR_13), VAR_10, FUNC_11(VAR_10), ((void*)0));
            FUNC_1(VAR_17, VAR_3);
        }

        VAR_17 = FUNC_6(VAR_15, VAR_13, FUNC_11(VAR_13), ((void*)0), 0, &VAR_18);
        FUNC_1(VAR_17, VAR_3);

        VAR_17 = FUNC_6(VAR_15, ((void*)0), 0, VAR_10, FUNC_11(VAR_10), &VAR_18);
        FUNC_1(VAR_17, VAR_3);

        VAR_14++;

        FUNC_5(VAR_15);
        FUNC_3(VAR_16);
        FUNC_9();
    }
}
