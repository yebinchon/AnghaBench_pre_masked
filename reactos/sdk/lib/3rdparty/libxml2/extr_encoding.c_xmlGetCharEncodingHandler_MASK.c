
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * xmlCharEncodingHandlerPtr ;
typedef int xmlCharEncoding ;
 int * VAR_0 ;
 int * FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int * VAR_2 ;
 int * VAR_3 ;

xmlCharEncodingHandlerPtr
FUNC_3(xmlCharEncoding VAR_4) {
    xmlCharEncodingHandlerPtr VAR_5;

    if (VAR_0 == ((void*)0)) FUNC_2();
    switch (VAR_4) {
        case 139:
     return(((void*)0));
        case 137:
     return(((void*)0));
        case 128:
     return(((void*)0));
        case 129:
     return(VAR_3);
        case 130:
     return(VAR_2);
        case 140:
            VAR_5 = FUNC_0("EBCDIC");
            if (VAR_5 != ((void*)0)) return(VAR_5);
            VAR_5 = FUNC_0("ebcdic");
            if (VAR_5 != ((void*)0)) return(VAR_5);
            VAR_5 = FUNC_0("EBCDIC-US");
            if (VAR_5 != ((void*)0)) return(VAR_5);
            VAR_5 = FUNC_0("IBM-037");
            if (VAR_5 != ((void*)0)) return(VAR_5);
     break;
        case 134:
            VAR_5 = FUNC_0("ISO-10646-UCS-4");
            if (VAR_5 != ((void*)0)) return(VAR_5);
            VAR_5 = FUNC_0("UCS-4");
            if (VAR_5 != ((void*)0)) return(VAR_5);
            VAR_5 = FUNC_0("UCS4");
            if (VAR_5 != ((void*)0)) return(VAR_5);
     break;
        case 133:
            VAR_5 = FUNC_0("ISO-10646-UCS-4");
            if (VAR_5 != ((void*)0)) return(VAR_5);
            VAR_5 = FUNC_0("UCS-4");
            if (VAR_5 != ((void*)0)) return(VAR_5);
            VAR_5 = FUNC_0("UCS4");
            if (VAR_5 != ((void*)0)) return(VAR_5);
     break;
        case 132:
     break;
        case 131:
     break;
        case 135:
            VAR_5 = FUNC_0("ISO-10646-UCS-2");
            if (VAR_5 != ((void*)0)) return(VAR_5);
            VAR_5 = FUNC_0("UCS-2");
            if (VAR_5 != ((void*)0)) return(VAR_5);
            VAR_5 = FUNC_0("UCS2");
            if (VAR_5 != ((void*)0)) return(VAR_5);
     break;







        case 149:
     VAR_5 = FUNC_0("ISO-8859-1");
     if (VAR_5 != ((void*)0)) return(VAR_5);
     break;
        case 148:
     VAR_5 = FUNC_0("ISO-8859-2");
     if (VAR_5 != ((void*)0)) return(VAR_5);
     break;
        case 147:
     VAR_5 = FUNC_0("ISO-8859-3");
     if (VAR_5 != ((void*)0)) return(VAR_5);
     break;
        case 146:
     VAR_5 = FUNC_0("ISO-8859-4");
     if (VAR_5 != ((void*)0)) return(VAR_5);
     break;
        case 145:
     VAR_5 = FUNC_0("ISO-8859-5");
     if (VAR_5 != ((void*)0)) return(VAR_5);
     break;
        case 144:
     VAR_5 = FUNC_0("ISO-8859-6");
     if (VAR_5 != ((void*)0)) return(VAR_5);
     break;
        case 143:
     VAR_5 = FUNC_0("ISO-8859-7");
     if (VAR_5 != ((void*)0)) return(VAR_5);
     break;
        case 142:
     VAR_5 = FUNC_0("ISO-8859-8");
     if (VAR_5 != ((void*)0)) return(VAR_5);
     break;
        case 141:
     VAR_5 = FUNC_0("ISO-8859-9");
     if (VAR_5 != ((void*)0)) return(VAR_5);
     break;


        case 150:
            VAR_5 = FUNC_0("ISO-2022-JP");
            if (VAR_5 != ((void*)0)) return(VAR_5);
     break;
        case 136:
            VAR_5 = FUNC_0("SHIFT-JIS");
            if (VAR_5 != ((void*)0)) return(VAR_5);
            VAR_5 = FUNC_0("SHIFT_JIS");
            if (VAR_5 != ((void*)0)) return(VAR_5);
            VAR_5 = FUNC_0("Shift_JIS");
            if (VAR_5 != ((void*)0)) return(VAR_5);
     break;
        case 138:
            VAR_5 = FUNC_0("EUC-JP");
            if (VAR_5 != ((void*)0)) return(VAR_5);
     break;
 default:
     break;
    }





    return(((void*)0));
}
