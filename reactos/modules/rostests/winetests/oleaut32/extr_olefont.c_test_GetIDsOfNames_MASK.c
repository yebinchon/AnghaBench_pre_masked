
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int LCID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (char*,char*,char*,char*,int,int,int,int ,int) ;

__attribute__((used)) static void FUNC_3(void)
{
    WCHAR VAR_17[] = {'N','a','m','e',0};
    WCHAR VAR_18[] = {'I','t','a','l','i','c',0};
    WCHAR VAR_19[] = {'S','i','z','e',0};
    WCHAR VAR_20[] = {'B','o','l','d',0};
    WCHAR VAR_21[] = {'U','n','d','e','r','l','i','n','e',0};
    WCHAR VAR_22[] = {'S','t','r','i','k','e','t','h','r','o','u','g','h',0};
    WCHAR VAR_23[] = {'W','e','i','g','h','t',0};
    WCHAR VAR_24[] = {'C','h','a','r','s','e','t',0};
    WCHAR VAR_25[] = {'F','o','o',0};
    WCHAR VAR_26[] = {'n','A','m','E',0};
    WCHAR VAR_27[] = {'N','o','m',0};

    LCID VAR_28 = FUNC_1(FUNC_0(VAR_11,VAR_14),
                          VAR_13);
    LCID VAR_29 = FUNC_1(FUNC_0(VAR_12,VAR_15),
                          VAR_13);


    FUNC_2(VAR_17, "Name", ((void*)0), "", VAR_28,
                   VAR_3, 0, VAR_16,1);
    FUNC_2(VAR_19, "Size", ((void*)0), "", VAR_28,
                   VAR_4, 0, VAR_16,1);
    FUNC_2(VAR_20, "Bold", ((void*)0), "", VAR_28,
                   VAR_0, 0, VAR_16,1);
    FUNC_2(VAR_18, "Italic", ((void*)0), "", VAR_28,
                   VAR_2, 0, VAR_16,1);
    FUNC_2(VAR_21, "Underline", ((void*)0), "", VAR_28,
                   VAR_6, 0, VAR_16,1);
    FUNC_2(VAR_22, "Strikethrough", ((void*)0), "", VAR_28,
                   VAR_5, 0, VAR_16,1);
    FUNC_2(VAR_23, "Weight", ((void*)0), "", VAR_28,
                   VAR_7, 0, VAR_16,1);
    FUNC_2(VAR_24, "Charset", ((void*)0), "", VAR_28,
                   VAR_1, 0, VAR_16,1);


    FUNC_2(VAR_26, "nAmE", ((void*)0), "", VAR_28,
                   VAR_3, 0, VAR_16,1);


    FUNC_2(VAR_25, "Foo", ((void*)0), "", VAR_28,
                   VAR_8, 0, VAR_9,1);



    FUNC_2(VAR_18, "Italic", VAR_17, "Name", VAR_28,
                   VAR_2, VAR_8, VAR_16,2);
    FUNC_2(VAR_18, "Italic", VAR_25, "Foo", VAR_28,
                   VAR_2, VAR_8, VAR_16,2);


    FUNC_2(VAR_17, "Name", ((void*)0), "", VAR_29,
                   VAR_3, 0, VAR_16,1);
    FUNC_2(VAR_27, "This is not a font", ((void*)0), "", VAR_29,
                   VAR_8, 0, VAR_9,1);


    FUNC_2(VAR_17, "Name", ((void*)0), "", VAR_28,
                   0xdeadbeef, 0xdeadbeef, VAR_10,0);
    FUNC_2(VAR_18, "Italic", ((void*)0), "", VAR_28,
                   0xdeadbeef, 0xdeadbeef, VAR_10,0);
    FUNC_2(VAR_25, "Foo", ((void*)0), "", VAR_28,
                   0xdeadbeef, 0xdeadbeef, VAR_10,0);


    FUNC_2(VAR_17, "Name", ((void*)0), "", -1,
                   VAR_3, 0, VAR_16,1);
}
