
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ hwndFrom; int code; } ;
struct TYPE_9__ {scalar_t__* hRebar; } ;
typedef TYPE_1__* PTOOLBAR_DOCKS ;
typedef int LRESULT ;
typedef int LPNMREBARCHEVRON ;
typedef int LPNMREBAR ;
typedef TYPE_2__* LPNMHDR ;
typedef size_t DOCK_POSITION ;
typedef int BOOL ;


 int VAR_0 ;
 size_t VAR_1 ;




 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,size_t,int ) ;
 int FUNC_1 (TYPE_1__*,size_t) ;
 int FUNC_2 (TYPE_1__*,size_t,int ) ;
 int FUNC_3 (TYPE_1__*,size_t,int ) ;

BOOL
FUNC_4(PTOOLBAR_DOCKS VAR_4,
                       LPNMHDR VAR_5,
                       LRESULT *VAR_6)
{
    BOOL VAR_7 = VAR_0;

    if (VAR_5->hwndFrom != ((void*)0))
    {
        DOCK_POSITION VAR_8;

        for (VAR_8 = VAR_2; VAR_8 < VAR_1; VAR_8++)
        {
            if (VAR_5->hwndFrom == VAR_4->hRebar[VAR_8])
            {
                switch (VAR_5->code)
                {
                    case 128:
                    {
                        FUNC_1(VAR_4,
                                           VAR_8);
                        break;
                    }

                    case 131:
                    {
                        *VAR_6 = FUNC_0(VAR_4,
                                                    VAR_8,
                                                    (LPNMREBAR)VAR_5);
                        break;
                    }

                    case 129:
                    {
                        FUNC_3(VAR_4,
                                        VAR_8,
                                        (LPNMREBAR)VAR_5);
                        break;
                    }

                    case 130:
                    {
                        FUNC_2(VAR_4,
                                              VAR_8,
                                              (LPNMREBARCHEVRON)VAR_5);
                        break;
                    }
                }

                VAR_7 = VAR_3;
                break;
            }
        }
    }

    return VAR_7;
}
