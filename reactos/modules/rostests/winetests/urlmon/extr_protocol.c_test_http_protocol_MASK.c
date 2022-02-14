
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,int ,int,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    static const WCHAR VAR_23[] =
        {'h','t','t','p',':','/','/','t','e','s','t','.','w','i','n','e','h','q','.','o','r','g','/',
         't','e','s','t','s','/','p','o','s','t','.','p','h','p',0};
    static const WCHAR VAR_24[] =
        {'h','t','t','p',':','/','/','t','e','s','t','.','w','i','n','e','h','q','.','o','r','g','/',
         't','e','s','t','s','/','r','e','d','i','r','e','c','t',0};
    static const WCHAR VAR_25[] =
        {'h','t','t','p',':','/','/','t','e','s','t','.','w','i','n','e','h','q','.','o','r','g','/',
         't','e','s','t','s','/','d','a','t','a','.','p','h','p',0};
    static const WCHAR VAR_26[] =
        {'h','t','t','p',':','/','/','t','e','s','t','.','w','i','n','e','h','q','.','o','r','g','/',
         't','e','s','t','s','/','e','m','p','t','y','.','j','s',0};
    static const WCHAR VAR_27[] =
        {'h','t','t','p',':','/','/','t','e','s','t','.','w','i','n','e','h','q','.','o','r','g','/',
         't','e','s','t','s','/','c','a','c','h','e','-','o','n','l','y',0};


    FUNC_3("Testing http protocol (not from urlmon)...\n");
    VAR_22 = VAR_0 | VAR_1 | VAR_5;
    FUNC_2(VAR_25, VAR_8, VAR_14, VAR_21);

    FUNC_3("Testing http protocol (from urlmon)...\n");
    VAR_22 = VAR_0 | VAR_1 | VAR_5 | VAR_2;
    FUNC_2(VAR_25, VAR_8, 0, VAR_21);

    FUNC_3("Testing http protocol (to file)...\n");
    VAR_22 = VAR_0 | VAR_1 | VAR_5 | VAR_2 | VAR_3;
    FUNC_2(VAR_25, VAR_8, 0, VAR_21);

    FUNC_3("Testing http protocol (post data)...\n");
    VAR_22 = VAR_0 | VAR_1 | VAR_5 | VAR_2;
    FUNC_2(VAR_23, VAR_8, VAR_14|VAR_16, VAR_19);

    FUNC_3("Testing http protocol (post data stream)...\n");
    FUNC_2(VAR_23, VAR_8, VAR_14|VAR_16|VAR_10, VAR_20);

    FUNC_3("Testing http protocol (direct read)...\n");
    VAR_22 = VAR_0 | VAR_1 | VAR_5 | VAR_2;
    FUNC_2(VAR_25, VAR_8, VAR_11|VAR_18, VAR_21);

    FUNC_3("Testing http protocol (redirected)...\n");
    VAR_22 = VAR_0 | VAR_1 | VAR_5 | VAR_2 | VAR_4;
    FUNC_2(VAR_24, VAR_8, VAR_17, VAR_21);

    FUNC_3("Testing http protocol (redirected, disable auto redirect)...\n");
    VAR_22 = VAR_0 | VAR_1 | VAR_5 | VAR_2 | VAR_4;
    FUNC_2(VAR_24, VAR_8, VAR_17 | VAR_12, VAR_21);

    FUNC_3("Testing http protocol empty file...\n");
    VAR_22 = VAR_0 | VAR_1 | VAR_5 | VAR_2 | VAR_4;
    FUNC_2(VAR_26, VAR_8, VAR_13, VAR_21);






    if(FUNC_0(1)) {
    FUNC_3("Testing http protocol (from cache)...\n");
    VAR_22 = VAR_0 | VAR_1 | VAR_5 | VAR_2;
    FUNC_2(VAR_27, VAR_8, VAR_15, VAR_21);
    }

    FUNC_3("Testing http protocol abort...\n");
    VAR_22 = VAR_0 | VAR_1 | VAR_5 | VAR_2 | VAR_4;
    FUNC_2(VAR_25, VAR_8, VAR_9, VAR_21);

    FUNC_1(&VAR_6);
    FUNC_1(&VAR_7);
}
