
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* dimensions; } ;
struct TYPE_6__ {struct TYPE_6__* next; int name; int id; } ;
struct TYPE_5__ {int* od; TYPE_3__* st; } ;
typedef int SIMPLE_PATTERN ;
typedef int RRDR_OPTIONS ;
typedef TYPE_1__ RRDR ;
typedef TYPE_2__ RRDDIM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int * FUNC_2 (char const*,char*,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(RRDR *VAR_7, RRDR_OPTIONS VAR_8, const char *VAR_9) {
    FUNC_1(VAR_7->st);

    if(FUNC_5(!VAR_9 || !*VAR_9 || (VAR_9[0] == '*' && VAR_9[1] == '\0'))) return;

    int VAR_10 = 0, VAR_11 = 0;

    if(FUNC_5(VAR_8 & VAR_3))
        VAR_10 = 1;
    if(FUNC_5(VAR_8 & VAR_4))
        VAR_11 = 1;

    if(FUNC_0(!VAR_10 && !VAR_11))
        VAR_10 = VAR_11 = 1;

    SIMPLE_PATTERN *VAR_12 = FUNC_2(VAR_9, ",|\t\r\n\f\v", VAR_6);

    RRDDIM *VAR_13;
    long VAR_14, VAR_15 = 0, VAR_16 = 0;
    for(VAR_14 = 0, VAR_13 = VAR_7->st->dimensions; VAR_13 ;VAR_14++, VAR_13 = VAR_13->next) {
        if( (VAR_10 && FUNC_4(VAR_12, VAR_13->id))
               || (VAR_11 && FUNC_4(VAR_12, VAR_13->name))
                ) {
            VAR_7->od[VAR_14] |= VAR_2;
            if(FUNC_5(VAR_7->od[VAR_14] & VAR_0)) VAR_7->od[VAR_14] &= ~VAR_0;
            VAR_15++;





            if(FUNC_5(!(VAR_8 & VAR_5)))
                VAR_7->od[VAR_14] |= VAR_1;


            if(FUNC_0(VAR_7->od[VAR_14] & VAR_1))
                VAR_16++;
        }
        else {
            VAR_7->od[VAR_14] |= VAR_0;
            if(FUNC_5(VAR_7->od[VAR_14] & VAR_2)) VAR_7->od[VAR_14] &= ~VAR_2;
        }
    }
    FUNC_3(VAR_12);


    if(FUNC_5(!VAR_16 && VAR_15)) {




        for(VAR_14 = 0, VAR_13 = VAR_7->st->dimensions; VAR_13 ;VAR_14++, VAR_13 = VAR_13->next)
            if(FUNC_5(VAR_7->od[VAR_14] & VAR_2))
                VAR_7->od[VAR_14] |= VAR_1;
    }
}
