
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* name; char* uri; int hr; } ;
typedef TYPE_1__ ns_item_t ;
typedef scalar_t__ VARIANT_BOOL ;
typedef int LONG ;
typedef int IXMLDOMNodeList ;
typedef void IXMLDOMNode ;
typedef int IXMLDOMNamedNodeMap ;
typedef int IXMLDOMElement ;
typedef int IXMLDOMDocument ;
typedef int HRESULT ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int **) ;
 int FUNC_3 (int *,int *,scalar_t__*) ;
 int FUNC_4 (int *,int *,void**) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int **) ;
 int FUNC_7 (int *,int **) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,void**) ;
 int FUNC_10 (int *,int *,int *,void**) ;
 int FUNC_11 (int *,int*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int,void**) ;
 int FUNC_14 (void*,int *,void**) ;
 int FUNC_15 (void*) ;
 int FUNC_16 (void*,int **) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_17 (char*) ;
 char* VAR_5 ;
 int * FUNC_18 (int *) ;
 char* VAR_6 ;
 int FUNC_19 () ;
 TYPE_1__* VAR_7 ;
 int FUNC_20 (int,char*,...) ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static void FUNC_21(void)
{
    IXMLDOMNode *VAR_9, *VAR_10;
    IXMLDOMNodeList *VAR_11;
    IXMLDOMNamedNodeMap *VAR_12;
    IXMLDOMElement *VAR_13;
    const ns_item_t* VAR_14;
    IXMLDOMDocument *VAR_15;
    VARIANT_BOOL VAR_16;
    HRESULT VAR_17;
    LONG VAR_18;

    VAR_15 = FUNC_18(&VAR_1);

    VAR_17 = FUNC_3( VAR_15, FUNC_17(VAR_5), &VAR_16 );
    FUNC_0(VAR_17, VAR_3);
    FUNC_20( VAR_16 == VAR_4, "failed to load XML string\n");

    VAR_17 = FUNC_2(VAR_15, &VAR_13);
    FUNC_0(VAR_17, VAR_3);

    VAR_17 = FUNC_7(VAR_13, &VAR_11);
    FUNC_0(VAR_17, VAR_3);

    VAR_17 = FUNC_13(VAR_11, 1, &VAR_9);
    FUNC_0(VAR_17, VAR_3);
    FUNC_12(VAR_11);

    VAR_17 = FUNC_16(VAR_9, &VAR_12);
    FUNC_0(VAR_17, VAR_3);
    FUNC_15(VAR_9);

    VAR_18 = 0;
    VAR_17 = FUNC_11(VAR_12, &VAR_18);
    FUNC_0(VAR_17, VAR_3);
    FUNC_20( VAR_18 == 3, "length %d\n", VAR_18);

    VAR_17 = FUNC_10(VAR_12, ((void*)0), ((void*)0), ((void*)0));
    FUNC_0(VAR_17, VAR_0);

    VAR_10 = (void*)0xdeadbeef;
    VAR_17 = FUNC_10(VAR_12, ((void*)0), ((void*)0), &VAR_10);
    FUNC_0(VAR_17, VAR_0);
    FUNC_20( VAR_10 == (void*)0xdeadbeef, "got %p\n", VAR_10);

    VAR_17 = FUNC_10(VAR_12, FUNC_17("id"), ((void*)0), ((void*)0));
    FUNC_0(VAR_17, VAR_0);

    VAR_17 = FUNC_10(VAR_12, FUNC_17("id"), ((void*)0), &VAR_10);
    FUNC_0(VAR_17, VAR_3);

    FUNC_15(VAR_10);
    FUNC_8(VAR_12);
    FUNC_5(VAR_13);

    VAR_17 = FUNC_3(VAR_15, FUNC_17(VAR_6), &VAR_16);
    FUNC_0(VAR_17, VAR_3);

    VAR_17 = FUNC_4(VAR_15, FUNC_17("a"), &VAR_10);
    FUNC_0(VAR_17, VAR_3);

    VAR_17 = FUNC_14(VAR_10, &VAR_2, (void**)&VAR_13);
    FUNC_0(VAR_17, VAR_3);
    FUNC_15(VAR_10);

    VAR_17 = FUNC_6(VAR_13, &VAR_12);
    FUNC_0(VAR_17, VAR_3);

    VAR_14 = VAR_8;
    while (VAR_14->name)
    {
       VAR_10 = (void*)0xdeadbeef;
       VAR_17 = FUNC_10(VAR_12, FUNC_17(VAR_14->name), FUNC_17(VAR_14->uri), &VAR_10);
       FUNC_20(VAR_17 == VAR_14->hr, "%s, %s: got 0x%08x, expected 0x%08x\n", VAR_14->name, VAR_14->uri, VAR_17, VAR_14->hr);
       if (VAR_17 == VAR_3)
           FUNC_15(VAR_10);
       else
           FUNC_20(VAR_10 == ((void*)0), "%s, %s: got %p\n", VAR_14->name, VAR_14->uri, VAR_10);
       VAR_14++;
    }

    VAR_14 = VAR_7;
    while (VAR_14->name)
    {
       VAR_10 = (void*)0xdeadbeef;
       VAR_17 = FUNC_9(VAR_12, FUNC_17(VAR_14->name), &VAR_10);
       FUNC_20(VAR_17 == VAR_14->hr, "%s: got 0x%08x, expected 0x%08x\n", VAR_14->name, VAR_17, VAR_14->hr);
       if (VAR_17 == VAR_3)
           FUNC_15(VAR_10);
       else
           FUNC_20(VAR_10 == ((void*)0), "%s: got %p\n", VAR_14->name, VAR_10);
       VAR_14++;
    }

    FUNC_8(VAR_12);

    FUNC_5(VAR_13);
    FUNC_1(VAR_15);
    FUNC_19();
}
