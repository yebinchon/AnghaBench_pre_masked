
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_entry {scalar_t__ hr_broken; scalar_t__ hr; int value; int name; scalar_t__ xml; } ;
typedef scalar_t__ XmlNodeType ;
typedef int WCHAR ;
typedef scalar_t__ UINT ;
typedef int IXmlReader ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,void**,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,scalar_t__*) ;
 scalar_t__ FUNC_2 (int *,int const**,scalar_t__*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_6 (int ) ;
 struct test_entry* VAR_4 ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int const*,int *) ;
 int FUNC_10 (int,char*,scalar_t__,...) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,scalar_t__) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int const*) ;

__attribute__((used)) static void FUNC_16(void)
{
    struct test_entry *VAR_5 = VAR_4;
    IXmlReader *VAR_6;
    HRESULT VAR_7;

    VAR_7 = FUNC_0(&VAR_0, (void**)&VAR_6, ((void*)0));
    FUNC_10(VAR_7 == VAR_1, "S_OK, got %08x\n", VAR_7);

    while (VAR_5->xml)
    {
        XmlNodeType VAR_8;

        FUNC_13(VAR_6, VAR_5->xml);

        VAR_7 = FUNC_4(VAR_6, ((void*)0));

        if (VAR_5->hr_broken)
            FUNC_10(VAR_7 == VAR_5->hr || FUNC_7(VAR_7 == VAR_5->hr_broken), "got %08x for %s\n", VAR_7, VAR_5->xml);
        else
            FUNC_10(VAR_7 == VAR_5->hr, "got %08x for %s\n", VAR_7, VAR_5->xml);
        if (VAR_7 == VAR_1)
        {
            const WCHAR *VAR_9;
            WCHAR *VAR_10;
            UINT VAR_11;

            VAR_8 = VAR_3;
            VAR_7 = FUNC_1(VAR_6, &VAR_8);
            FUNC_10(VAR_7 == VAR_1, "Failed to get node type, %#x\n", VAR_7);

            FUNC_10(VAR_8 == VAR_2, "got %d for %s\n", VAR_8, VAR_5->xml);

            VAR_7 = FUNC_3(VAR_6);
            FUNC_10(VAR_7 == VAR_1, "got 0x%08x\n", VAR_7);

            FUNC_11(VAR_6, VAR_5->name);

            VAR_11 = 1;
            VAR_9 = ((void*)0);
            VAR_7 = FUNC_2(VAR_6, &VAR_9, &VAR_11);
            FUNC_10(VAR_7 == VAR_1, "got 0x%08x\n", VAR_7);
            FUNC_10(VAR_11 == FUNC_14(VAR_5->name), "got %u\n", VAR_11);
            VAR_10 = FUNC_6(VAR_5->name);
            FUNC_10(!FUNC_9(VAR_9, VAR_10), "got %s\n", FUNC_15(VAR_9));
            FUNC_8(VAR_10);


            FUNC_12(VAR_6, VAR_5->value);
        }

        VAR_5++;
    }

    FUNC_5(VAR_6);
}
