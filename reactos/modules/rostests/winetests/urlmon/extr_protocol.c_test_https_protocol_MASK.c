
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
 int FUNC_0 (char const*,int ,int ,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(void)
{
    static const WCHAR VAR_9[] =
        {'h','t','t','p','s',':','/','/','t','e','s','t','.','w','i','n','e','h','q','.','o','r','g','/',
         't','e','s','t','s','/','h','e','l','l','o','.','h','t','m','l',0};

    FUNC_1("Testing https protocol (from urlmon)...\n");
    VAR_8 = VAR_0 | VAR_1 | VAR_4 | VAR_2 | VAR_3;
    FUNC_0(VAR_9, VAR_5, VAR_6, VAR_7);
}
