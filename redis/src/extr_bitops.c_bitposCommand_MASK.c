
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int robj ;
struct TYPE_9__ {int argc; int * argv; int db; } ;
typedef TYPE_1__ client ;
struct TYPE_10__ {int syntaxerr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,long) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,long*,int *) ;
 unsigned char* FUNC_5 (int *,long*,char*) ;
 int * FUNC_6 (int ,int ) ;
 long FUNC_7 (unsigned char*,long,long) ;
 TYPE_2__ VAR_3 ;

void FUNC_8(client *VAR_4) {
    robj *VAR_5;
    long VAR_6, VAR_7, VAR_8, VAR_9;
    unsigned char *VAR_10;
    char VAR_11[VAR_1];
    int VAR_12 = 0;



    if (FUNC_4(VAR_4,VAR_4->argv[2],&VAR_6,((void*)0)) != VAR_0)
        return;
    if (VAR_6 != 0 && VAR_6 != 1) {
        FUNC_1(VAR_4, "The bit argument must be 1 or 0.");
        return;
    }




    if ((VAR_5 = FUNC_6(VAR_4->db,VAR_4->argv[1])) == ((void*)0)) {
        FUNC_2(VAR_4, VAR_6 ? -1 : 0);
        return;
    }
    if (FUNC_3(VAR_4,VAR_5,VAR_2)) return;
    VAR_10 = FUNC_5(VAR_5,&VAR_9,VAR_11);


    if (VAR_4->argc == 4 || VAR_4->argc == 5) {
        if (FUNC_4(VAR_4,VAR_4->argv[3],&VAR_7,((void*)0)) != VAR_0)
            return;
        if (VAR_4->argc == 5) {
            if (FUNC_4(VAR_4,VAR_4->argv[4],&VAR_8,((void*)0)) != VAR_0)
                return;
            VAR_12 = 1;
        } else {
            VAR_8 = VAR_9-1;
        }

        if (VAR_7 < 0) VAR_7 = VAR_9+VAR_7;
        if (VAR_8 < 0) VAR_8 = VAR_9+VAR_8;
        if (VAR_7 < 0) VAR_7 = 0;
        if (VAR_8 < 0) VAR_8 = 0;
        if (VAR_8 >= VAR_9) VAR_8 = VAR_9-1;
    } else if (VAR_4->argc == 3) {

        VAR_7 = 0;
        VAR_8 = VAR_9-1;
    } else {

        FUNC_0(VAR_4,VAR_3.syntaxerr);
        return;
    }



    if (VAR_7 > VAR_8) {
        FUNC_2(VAR_4, -1);
    } else {
        long VAR_13 = VAR_8-VAR_7+1;
        long VAR_14 = FUNC_7(VAR_10+VAR_7,VAR_13,VAR_6);
        if (VAR_12 && VAR_6 == 0 && VAR_14 == VAR_13*8) {
            FUNC_2(VAR_4,-1);
            return;
        }
        if (VAR_14 != -1) VAR_14 += VAR_7*8;
        FUNC_2(VAR_4,VAR_14);
    }
}
