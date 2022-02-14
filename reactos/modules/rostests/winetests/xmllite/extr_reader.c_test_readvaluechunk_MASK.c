
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef scalar_t__ XmlNodeType ;
typedef int WCHAR ;
typedef int UINT ;
typedef int IXmlReader ;
typedef int HRESULT ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int *,void**,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,scalar_t__*) ;
 int FUNC_3 (int *,int*,int,int*) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int*,int,int) ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int *,char) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int*,char*) ;
 int FUNC_12 (int*) ;

__attribute__((used)) static void FUNC_13(void)
{
    IXmlReader *VAR_4;
    XmlNodeType VAR_5;
    WCHAR VAR_6[64];
    WCHAR VAR_7;
    HRESULT VAR_8;
    UINT VAR_9;

    VAR_8 = FUNC_1(&VAR_0, (void**)&VAR_4, ((void*)0));
    FUNC_6(VAR_8 == VAR_2, "S_OK, got %08x\n", VAR_8);

    FUNC_10(VAR_4, "<!-- comment1 --><!-- comment2 -->");

    VAR_8 = FUNC_2(VAR_4, &VAR_5);
    FUNC_6(VAR_8 == VAR_2, "got %08x\n", VAR_8);
    FUNC_6(VAR_5 == VAR_3, "type = %u\n", VAR_5);

    FUNC_8(VAR_4, ' ');
    FUNC_8(VAR_4, 'c');


    FUNC_9(VAR_4, "omment1 ");


    VAR_9 = 0;
    VAR_7 = 0;
    VAR_8 = FUNC_3(VAR_4, &VAR_7, 1, &VAR_9);
    FUNC_6(VAR_8 == VAR_1, "got %08x\n", VAR_8);
    FUNC_6(VAR_9 == 0, "got %u\n", VAR_9);
    FUNC_6(VAR_7 == 0, "got %x\n", VAR_7);

    VAR_9 = 0xdeadbeef;
    VAR_8 = FUNC_3(VAR_4, VAR_6, 0, &VAR_9);
    FUNC_6(VAR_8 == VAR_2, "got %08x\n", VAR_8);
    FUNC_6(!VAR_9, "c = %u\n", VAR_9);

    FUNC_9(VAR_4, "omment1 ");


    FUNC_7(VAR_4, VAR_3);

    VAR_9 = 0xdeadbeef;
    VAR_8 = FUNC_3(VAR_4, VAR_6, 0, &VAR_9);
    FUNC_6(VAR_8 == VAR_2, "got %08x\n", VAR_8);
    FUNC_6(!VAR_9, "c = %u\n", VAR_9);

    VAR_9 = 0xdeadbeef;
    FUNC_5(VAR_6, 0xcc, sizeof(VAR_6));
    VAR_8 = FUNC_3(VAR_4, VAR_6, FUNC_0(VAR_6), &VAR_9);
    FUNC_6(VAR_8 == VAR_2, "got %08x\n", VAR_8);
    FUNC_6(VAR_9 == 10, "got %u\n", VAR_9);
    FUNC_6(VAR_6[VAR_9] == 0xcccc, "buffer overflow\n");
    VAR_6[VAR_9] = 0;
    FUNC_6(!FUNC_11(VAR_6, " comment2 "), "buf = %s\n", FUNC_12(VAR_6));

    VAR_9 = 0xdeadbeef;
    FUNC_5(VAR_6, 0xcc, sizeof(VAR_6));
    VAR_8 = FUNC_3(VAR_4, VAR_6, FUNC_0(VAR_6), &VAR_9);
    FUNC_6(VAR_8 == VAR_1, "got %08x\n", VAR_8);
    FUNC_6(!VAR_9, "got %u\n", VAR_9);


    FUNC_9(VAR_4, "");


    VAR_9 = 0xdeadbeef;
    VAR_7 = 0xffff;
    VAR_8 = FUNC_3(VAR_4, &VAR_7, 1, &VAR_9);
    FUNC_6(VAR_8 == VAR_1, "got %08x\n", VAR_8);
    FUNC_6(VAR_9 == 0, "got %u\n", VAR_9);
    FUNC_6(VAR_7 == 0xffff, "got %x\n", VAR_7);

    FUNC_9(VAR_4, "");

    FUNC_4(VAR_4);
}
