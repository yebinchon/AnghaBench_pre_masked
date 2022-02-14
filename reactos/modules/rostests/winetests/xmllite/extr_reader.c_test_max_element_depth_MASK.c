
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int XmlNodeType ;
typedef int IXmlReader ;
typedef unsigned int HRESULT ;


 unsigned int FUNC_0 (int *,void**,int *) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int *) ;
 unsigned int FUNC_2 (int *,unsigned int*) ;
 int FUNC_3 (int *) ;
 unsigned int FUNC_4 (int *,int ,int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,int ) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int,char*,unsigned int) ;
 int FUNC_9 (int *,char const*) ;

__attribute__((used)) static void FUNC_10(void)
{
    static const char *VAR_8 =
        "<a>"
            "<b attrb=\"_b\">"
                "<c>"
                   "<d></d>"
                "</c>"
            "</b>"
        "</a>";
    XmlNodeType VAR_9;
    unsigned int VAR_10;
    IXmlReader *VAR_11;
    HRESULT VAR_12;

    VAR_12 = FUNC_0(&VAR_0, (void **)&VAR_11, ((void*)0));
    FUNC_8(VAR_12 == VAR_2, "S_OK, got %08x\n", VAR_12);

    FUNC_9(VAR_11, VAR_8);

    VAR_12 = FUNC_4(VAR_11, VAR_7, 2);
    FUNC_8(VAR_12 == VAR_2, "got %08x\n", VAR_12);

    FUNC_5(VAR_11, 0);

    VAR_12 = FUNC_2(VAR_11, ((void*)0));
    FUNC_8(VAR_12 == VAR_2, "got %08x\n", VAR_12);

    FUNC_5(VAR_11, 0);

    VAR_12 = FUNC_2(VAR_11, ((void*)0));
    FUNC_8(VAR_12 == VAR_2, "got %08x\n", VAR_12);

    FUNC_5(VAR_11, 1);
    FUNC_7(VAR_11, VAR_6);

    VAR_12 = FUNC_2(VAR_11, ((void*)0));
    FUNC_8(VAR_12 == VAR_1, "got %08x\n", VAR_12);

    FUNC_6(VAR_11, 0, 2);
    FUNC_7(VAR_11, VAR_5);

    VAR_12 = FUNC_4(VAR_11, VAR_7, 10);
    FUNC_8(VAR_12 == VAR_2, "got %08x\n", VAR_12);

    VAR_12 = FUNC_2(VAR_11, ((void*)0));
    FUNC_8(VAR_12 == VAR_1, "got %08x\n", VAR_12);

    FUNC_6(VAR_11, 0, 2);
    FUNC_7(VAR_11, VAR_5);


    FUNC_9(VAR_11, VAR_8);

    VAR_12 = FUNC_4(VAR_11, VAR_7, 2);
    FUNC_8(VAR_12 == VAR_2, "got %08x\n", VAR_12);

    FUNC_5(VAR_11, 0);

    VAR_12 = FUNC_2(VAR_11, ((void*)0));
    FUNC_8(VAR_12 == VAR_2, "got %08x\n", VAR_12);

    FUNC_5(VAR_11, 0);

    VAR_12 = FUNC_2(VAR_11, ((void*)0));
    FUNC_8(VAR_12 == VAR_2, "got %08x\n", VAR_12);

    FUNC_5(VAR_11, 1);

    VAR_12 = FUNC_1(VAR_11);
    FUNC_8(VAR_12 == VAR_2, "got %08x\n", VAR_12);

    FUNC_5(VAR_11, 2);
    FUNC_7(VAR_11, VAR_6);

    VAR_9 = 123;
    VAR_12 = FUNC_2(VAR_11, &VAR_9);
    FUNC_8(VAR_12 == VAR_1, "got %08x\n", VAR_12);
    FUNC_8(VAR_9 == VAR_3, "got node type %d\n", VAR_9);

    VAR_9 = 123;
    VAR_12 = FUNC_2(VAR_11, &VAR_9);
    FUNC_8(VAR_12 == VAR_1, "got %08x\n", VAR_12);
    FUNC_8(VAR_9 == VAR_3, "got node type %d\n", VAR_9);

    FUNC_6(VAR_11, 0, 2);
    FUNC_7(VAR_11, VAR_5);


    FUNC_9(VAR_11, VAR_8);

    VAR_12 = FUNC_4(VAR_11, VAR_7, 0);
    FUNC_8(VAR_12 == VAR_2, "got %08x\n", VAR_12);

    VAR_10 = 0;
    while (FUNC_2(VAR_11, ((void*)0)) == VAR_2)
        VAR_10++;
    FUNC_8(VAR_10 == 8, "Unexpected node number %u\n", VAR_10);
    FUNC_7(VAR_11, VAR_4);

    FUNC_3(VAR_11);
}
