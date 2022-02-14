
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* pRun; } ;
struct TYPE_6__ {scalar_t__ reobj; } ;
struct TYPE_7__ {TYPE_1__ run; } ;
struct TYPE_8__ {TYPE_2__ member; } ;
typedef int ME_TextEditor ;
typedef TYPE_4__ ME_Cursor ;
typedef scalar_t__ LONG ;


 int FUNC_0 (int *,scalar_t__,TYPE_4__*) ;
 int FUNC_1 (int *,scalar_t__*,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static LONG FUNC_2(ME_TextEditor *VAR_5)
{
    LONG VAR_6 = VAR_0;
    LONG VAR_7, VAR_8;

    FUNC_1(VAR_5, &VAR_7, &VAR_8);
    if (VAR_7 == VAR_8)
        VAR_6 = VAR_0;
    else
    {
        LONG VAR_9 = 0, VAR_10 = 0;
        int VAR_11;

        for (VAR_11 = 0; VAR_11 < VAR_8 - VAR_7; VAR_11++)
        {
            ME_Cursor VAR_12;

            FUNC_0(VAR_5, VAR_7 + VAR_11, &VAR_12);
            if (VAR_12.pRun->member.run.reobj)
                VAR_9++;
            else
                VAR_10++;
            if (VAR_10 >= 2 && VAR_9 >= 2)
                return (VAR_4 | VAR_1 | VAR_3 | VAR_2);
        }
        if (VAR_10)
        {
            VAR_6 |= VAR_4;
            if (VAR_10 >= 2)
                VAR_6 |= VAR_1;
        }
        if (VAR_9)
        {
            VAR_6 |= VAR_3;
            if (VAR_9 >= 2)
                VAR_6 |= VAR_2;
        }
    }
    return VAR_6;
}
