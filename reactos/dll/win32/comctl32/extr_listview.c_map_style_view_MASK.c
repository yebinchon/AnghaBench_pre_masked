
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwStyle; int uView; } ;
typedef TYPE_1__ LISTVIEW_INFO ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline void FUNC_0(LISTVIEW_INFO *VAR_5)
{
    switch (VAR_5->dwStyle & VAR_0)
    {
    case 131:
        VAR_5->uView = VAR_2;
        break;
    case 129:
        VAR_5->uView = VAR_1;
        break;
    case 128:
        VAR_5->uView = VAR_4;
        break;
    case 130:
        VAR_5->uView = VAR_3;
    }
}
