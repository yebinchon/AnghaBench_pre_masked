
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linenoiseState {int ifd; int ofd; char* buf; size_t buflen; char const* prompt; scalar_t__ oldpos; scalar_t__ pos; int len; int plen; scalar_t__ history_index; scalar_t__ maxrows; int cols; } ;
typedef int linenoiseHintsCallback ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 char FUNC_0 (struct linenoiseState*) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;
 int * VAR_5 ;
 int * VAR_6 ;
 size_t VAR_7 ;
 int FUNC_3 () ;
 int FUNC_4 (struct linenoiseState*) ;
 int FUNC_5 (struct linenoiseState*) ;
 int FUNC_6 (struct linenoiseState*) ;
 int FUNC_7 (struct linenoiseState*,int ) ;
 int FUNC_8 (struct linenoiseState*,char) ;
 int FUNC_9 (struct linenoiseState*) ;
 int FUNC_10 (struct linenoiseState*) ;
 int FUNC_11 (struct linenoiseState*) ;
 int FUNC_12 (struct linenoiseState*) ;
 int FUNC_13 (char*) ;
 int VAR_8 ;
 int FUNC_14 (int,char*,int) ;
 int FUNC_15 (struct linenoiseState*) ;
 int FUNC_16 (char const*) ;
 int FUNC_17 (int,char const*,int ) ;

__attribute__((used)) static int FUNC_18(int VAR_9, int VAR_10, char *VAR_11, size_t VAR_12, const char *VAR_13)
{
    struct linenoiseState VAR_14;



    VAR_14.ifd = VAR_9;
    VAR_14.ofd = VAR_10;
    VAR_14.buf = VAR_11;
    VAR_14.buflen = VAR_12;
    VAR_14.prompt = VAR_13;
    VAR_14.plen = FUNC_16(VAR_13);
    VAR_14.oldpos = VAR_14.pos = 0;
    VAR_14.len = 0;
    VAR_14.cols = FUNC_2(VAR_9, VAR_10);
    VAR_14.maxrows = 0;
    VAR_14.history_index = 0;


    VAR_14.buf[0] = '\0';
    VAR_14.buflen--;



    FUNC_13("");

    if (FUNC_17(VAR_14.ofd,VAR_13,VAR_14.plen) == -1) return -1;
    while(1) {
        char VAR_15;
        int VAR_16;
        char VAR_17[3];

        VAR_16 = FUNC_14(VAR_14.ifd,&VAR_15,1);
        if (VAR_16 <= 0) return VAR_14.len;




        if (VAR_15 == 9 && VAR_3 != ((void*)0)) {
            VAR_15 = FUNC_0(&VAR_14);

            if (VAR_15 < 0) return VAR_14.len;

            if (VAR_15 == 0) continue;
        }

        switch(VAR_15) {
        case 129:
            VAR_7--;
            FUNC_1(VAR_6[VAR_7]);
            if (VAR_8) FUNC_9(&VAR_14);
            if (VAR_5) {


                linenoiseHintsCallback *VAR_18 = VAR_5;
                VAR_5 = ((void*)0);
                FUNC_15(&VAR_14);
                VAR_5 = VAR_18;
            }
            return (int)VAR_14.len;
        case 140:
            VAR_4 = VAR_0;
            return -1;
        case 143:
        case 8:
            FUNC_4(&VAR_14);
            break;
        case 139:

            if (VAR_14.len > 0) {
                FUNC_5(&VAR_14);
            } else {
                VAR_7--;
                FUNC_1(VAR_6[VAR_7]);
                return -1;
            }
            break;
        case 132:
            if (VAR_14.pos > 0 && VAR_14.pos < VAR_14.len) {
                int VAR_19 = VAR_11[VAR_14.pos-1];
                VAR_11[VAR_14.pos-1] = VAR_11[VAR_14.pos];
                VAR_11[VAR_14.pos] = VAR_19;
                if (VAR_14.pos != VAR_14.len-1) VAR_14.pos++;
                FUNC_15(&VAR_14);
            }
            break;
        case 141:
            FUNC_11(&VAR_14);
            break;
        case 137:
            FUNC_12(&VAR_14);
            break;
        case 133:
            FUNC_7(&VAR_14, VAR_2);
            break;
        case 134:
            FUNC_7(&VAR_14, VAR_1);
            break;
        case 128:



            if (FUNC_14(VAR_14.ifd,VAR_17,1) == -1) break;
            if (FUNC_14(VAR_14.ifd,VAR_17+1,1) == -1) break;


            if (VAR_17[0] == '[') {
                if (VAR_17[1] >= '0' && VAR_17[1] <= '9') {

                    if (FUNC_14(VAR_14.ifd,VAR_17+2,1) == -1) break;
                    if (VAR_17[2] == '~') {
                        switch(VAR_17[1]) {
                        case '3':
                            FUNC_5(&VAR_14);
                            break;
                        }
                    }
                } else {
                    switch(VAR_17[1]) {
                    case 'A':
                        FUNC_7(&VAR_14, VAR_2);
                        break;
                    case 'B':
                        FUNC_7(&VAR_14, VAR_1);
                        break;
                    case 'C':
                        FUNC_12(&VAR_14);
                        break;
                    case 'D':
                        FUNC_11(&VAR_14);
                        break;
                    case 'H':
                        FUNC_10(&VAR_14);
                        break;
                    case 'F':
                        FUNC_9(&VAR_14);
                        break;
                    }
                }
            }


            else if (VAR_17[0] == 'O') {
                switch(VAR_17[1]) {
                case 'H':
                    FUNC_10(&VAR_14);
                    break;
                case 'F':
                    FUNC_9(&VAR_14);
                    break;
                }
            }
            break;
        default:
            if (FUNC_8(&VAR_14,VAR_15)) return -1;
            break;
        case 131:
            VAR_11[0] = '\0';
            VAR_14.pos = VAR_14.len = 0;
            FUNC_15(&VAR_14);
            break;
        case 136:
            VAR_11[VAR_14.pos] = '\0';
            VAR_14.len = VAR_14.pos;
            FUNC_15(&VAR_14);
            break;
        case 142:
            FUNC_10(&VAR_14);
            break;
        case 138:
            FUNC_9(&VAR_14);
            break;
        case 135:
            FUNC_3();
            FUNC_15(&VAR_14);
            break;
        case 130:
            FUNC_6(&VAR_14);
            break;
        }
    }
    return VAR_14.len;
}
