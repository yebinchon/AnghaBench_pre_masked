
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {char* xmlns_uri; scalar_t__ guid; } ;
typedef TYPE_6__ namespace_as_attribute_t ;
typedef int VARIANT_BOOL ;
struct TYPE_12__ {char* member_0; char* member_1; char* member_2; } ;
struct TYPE_11__ {char* member_0; char* member_2; int * member_1; } ;
struct TYPE_10__ {char* member_0; char* member_1; char* member_2; } ;
struct TYPE_9__ {char* member_0; char* member_2; int * member_1; } ;
struct TYPE_8__ {char* member_0; char* member_1; char* member_2; } ;
typedef size_t LONG ;
typedef int IXMLDOMNode ;
typedef int IXMLDOMNamedNodeMap ;
typedef int IXMLDOMDocument ;
typedef size_t HRESULT ;
typedef int * BSTR ;


 int VAR_0 ;
 size_t FUNC_0 (scalar_t__,int *,int ,int *,void**) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (int *,int ,int *) ;
 size_t FUNC_3 (int *,int ,int **) ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (int *,size_t,int **) ;
 size_t FUNC_6 (int *,size_t*) ;
 int FUNC_7 (int *) ;
 size_t FUNC_8 (int *,int **) ;
 size_t FUNC_9 (int *,int **) ;
 size_t FUNC_10 (int *,int **) ;
 size_t FUNC_11 (int *,int **) ;
 size_t FUNC_12 (int *,int **) ;
 size_t FUNC_13 (int *,int **) ;
 int FUNC_14 (size_t) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (char*) ;
 int FUNC_17 () ;
 int FUNC_18 (scalar_t__,int *) ;
 int FUNC_19 (int *,int ) ;
 TYPE_6__* VAR_4 ;
 int FUNC_20 (int,char*,...) ;
 int FUNC_21 (char*,char*) ;
 int FUNC_22 (scalar_t__) ;
 size_t FUNC_23 (int *) ;

