
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct uri_test TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int XmlNodeType ;
typedef scalar_t__ WCHAR ;
typedef scalar_t__ UINT ;
struct uri_test {char const* xml; char const** uri; } ;
struct TYPE_3__ {char* member_0; char* member_1; char* member_2; char* member_3; char* member_4; } ;
typedef int IXmlReader ;
typedef unsigned int HRESULT ;


 unsigned int FUNC_0 (TYPE_2__*) ;
 unsigned int FUNC_1 (int *,void**,int *) ;
 int VAR_0 ;
 unsigned int FUNC_2 (int *,scalar_t__ const**,scalar_t__*) ;
 unsigned int FUNC_3 (int *,scalar_t__ const**,scalar_t__*) ;
 unsigned int FUNC_4 (int *,unsigned int*) ;
 int FUNC_5 (int *) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (int *,char const*) ;
 int FUNC_8 (int *,char const*) ;

__attribute__((used)) static void FUNC_9(void)
{
    struct uri_test
    {
        const char *xml;
        const char *uri[5];
    } VAR_11[] =
    {
        { "<a xmlns=\"defns a\"><b xmlns=\"defns b\"><c xmlns=\"defns c\"/></b></a>",
                { "defns a", "defns b", "defns c", "defns b", "defns a" }},
        { "<r:a xmlns=\"defns a\" xmlns:r=\"ns r\"/>",
                { "ns r" }},
        { "<r:a xmlns=\"defns a\" xmlns:r=\"ns r\"><b/></r:a>",
                { "ns r", "defns a", "ns r" }},
        { "<a xmlns=\"defns a\" xmlns:r=\"ns r\"><r:b/></a>",
                { "defns a", "ns r", "defns a" }},
        { "<a><b><c/></b></a>",
                { "", "", "", "", "" }},
        { "<a>text</a>",
                { "", "", "" }},
        { "<a>\r\n</a>",
                { "", "", "" }},
        { "<a><![CDATA[data]]></a>",
                { "", "", "" }},
        { "<?xml version=\"1.0\" ?><a/>",
                { "", "" }},
        { "<a><?pi ?></a>",
                { "", "", "" }},
        { "<a><!-- comment --></a>",
                { "", "", "" }},
    };
    IXmlReader *VAR_12;
    XmlNodeType VAR_13;
    unsigned int VAR_14;
    HRESULT VAR_15;

    VAR_15 = FUNC_1(&VAR_0, (void**)&VAR_12, ((void*)0));
    FUNC_6(VAR_15 == VAR_1, "S_OK, got %08x\n", VAR_15);

    for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_11); VAR_14++) {
        unsigned int VAR_16 = 0;

        FUNC_8(VAR_12, VAR_11[VAR_14].xml);

        VAR_13 = ~0u;
        while (FUNC_4(VAR_12, &VAR_13) == VAR_1) {
            const WCHAR *VAR_17, *VAR_18;
            UINT VAR_19, VAR_20;

            FUNC_6(VAR_13 == VAR_4 ||
                    VAR_13 == VAR_8 ||
                    VAR_13 == VAR_2 ||
                    VAR_13 == VAR_7 ||
                    VAR_13 == VAR_3 ||
                    VAR_13 == VAR_9 ||
                    VAR_13 == VAR_5 ||
                    VAR_13 == VAR_10, "Unexpected node type %d.\n", VAR_13);

            VAR_17 = ((void*)0);
            VAR_19 = 0;
            VAR_15 = FUNC_2(VAR_12, &VAR_17, &VAR_19);
            FUNC_6(VAR_15 == VAR_1, "S_OK, got %08x\n", VAR_15);
            FUNC_6(VAR_17 != ((void*)0), "Unexpected NULL local name pointer\n");

            VAR_18 = ((void*)0);
            VAR_20 = 0;
            VAR_15 = FUNC_3(VAR_12, &VAR_18, &VAR_20);
            FUNC_6(VAR_15 == VAR_1, "S_OK, got %08x\n", VAR_15);
            FUNC_6(VAR_18 != ((void*)0), "Unexpected NULL qualified name pointer\n");

            if (VAR_13 == VAR_4 ||
                    VAR_13 == VAR_5 ||
                    VAR_13 == VAR_7 ||
                    VAR_13 == VAR_10)
            {
                FUNC_6(*VAR_17 != 0, "Unexpected empty local name\n");
                FUNC_6(VAR_19 > 0, "Unexpected local name length\n");

                FUNC_6(*VAR_18 != 0, "Unexpected empty qualified name\n");
                FUNC_6(VAR_20 > 0, "Unexpected qualified name length\n");
            }

            FUNC_7(VAR_12, VAR_11[VAR_14].uri[VAR_16]);

            VAR_16++;
        }
        FUNC_6(VAR_13 == VAR_6, "Unexpected node type %d\n", VAR_13);
    }

    FUNC_5(VAR_12);
}
