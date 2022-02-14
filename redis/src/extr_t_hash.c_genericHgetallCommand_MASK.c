
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int robj ;
typedef int hashTypeIterator ;
struct TYPE_9__ {size_t resp; int * argv; } ;
typedef TYPE_1__ client ;
struct TYPE_10__ {int * emptymap; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int *,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,int ) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (TYPE_1__*,int ,int ) ;
 int FUNC_9 (int) ;
 TYPE_2__ VAR_4 ;

void FUNC_10(client *VAR_5, int VAR_6) {
    robj *VAR_7;
    hashTypeIterator *VAR_8;
    int VAR_9, VAR_10 = 0;

    if ((VAR_7 = FUNC_8(VAR_5,VAR_5->argv[1],VAR_4.emptymap[VAR_5->resp]))
        == ((void*)0) || FUNC_3(VAR_5,VAR_7,VAR_1)) return;



    VAR_9 = FUNC_5(VAR_7);
    if (VAR_6 & VAR_2 && VAR_6 & VAR_3) {
        FUNC_2(VAR_5, VAR_9);
    } else {
        FUNC_1(VAR_5, VAR_9);
    }

    VAR_8 = FUNC_4(VAR_7);
    while (FUNC_6(VAR_8) != VAR_0) {
        if (VAR_6 & VAR_2) {
            FUNC_0(VAR_5, VAR_8, VAR_2);
            VAR_10++;
        }
        if (VAR_6 & VAR_3) {
            FUNC_0(VAR_5, VAR_8, VAR_3);
            VAR_10++;
        }
    }

    FUNC_7(VAR_8);


    if (VAR_6 & VAR_2 && VAR_6 & VAR_3) VAR_10 /= 2;
    FUNC_9(VAR_10 == VAR_9);
}
