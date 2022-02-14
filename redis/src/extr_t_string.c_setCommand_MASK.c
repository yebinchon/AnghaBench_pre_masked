
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {char* ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_13__ {int argc; TYPE_1__** argv; } ;
typedef TYPE_2__ client ;
struct TYPE_14__ {int syntaxerr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int,TYPE_1__*,TYPE_1__*,TYPE_1__*,int,int *,int *) ;
 TYPE_5__ VAR_7 ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;

void FUNC_3(client *VAR_8) {
    int VAR_9;
    robj *VAR_10 = ((void*)0);
    int VAR_11 = VAR_6;
    int VAR_12 = VAR_1;

    for (VAR_9 = 3; VAR_9 < VAR_8->argc; VAR_9++) {
        char *VAR_13 = VAR_8->argv[VAR_9]->ptr;
        robj *VAR_14 = (VAR_9 == VAR_8->argc-1) ? ((void*)0) : VAR_8->argv[VAR_9+1];

        if ((VAR_13[0] == 'n' || VAR_13[0] == 'N') &&
            (VAR_13[1] == 'x' || VAR_13[1] == 'X') && VAR_13[2] == '\0' &&
            !(VAR_12 & VAR_4))
        {
            VAR_12 |= VAR_2;
        } else if ((VAR_13[0] == 'x' || VAR_13[0] == 'X') &&
                   (VAR_13[1] == 'x' || VAR_13[1] == 'X') && VAR_13[2] == '\0' &&
                   !(VAR_12 & VAR_2))
        {
            VAR_12 |= VAR_4;
        } else if ((VAR_13[0] == 'e' || VAR_13[0] == 'E') &&
                   (VAR_13[1] == 'x' || VAR_13[1] == 'X') && VAR_13[2] == '\0' &&
                   !(VAR_12 & VAR_3) && VAR_14)
        {
            VAR_12 |= VAR_0;
            VAR_11 = VAR_6;
            VAR_10 = VAR_14;
            VAR_9++;
        } else if ((VAR_13[0] == 'p' || VAR_13[0] == 'P') &&
                   (VAR_13[1] == 'x' || VAR_13[1] == 'X') && VAR_13[2] == '\0' &&
                   !(VAR_12 & VAR_0) && VAR_14)
        {
            VAR_12 |= VAR_3;
            VAR_11 = VAR_5;
            VAR_10 = VAR_14;
            VAR_9++;
        } else {
            FUNC_0(VAR_8,VAR_7.syntaxerr);
            return;
        }
    }

    VAR_8->argv[2] = FUNC_2(VAR_8->argv[2]);
    FUNC_1(VAR_8,VAR_12,VAR_8->argv[1],VAR_8->argv[2],VAR_10,VAR_11,((void*)0),((void*)0));
}
