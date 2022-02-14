
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct menu_data {int type; scalar_t__ str; int id; } ;
struct TYPE_3__ {int member_0; int fMask; int fType; int wID; scalar_t__ fState; int cch; scalar_t__ dwTypeData; scalar_t__ hbmpItem; } ;
typedef TYPE_1__ MENUITEMINFOA ;
typedef scalar_t__ LPSTR ;
typedef size_t INT ;
typedef scalar_t__ HMENU ;
typedef scalar_t__ HBITMAP ;
typedef int BOOL ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__,int,int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int) ;
 int VAR_8 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,size_t,int,int ,scalar_t__,int ) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static HMENU FUNC_7(const struct menu_data *VAR_9, INT VAR_10)
{
    HMENU VAR_11;
    INT VAR_12;
    BOOL VAR_13;
    MENUITEMINFOA VAR_14 = { sizeof( MENUITEMINFOA) };

    VAR_11 = FUNC_0();
    FUNC_4(VAR_11 != 0);

    for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++)
    {
        FUNC_3(0xdeadbeef);

        VAR_14.fMask = VAR_4 | VAR_5 | VAR_6;
        VAR_14.fType = 0;
        if( VAR_9[VAR_12].type & VAR_0)
        {
            VAR_14.fMask |= VAR_3;
            VAR_14.hbmpItem = (HBITMAP)VAR_9[VAR_12].str;
        }
        else if( VAR_9[VAR_12].type & VAR_1)
            VAR_14.fType = VAR_1;
        else
        {
            VAR_14.fMask |= VAR_7;
            VAR_14.dwTypeData = (LPSTR)VAR_9[VAR_12].str;
            VAR_14.cch = FUNC_6( VAR_9[VAR_12].str);
        }
        VAR_14.fState = 0;
        if( VAR_9[VAR_12].type & VAR_2) VAR_14.fType |= VAR_2;
        VAR_14.wID = VAR_9[VAR_12].id;
        VAR_13 = FUNC_2( VAR_11, -1, VAR_8, &VAR_14);
        FUNC_5(VAR_13, "%d: InsertMenuItem(%04x, %04x, %p) error %u\n",
           VAR_12, VAR_9[VAR_12].type, VAR_9[VAR_12].id, VAR_9[VAR_12].str, FUNC_1());
    }
    return VAR_11;
}
