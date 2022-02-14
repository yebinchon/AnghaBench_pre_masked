
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int quit ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,char,int) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int ,char*,int) ;
 int VAR_1 ;

void FUNC_9(void) {
    char VAR_2[4];

    FUNC_7("Linenoise key codes debugging mode.\n"
            "Press keys to see scan codes. Type 'quit' at any time to exit.\n");
    if (FUNC_1(VAR_0) == -1) return;
    FUNC_6(VAR_2,' ',4);
    while(1) {
        char VAR_3;
        int VAR_4;

        VAR_4 = FUNC_8(VAR_0,&VAR_3,1);
        if (VAR_4 <= 0) continue;
        FUNC_5(VAR_2,VAR_2+1,sizeof(VAR_2)-1);
        VAR_2[sizeof(VAR_2)-1] = VAR_3;
        if (FUNC_4(VAR_2,"quit",sizeof(VAR_2)) == 0) break;

        FUNC_7("'%c' %02x (%d) (type quit to exit)\n",
            FUNC_3(VAR_3) ? VAR_3 : '?', (int)VAR_3, (int)VAR_3);
        FUNC_7("\r");
        FUNC_2(VAR_1);
    }
    FUNC_0(VAR_0);
}
