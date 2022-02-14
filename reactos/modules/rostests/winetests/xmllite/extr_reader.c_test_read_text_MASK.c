
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_entry {int hr; int value; scalar_t__ xml; } ;
typedef scalar_t__ XmlNodeType ;
typedef scalar_t__ WCHAR ;
typedef int UINT ;
typedef int IXmlReader ;
typedef int HRESULT ;


 int FUNC_0 (int *,void**,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,scalar_t__ const**,int *) ;
 int FUNC_2 (int *,scalar_t__ const**,int*) ;
 int FUNC_3 (int *,scalar_t__*) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int,char*,int,...) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,scalar_t__) ;
 struct test_entry* VAR_5 ;
 int FUNC_9 (scalar_t__ const*) ;

__attribute__((used)) static void FUNC_10(void)
{
    struct test_entry *VAR_6 = VAR_5;
    IXmlReader *VAR_7;
    HRESULT VAR_8;

    VAR_8 = FUNC_0(&VAR_0, (void**)&VAR_7, ((void*)0));
    FUNC_5(VAR_8 == VAR_1, "S_OK, got %08x\n", VAR_8);

    while (VAR_6->xml)
    {
        XmlNodeType VAR_9;

        FUNC_8(VAR_7, VAR_6->xml);

        VAR_9 = VAR_3;
        VAR_8 = FUNC_3(VAR_7, &VAR_9);


        if (VAR_9 == VAR_2)
        {
            VAR_9 = VAR_3;
            VAR_8 = FUNC_3(VAR_7, &VAR_9);
        }
        FUNC_5(VAR_8 == VAR_6->hr, "got %08x for %s\n", VAR_8, VAR_6->xml);
        if (VAR_8 == VAR_1)
        {
            const WCHAR *VAR_10;
            UINT VAR_11;

            FUNC_5(VAR_9 == VAR_4, "got %d for %s\n", VAR_9, VAR_6->xml);

            FUNC_6(VAR_7, "");

            VAR_10 = ((void*)0);
            VAR_8 = FUNC_1(VAR_7, &VAR_10, ((void*)0));
            FUNC_5(VAR_8 == VAR_1, "got 0x%08x\n", VAR_8);
            FUNC_5(*VAR_10 == 0, "got %s\n", FUNC_9(VAR_10));

            VAR_11 = 1;
            VAR_10 = ((void*)0);
            VAR_8 = FUNC_2(VAR_7, &VAR_10, &VAR_11);
            FUNC_5(VAR_8 == VAR_1, "got 0x%08x\n", VAR_8);
            FUNC_5(VAR_11 == 0, "got %u\n", VAR_11);
            FUNC_5(*VAR_10 == 0, "got %s\n", FUNC_9(VAR_10));

            VAR_10 = ((void*)0);
            VAR_8 = FUNC_2(VAR_7, &VAR_10, ((void*)0));
            FUNC_5(VAR_8 == VAR_1, "got 0x%08x\n", VAR_8);
            FUNC_5(*VAR_10 == 0, "got %s\n", FUNC_9(VAR_10));


            FUNC_7(VAR_7, VAR_6->value);
        }

        VAR_6++;
    }

    FUNC_4(VAR_7);
}
