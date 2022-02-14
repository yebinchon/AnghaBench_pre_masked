
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int dwStyle; scalar_t__ lPos; scalar_t__ lRangeMin; scalar_t__ lRangeMax; } ;
typedef TYPE_1__ TRACKBAR_INFO ;
typedef scalar_t__ LONG ;
typedef int INT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_7 (TYPE_1__*,int ) ;

__attribute__((used)) static BOOL
FUNC_8 (TRACKBAR_INFO *VAR_6, INT VAR_7)
{
    BOOL VAR_8 = VAR_6->dwStyle & VAR_1;
    BOOL VAR_9 = VAR_6->dwStyle & VAR_2;
    LONG VAR_10 = VAR_6->lPos;

    FUNC_0("%x\n", VAR_7);

    switch (VAR_7) {
    case 128:
 if (!VAR_9 && VAR_8) FUNC_2(VAR_6);
        else FUNC_3(VAR_6);
        break;
    case 132:
        if (VAR_9 && VAR_8) FUNC_2(VAR_6);
        else FUNC_3(VAR_6);
        break;
    case 135:
 if (!VAR_9 && VAR_8) FUNC_3(VAR_6);
        else FUNC_2(VAR_6);
        break;
    case 129:
 if (VAR_9 && VAR_8) FUNC_3(VAR_6);
        else FUNC_2(VAR_6);
        break;
    case 131:
 if (!VAR_9 && VAR_8) FUNC_5(VAR_6);
        else FUNC_4(VAR_6);
        break;
    case 130:
 if (!VAR_9 && VAR_8) FUNC_4(VAR_6);
        else FUNC_5(VAR_6);
        break;
    case 133:
        if (VAR_6->lPos == VAR_6->lRangeMin) return VAR_0;
        VAR_6->lPos = VAR_6->lRangeMin;
        FUNC_7 (VAR_6, VAR_4);
        break;
    case 134:
        if (VAR_6->lPos == VAR_6->lRangeMax) return VAR_0;
        VAR_6->lPos = VAR_6->lRangeMax;
        FUNC_7 (VAR_6, VAR_3);
        break;
    }

    if (VAR_10 != VAR_6->lPos) {
 FUNC_6 (VAR_6);
 FUNC_1 (VAR_6, VAR_10, VAR_6->lPos);
    }

    return VAR_5;
}
