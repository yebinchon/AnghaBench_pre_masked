
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int menuInfo ;
typedef scalar_t__ UINT ;
struct TYPE_4__ {int cbSize; int fMask; int fType; scalar_t__ dwTypeData; scalar_t__ hbmpItem; } ;
typedef TYPE_1__ MENUITEMINFOW ;
typedef scalar_t__ LPWSTR ;
typedef scalar_t__ INT ;
typedef int HWND ;
typedef int HMENU ;
typedef scalar_t__ HBITMAP ;
typedef int BOOL ;


 int FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,int ,int ,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int ,int ,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (char*,int ,int ) ;
 int VAR_10 ;
 int FUNC_10 (TYPE_1__*,int ,int) ;

__attribute__((used)) static BOOL FUNC_11( HWND VAR_11, HWND VAR_12, HBITMAP VAR_13 )
{
    MENUITEMINFOW VAR_14;
    HMENU VAR_15 = FUNC_4( VAR_11 );
    INT VAR_16;
    UINT VAR_17;

    FUNC_9("frame %p,child %p\n",VAR_11, VAR_12);

    if (!VAR_15) return VAR_0;


    VAR_16 = FUNC_5(VAR_15) - 1;
    VAR_17 = FUNC_6(VAR_15, VAR_16);
    if ( !(VAR_17 == VAR_9 || VAR_17 == VAR_7) )
    {
        FUNC_3("no system buttons then nothing to do\n");
        return VAR_0;
    }





    FUNC_10(&VAR_14, 0, sizeof(VAR_14));
    VAR_14.cbSize = sizeof(VAR_14);
    VAR_14.fMask = VAR_5 | VAR_6 | VAR_4;

    FUNC_7(VAR_15,
       0,
       VAR_10,
       &VAR_14);

    FUNC_8(VAR_15,0,VAR_3);

    if ( (VAR_14.fType & VAR_1) &&
  (VAR_14.dwTypeData != 0) &&
  (VAR_14.dwTypeData != (LPWSTR)VAR_13) )
    {
        FUNC_1(VAR_14.dwTypeData);
    }

    if ( VAR_14.hbmpItem != 0 )
         FUNC_1(VAR_14.hbmpItem);


    FUNC_0(VAR_15, VAR_7, VAR_2);

    FUNC_0(VAR_15, VAR_9, VAR_2);

    FUNC_0(VAR_15, VAR_8, VAR_2);

    FUNC_2(VAR_11);

    return VAR_10;
}
