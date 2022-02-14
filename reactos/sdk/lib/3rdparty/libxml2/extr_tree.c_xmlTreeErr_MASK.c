
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlNodePtr ;


 int VAR_0 ;




 int FUNC_0 (int ,int,int ,char const*,char const*) ;

__attribute__((used)) static void
FUNC_1(int VAR_1, xmlNodePtr VAR_2, const char *VAR_3)
{
    const char *VAR_4 = ((void*)0);

    switch(VAR_1) {
        case 130:
     VAR_4 = "invalid hexadecimal character value\n";
     break;
 case 131:
     VAR_4 = "invalid decimal character value\n";
     break;
 case 128:
     VAR_4 = "unterminated entity reference %15s\n";
     break;
 case 129:
     VAR_4 = "string is not in UTF-8\n";
     break;
 default:
     VAR_4 = "unexpected error number\n";
    }
    FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4, VAR_3);
}
