
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int encoding ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int ,int*,int,int*,int ) ;

__attribute__((used)) static void FUNC_2(void)
{
    DWORD VAR_3, VAR_4;
    HRESULT VAR_5;

    VAR_4 = VAR_3 = 0xdeadbeef;
    VAR_5 = FUNC_1(VAR_2, &VAR_3,
                                 sizeof(VAR_3), &VAR_4, 0);
    FUNC_0(VAR_5 == VAR_1, "UrlMkGetSessionOption failed: %08x\n", VAR_5);
    FUNC_0(VAR_3 != 0xdeadbeef, "encoding not changed\n");
    FUNC_0(VAR_4 == sizeof(VAR_3), "size=%d\n", VAR_4);

    VAR_4 = VAR_3 = 0xdeadbeef;
    VAR_5 = FUNC_1(VAR_2, &VAR_3,
                                 sizeof(VAR_3)+1, &VAR_4, 0);
    FUNC_0(VAR_5 == VAR_1, "UrlMkGetSessionOption failed: %08x\n", VAR_5);
    FUNC_0(VAR_3 != 0xdeadbeef, "encoding not changed\n");
    FUNC_0(VAR_4 == sizeof(VAR_3), "size=%d\n", VAR_4);

    VAR_4 = VAR_3 = 0xdeadbeef;
    VAR_5 = FUNC_1(VAR_2, &VAR_3,
                                 sizeof(VAR_3)-1, &VAR_4, 0);
    FUNC_0(VAR_5 == VAR_0, "UrlMkGetSessionOption failed: %08x\n", VAR_5);
    FUNC_0(VAR_3 == 0xdeadbeef, "encoding = %08x, exepcted 0xdeadbeef\n", VAR_3);
    FUNC_0(VAR_4 == 0xdeadbeef, "size=%d\n", VAR_4);

    VAR_4 = VAR_3 = 0xdeadbeef;
    VAR_5 = FUNC_1(VAR_2, ((void*)0),
                                 sizeof(VAR_3)-1, &VAR_4, 0);
    FUNC_0(VAR_5 == VAR_0, "UrlMkGetSessionOption failed: %08x\n", VAR_5);
    FUNC_0(VAR_3 == 0xdeadbeef, "encoding = %08x, exepcted 0xdeadbeef\n", VAR_3);
    FUNC_0(VAR_4 == 0xdeadbeef, "size=%d\n", VAR_4);

    VAR_3 = 0xdeadbeef;
    VAR_5 = FUNC_1(VAR_2, &VAR_3,
                                 sizeof(VAR_3)-1, ((void*)0), 0);
    FUNC_0(VAR_5 == VAR_0, "UrlMkGetSessionOption failed: %08x\n", VAR_5);
    FUNC_0(VAR_3 == 0xdeadbeef, "encoding = %08x, exepcted 0xdeadbeef\n", VAR_3);
}
