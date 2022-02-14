
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_4() {
    FUNC_2("%s\n", "<meta charset='utf-8' emacsmode='-*- markdown -*-'>");
    FUNC_2("%s\n", "<link rel='stylesheet' href='https://casual-effects.com/markdeep/latest/apidoc.css?'>");

    for( int VAR_2 = 0, VAR_3 = 0, VAR_4 = 0; !FUNC_0(VAR_0); ) {
        int VAR_5 = FUNC_1(VAR_0);
        if( VAR_2 > 3 || VAR_3 > 3 || VAR_4 > 3 ) {
            FUNC_3(VAR_5, VAR_1);
            if( VAR_5 != '\r' && VAR_5 != '\n' ) continue;
        }
             if( VAR_2 <= 2 && VAR_5 == '/' && !VAR_3 && !VAR_4 ) VAR_2++;
        else if( VAR_2 == 3 && VAR_5 == ' ' && !VAR_3 && !VAR_4 ) VAR_2++;
        else if( VAR_3 <= 2 && VAR_5 == '-' && !VAR_2 && !VAR_4 ) VAR_3++;
        else if( VAR_3 == 3 && VAR_5 == ' ' && !VAR_2 && !VAR_4 ) VAR_3++;
        else if( VAR_4 <= 2 && VAR_5 == '#' && !VAR_2 && !VAR_3 ) VAR_4++;
        else if( VAR_4 == 3 && VAR_5 == ' ' && !VAR_2 && !VAR_3 ) VAR_4++;
        else VAR_2 = VAR_3 = VAR_4 = 0;
    }

    FUNC_2("%s\n", "<script>markdeepOptions={tocStyle:'medium'};</script>");
    FUNC_2("%s\n", "<!-- Markdeep: --><script src='https://casual-effects.com/markdeep/latest/markdeep.min.js?'></script>");
}
