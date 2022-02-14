
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int flags; int patterns; int passwords; int allowed_commands; } ;
typedef TYPE_1__ user ;
typedef int ssize_t ;
typedef int sds ;
typedef int listNode ;


 int FUNC_0 (TYPE_1__*,unsigned long,char*) ;
 unsigned long FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_1__*,unsigned long) ;
 int FUNC_3 (unsigned char*,int) ;
 int * FUNC_4 (char const*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,unsigned long) ;
 int FUNC_7 (TYPE_1__*,unsigned long,int) ;
 int FUNC_8 (TYPE_1__*,char const*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ) ;
 int * FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char const*,int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (char const*,char*) ;
 char* FUNC_18 (char const*,char) ;
 scalar_t__ FUNC_19 (char const*) ;
 int FUNC_20 (char*) ;
 char* FUNC_21 (char const*) ;

int FUNC_22(user *VAR_15, const char *VAR_16, ssize_t VAR_17) {
    if (VAR_17 == -1) VAR_17 = FUNC_19(VAR_16);
    if (!FUNC_17(VAR_16,"on")) {
        VAR_15->flags |= VAR_12;
        VAR_15->flags &= ~VAR_11;
    } else if (!FUNC_17(VAR_16,"off")) {
        VAR_15->flags |= VAR_11;
        VAR_15->flags &= ~VAR_12;
    } else if (!FUNC_17(VAR_16,"allkeys") ||
               !FUNC_17(VAR_16,"~*"))
    {
        VAR_15->flags |= VAR_10;
        FUNC_11(VAR_15->patterns);
    } else if (!FUNC_17(VAR_16,"resetkeys")) {
        VAR_15->flags &= ~VAR_10;
        FUNC_11(VAR_15->patterns);
    } else if (!FUNC_17(VAR_16,"allcommands") ||
               !FUNC_17(VAR_16,"+@all"))
    {
        FUNC_13(VAR_15->allowed_commands,255,sizeof(VAR_15->allowed_commands));
        VAR_15->flags |= VAR_9;
        FUNC_5(VAR_15);
    } else if (!FUNC_17(VAR_16,"nocommands") ||
               !FUNC_17(VAR_16,"-@all"))
    {
        FUNC_13(VAR_15->allowed_commands,0,sizeof(VAR_15->allowed_commands));
        VAR_15->flags &= ~VAR_9;
        FUNC_5(VAR_15);
    } else if (!FUNC_17(VAR_16,"nopass")) {
        VAR_15->flags |= VAR_13;
        FUNC_11(VAR_15->passwords);
    } else if (!FUNC_17(VAR_16,"resetpass")) {
        VAR_15->flags &= ~VAR_13;
        FUNC_11(VAR_15->passwords);
    } else if (VAR_16[0] == '>' || VAR_16[0] == '#') {
        sds VAR_18;
        if (VAR_16[0] == '>') {
            VAR_18 = FUNC_3((unsigned char*)VAR_16+1,VAR_17-1);
        } else {
            if (VAR_17 != VAR_8 + 1) {
                VAR_14 = VAR_2;
                return VAR_0;
            }





            for(int VAR_19 = 1; VAR_19 < VAR_8 + 1; VAR_19++) {
                char VAR_20 = VAR_16[VAR_19];
                if ((VAR_20 < 'a' || VAR_20 > 'f') && (VAR_20 < '0' || VAR_20 > '9')) {
                    VAR_14 = VAR_2;
                    return VAR_0;
                }
            }
            VAR_18 = FUNC_15(VAR_16+1,VAR_17-1);
        }

        listNode *VAR_21 = FUNC_12(VAR_15->passwords,VAR_18);

        if (VAR_21 == ((void*)0))
            FUNC_9(VAR_15->passwords,VAR_18);
        else
            FUNC_14(VAR_18);
        VAR_15->flags &= ~VAR_13;
    } else if (VAR_16[0] == '<' || VAR_16[0] == '!') {
        sds VAR_22;
        if (VAR_16[0] == '<') {
            VAR_22 = FUNC_3((unsigned char*)VAR_16+1,VAR_17-1);
        } else {
            if (VAR_17 != VAR_8 + 1) {
                VAR_14 = VAR_2;
                return VAR_0;
            }
            VAR_22 = FUNC_15(VAR_16+1,VAR_17-1);
        }
        listNode *VAR_23 = FUNC_12(VAR_15->passwords,VAR_22);
        FUNC_14(VAR_22);
        if (VAR_23) {
            FUNC_10(VAR_15->passwords,VAR_23);
        } else {
            VAR_14 = VAR_6;
            return VAR_0;
        }
    } else if (VAR_16[0] == '~') {
        if (VAR_15->flags & VAR_10) {
            VAR_14 = VAR_4;
            return VAR_0;
        }
        sds VAR_24 = FUNC_15(VAR_16+1,VAR_17-1);
        listNode *VAR_25 = FUNC_12(VAR_15->patterns,VAR_24);

        if (VAR_25 == ((void*)0))
            FUNC_9(VAR_15->patterns,VAR_24);
        else
            FUNC_14(VAR_24);
        VAR_15->flags &= ~VAR_10;
    } else if (VAR_16[0] == '+' && VAR_16[1] != '@') {
        if (FUNC_18(VAR_16,'|') == ((void*)0)) {
            if (FUNC_4(VAR_16+1) == ((void*)0)) {
                VAR_14 = VAR_7;
                return VAR_0;
            }
            unsigned long VAR_26 = FUNC_1(VAR_16+1);
            FUNC_7(VAR_15,VAR_26,1);
            FUNC_6(VAR_15,VAR_26);
        } else {

            char *VAR_27 = FUNC_21(VAR_16+1);
            char *VAR_28 = FUNC_18(VAR_27,'|');
            VAR_28[0] = '\0';
            VAR_28++;



            if (FUNC_4(VAR_27) == ((void*)0)) {
                FUNC_20(VAR_27);
                VAR_14 = VAR_7;
                return VAR_0;
            }
            unsigned long VAR_29 = FUNC_1(VAR_27);



            if (FUNC_19(VAR_28) == 0) {
                FUNC_20(VAR_27);
                VAR_14 = VAR_5;
                return VAR_0;
            }




            if (FUNC_2(VAR_15,VAR_29) == 1) {
                FUNC_20(VAR_27);
                VAR_14 = VAR_3;
                return VAR_0;
            }


            FUNC_0(VAR_15,VAR_29,VAR_28);



            FUNC_7(VAR_15,VAR_29,0);
            FUNC_20(VAR_27);
        }
    } else if (VAR_16[0] == '-' && VAR_16[1] != '@') {
        if (FUNC_4(VAR_16+1) == ((void*)0)) {
            VAR_14 = VAR_7;
            return VAR_0;
        }
        unsigned long VAR_30 = FUNC_1(VAR_16+1);
        FUNC_7(VAR_15,VAR_30,0);
        FUNC_6(VAR_15,VAR_30);
    } else if ((VAR_16[0] == '+' || VAR_16[0] == '-') && VAR_16[1] == '@') {
        int VAR_31 = VAR_16[0] == '+' ? 1 : 0;
        if (FUNC_8(VAR_15,VAR_16+2,VAR_31) == VAR_0) {
            VAR_14 = VAR_7;
            return VAR_0;
        }
    } else if (!FUNC_17(VAR_16,"reset")) {
        FUNC_16(FUNC_22(VAR_15,"resetpass",-1) == VAR_1);
        FUNC_16(FUNC_22(VAR_15,"resetkeys",-1) == VAR_1);
        FUNC_16(FUNC_22(VAR_15,"off",-1) == VAR_1);
        FUNC_16(FUNC_22(VAR_15,"-@all",-1) == VAR_1);
    } else {
        VAR_14 = VAR_5;
        return VAR_0;
    }
    return VAR_1;
}
