
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ encoding; } ;
typedef TYPE_1__ robj ;
struct TYPE_20__ {int longval; int sz; scalar_t__ value; } ;
typedef TYPE_2__ quicklistEntry ;
typedef int listTypeIterator ;
struct TYPE_21__ {TYPE_2__ entry; } ;
typedef TYPE_3__ listTypeEntry ;
struct TYPE_22__ {int * argv; } ;
typedef TYPE_4__ client ;
struct TYPE_23__ {int emptyarray; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*,long) ;
 int FUNC_2 (TYPE_4__*,scalar_t__,int ) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_4__*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_4__*,int ,long*,int *) ;
 int * FUNC_6 (TYPE_1__*,long,int ) ;
 long FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *,TYPE_3__*) ;
 int FUNC_9 (int *) ;
 TYPE_1__* FUNC_10 (TYPE_4__*,int ,int ) ;
 int FUNC_11 (char*) ;
 TYPE_5__ VAR_4 ;

void FUNC_12(client *VAR_5) {
    robj *VAR_6;
    long VAR_7, VAR_8, VAR_9, VAR_10;

    if ((FUNC_5(VAR_5, VAR_5->argv[2], &VAR_7, ((void*)0)) != VAR_0) ||
        (FUNC_5(VAR_5, VAR_5->argv[3], &VAR_8, ((void*)0)) != VAR_0)) return;

    if ((VAR_6 = FUNC_10(VAR_5,VAR_5->argv[1],VAR_4.emptyarray)) == ((void*)0)
         || FUNC_4(VAR_5,VAR_6,VAR_3)) return;
    VAR_9 = FUNC_7(VAR_6);


    if (VAR_7 < 0) VAR_7 = VAR_9+VAR_7;
    if (VAR_8 < 0) VAR_8 = VAR_9+VAR_8;
    if (VAR_7 < 0) VAR_7 = 0;



    if (VAR_7 > VAR_8 || VAR_7 >= VAR_9) {
        FUNC_0(VAR_5,VAR_4.emptyarray);
        return;
    }
    if (VAR_8 >= VAR_9) VAR_8 = VAR_9-1;
    VAR_10 = (VAR_8-VAR_7)+1;


    FUNC_1(VAR_5,VAR_10);
    if (VAR_6->encoding == VAR_2) {
        listTypeIterator *VAR_11 = FUNC_6(VAR_6, VAR_7, VAR_1);

        while(VAR_10--) {
            listTypeEntry VAR_12;
            FUNC_8(VAR_11, &VAR_12);
            quicklistEntry *VAR_13 = &VAR_12.entry;
            if (VAR_13->value) {
                FUNC_2(VAR_5,VAR_13->value,VAR_13->sz);
            } else {
                FUNC_3(VAR_5,VAR_13->longval);
            }
        }
        FUNC_9(VAR_11);
    } else {
        FUNC_11("List encoding is not QUICKLIST!");
    }
}
