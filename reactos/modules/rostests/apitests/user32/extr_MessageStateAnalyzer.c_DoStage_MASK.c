
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPARAM ;
typedef int UINT ;
struct TYPE_3__ {int nType; size_t* iActions; size_t nCount; int uParentMsg; int nLine; int nLevel; int * uMessages; } ;
typedef TYPE_1__ STAGE ;
typedef int LPARAM ;
typedef size_t INT ;
typedef int HWND ;


 int FUNC_0 (int ,size_t,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 int FUNC_2 (int,char*,int ,size_t,int ,...) ;
 int FUNC_3 (int,int) ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;

__attribute__((used)) static void FUNC_4(HWND VAR_10, UINT VAR_11, WPARAM VAR_12, LPARAM VAR_13)
{
    INT VAR_14, VAR_15;
    const STAGE *VAR_16;
    VAR_3 = VAR_0;

    if (VAR_5 >= VAR_4)
        return;

    VAR_16 = &VAR_9[VAR_5];
    switch (VAR_16->nType)
    {
        case 128:
            if (VAR_16->uMessages[VAR_6] == VAR_11)
            {
                FUNC_3(1, 1);
                FUNC_2(VAR_8 == VAR_16->nLevel,
                   "Line %d, Step %d: Level expected %d but %d.\n",
                   VAR_16->nLine, VAR_6, VAR_16->nLevel, VAR_8);
                FUNC_2(VAR_1 == VAR_16->uParentMsg,
                   "Line %d, Step %d: PARENT_MSG expected %u but %u.\n",
                   VAR_16->nLine, VAR_6, VAR_16->uParentMsg, VAR_1);

                VAR_15 = VAR_16->iActions[VAR_6];
                if (VAR_15)
                    FUNC_0(VAR_10, VAR_15, VAR_12, VAR_13);

                ++VAR_6;
                if (VAR_6 >= VAR_16->nCount)
                    VAR_3 = VAR_2;
            }
            break;
        case 129:
            for (VAR_14 = 0; VAR_14 < VAR_16->nCount; ++VAR_14)
            {
                if (VAR_16->uMessages[VAR_14] == VAR_11)
                {
                    FUNC_3(1, 1);
                    FUNC_2(VAR_8 == VAR_16->nLevel,
                       "Line %d: Level expected %d but %d.\n",
                       VAR_16->nLine, VAR_16->nLevel, VAR_8);
                    FUNC_2(VAR_1 == VAR_16->uParentMsg,
                       "Line %d: PARENT_MSG expected %u but %u.\n",
                       VAR_16->nLine, VAR_16->uParentMsg, VAR_1);

                    VAR_15 = VAR_16->iActions[VAR_14];
                    if (VAR_15)
                        FUNC_0(VAR_10, VAR_15, VAR_12, VAR_13);

                    ++VAR_7[VAR_14];

                    if (VAR_14 == VAR_16->nCount - 1)
                        VAR_3 = VAR_2;
                    break;
                }
            }
            break;
    }

    if (VAR_3)
    {
        FUNC_1(VAR_10);
    }
}