__attribute__((used)) static void FUNC_24(void)
{
    const namespace_as_attribute_t *VAR_5 = VAR_4;
    struct test {
        const char *xml;
        int explen;
        const char *names[3];
        const char *prefixes[3];
        const char *basenames[3];
        const char *uris[3];
        const char *texts[3];
    };
    static const struct test VAR_6[] = {
        {
            "<a ns:b=\"b attr\" d=\"d attr\" xmlns:ns=\"nshref\" />", 3,
            { "ns:b", "d", "xmlns:ns" },
            { "ns", ((void*)0), "xmlns" },
            { "b", "d", "ns" },
            { "nshref", ((void*)0), "" },
            { "b attr", "d attr", "nshref" },
        },

        {
            "<a d=\"d attr\" />", 1,
            { "d" },
            { ((void*)0) },
            { "d" },
            { ((void*)0) },
            { "d attr" },
        },

        {
            "<a xmlns:ns=\"nshref\" />", 1,
            { "xmlns:ns" },
            { "xmlns" },
            { "ns" },
            { "" },
            { "nshref" },
        },

        {
            "<a />", 0,
        },

        { ((void*)0) }
    };
    const struct test *VAR_7;
    IXMLDOMNamedNodeMap *VAR_8;
    IXMLDOMNode *VAR_9, *VAR_10;
    IXMLDOMDocument *VAR_11;
    VARIANT_BOOL VAR_12;
    LONG VAR_13, VAR_14;
    HRESULT VAR_15;
    BSTR VAR_16;

    while (VAR_5->guid)
    {
        if (!FUNC_18(VAR_5->guid, &VAR_1))
        {
            VAR_5++;
            continue;
        }

        VAR_7 = VAR_6;
        while (VAR_7->xml) {
            VAR_15 = FUNC_0(VAR_5->guid, ((void*)0), VAR_0, &VAR_1, (void **)&VAR_11);
            FUNC_20(FUNC_14(VAR_15), "Failed to create document %s, hr %#x.\n", FUNC_22(VAR_5->guid), VAR_15);

            VAR_15 = FUNC_2(VAR_11, FUNC_16(VAR_7->xml), &VAR_12);
            FUNC_20(VAR_15 == VAR_3, "Failed to load xml, hr %#x.\n", VAR_15);

            VAR_9 = ((void*)0);
            VAR_15 = FUNC_3(VAR_11, FUNC_16("a"), &VAR_9);
            FUNC_20(FUNC_14(VAR_15), "Failed to select a node, hr %#x.\n", VAR_15);

            VAR_15 = FUNC_8(VAR_9, &VAR_8);
            FUNC_20(FUNC_14(VAR_15), "Failed to get attributes, hr %#x.\n", VAR_15);

            VAR_13 = -1;
            VAR_15 = FUNC_6(VAR_8, &VAR_13);
            FUNC_20(FUNC_14(VAR_15), "Failed to get map length, hr %#x.\n", VAR_15);
            FUNC_20(VAR_13 == VAR_7->explen, "got %d\n", VAR_13);

            VAR_10 = ((void*)0);
            VAR_15 = FUNC_5(VAR_8, VAR_7->explen+1, &VAR_10);
            FUNC_20(VAR_15 == VAR_2, "Failed to get item, hr %#x.\n", VAR_15);
            FUNC_20(!VAR_10, "Item should be NULL\n");

            for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++)
            {
                VAR_10 = ((void*)0);
                VAR_15 = FUNC_5(VAR_8, VAR_14, &VAR_10);
                FUNC_20(FUNC_14(VAR_15), "Failed to get item, hr %#x.\n", VAR_15);

                VAR_16 = ((void*)0);
                VAR_15 = FUNC_11(VAR_10, &VAR_16);
                FUNC_20(FUNC_14(VAR_15), "Failed to get node name, hr %#x.\n", VAR_15);
                FUNC_20(!FUNC_19(VAR_16, FUNC_16(VAR_7->names[VAR_14])), "got %s\n", FUNC_23(VAR_16));
                FUNC_15(VAR_16);

                VAR_16 = ((void*)0);
                VAR_15 = FUNC_12(VAR_10, &VAR_16);
                if (VAR_7->prefixes[VAR_14])
                {
                    FUNC_20(VAR_15 == VAR_3, "Failed to get node name, hr %#x.\n", VAR_15);
                    FUNC_20(!FUNC_19(VAR_16, FUNC_16(VAR_7->prefixes[VAR_14])), "got %s\n", FUNC_23(VAR_16));
                    FUNC_15(VAR_16);
                }
                else
                    FUNC_20(VAR_15 == VAR_2, "Failed to get node name, hr %#x.\n", VAR_15);

                VAR_16 = ((void*)0);
                VAR_15 = FUNC_9(VAR_10, &VAR_16);
                FUNC_20(FUNC_14(VAR_15), "Failed to get base name, hr %#x.\n", VAR_15);
                FUNC_20(!FUNC_19(VAR_16, FUNC_16(VAR_7->basenames[VAR_14])), "got %s\n", FUNC_23(VAR_16));
                FUNC_15(VAR_16);

                VAR_16 = ((void*)0);
                VAR_15 = FUNC_10(VAR_10, &VAR_16);
                if (VAR_7->uris[VAR_14])
                {
                    FUNC_20(VAR_15 == VAR_3, "Failed to get node name, hr %#x.\n", VAR_15);
                    if (VAR_7->prefixes[VAR_14] && !FUNC_21(VAR_7->prefixes[VAR_14], "xmlns"))
                        FUNC_20(!FUNC_19(VAR_16, FUNC_16(VAR_5->xmlns_uri)), "got %s\n", FUNC_23(VAR_16));
                    else
                        FUNC_20(!FUNC_19(VAR_16, FUNC_16(VAR_7->uris[VAR_14])), "got %s\n", FUNC_23(VAR_16));
                    FUNC_15(VAR_16);
                }
                else
                    FUNC_20(VAR_15 == VAR_2, "Failed to get node name, hr %#x.\n", VAR_15);

                VAR_16 = ((void*)0);
                VAR_15 = FUNC_13(VAR_10, &VAR_16);
                FUNC_20(FUNC_14(VAR_15), "Failed to get node text, hr %#x.\n", VAR_15);
                FUNC_20(!FUNC_19(VAR_16, FUNC_16(VAR_7->texts[VAR_14])), "got %s\n", FUNC_23(VAR_16));
                FUNC_15(VAR_16);

                FUNC_7(VAR_10);
            }

            FUNC_4(VAR_8);
            FUNC_7(VAR_9);
            FUNC_1(VAR_11);

            VAR_7++;
        }

        VAR_5++;
    }
    FUNC_17();
}
