
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char WPARAM ;
struct TYPE_4__ {int select; int* fieldspec; char* charsEntered; int nCharsEntered; } ;
typedef int LRESULT ;
typedef TYPE_1__ DATETIME_INFO ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static LRESULT
FUNC_1 (DATETIME_INFO *VAR_9, WPARAM VAR_10)
{
    int VAR_11, VAR_12;

    VAR_11 = VAR_9->select & VAR_0;
    VAR_12 = VAR_9->fieldspec[VAR_11];

    if (VAR_12 == VAR_5 || VAR_12 == VAR_8) {
        VAR_9->charsEntered[0] = VAR_10;
        VAR_9->nCharsEntered = 1;

        FUNC_0(VAR_9);
    } else if (VAR_10 >= '0' && VAR_10 <= '9') {
        int VAR_13;

        VAR_9->charsEntered[VAR_9->nCharsEntered++] = VAR_10;

        if (VAR_12 == VAR_2 || VAR_12 == VAR_1)
            VAR_13 = 4;
        else
            VAR_13 = 2;

        if ((VAR_12 == VAR_3 ||
             VAR_12 == VAR_6 ||
             VAR_12 == VAR_4 ||
             VAR_12 == VAR_7) &&
            (VAR_9->nCharsEntered == 1))
        {
            if (VAR_10 >= '3')
                 VAR_13 = 1;
        }

        if (VAR_13 == VAR_9->nCharsEntered)
            FUNC_0(VAR_9);
    }

    return 0;
}
