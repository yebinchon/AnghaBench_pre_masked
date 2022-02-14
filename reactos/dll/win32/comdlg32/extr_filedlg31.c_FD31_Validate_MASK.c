
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ofnsav ;
typedef int WCHAR ;
typedef int UINT ;
struct TYPE_12__ {int lParam; int fileokstring; scalar_t__ hook; int lbselchstring; TYPE_1__* ofnW; int hwnd; } ;
struct TYPE_11__ {int Flags; char* lpstrFile; int lStructSize; } ;
typedef TYPE_1__ OPENFILENAMEW ;
typedef int LRESULT ;
typedef char* LPWSTR ;
typedef TYPE_1__* LPOPENFILENAMEW ;
typedef int LPCWSTR ;
typedef scalar_t__ LONG ;
typedef int INT ;
typedef int HWND ;
typedef TYPE_3__ FD31_DATA ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_3__ const*,int ,int ,int ) ;
 int FUNC_2 (TYPE_3__ const*,int *) ;
 int FUNC_3 (TYPE_3__ const*) ;
 int FUNC_4 (TYPE_3__ const*,int *) ;
 int FUNC_5 (int ,int ,int *,int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (char*,int ) ;
 int VAR_5 ;
 int FUNC_8 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_12 (int ,int) ;
 char* FUNC_13 (char*,char) ;

__attribute__((used)) static LRESULT FUNC_14( const FD31_DATA *VAR_8, LPCWSTR VAR_9, UINT VAR_10, INT VAR_11,
                                 BOOL VAR_12 )
{
    LONG VAR_13;
    HWND VAR_14 = VAR_8->hwnd;
    OPENFILENAMEW VAR_15;
    LPOPENFILENAMEW VAR_16 = VAR_8->ofnW;
    WCHAR VAR_17[VAR_0];
    int VAR_18 = FUNC_12( VAR_16->lStructSize, sizeof(VAR_15) );

    FUNC_11( &VAR_15, VAR_16, VAR_18 );


    if (VAR_9)
        FUNC_9(VAR_17, VAR_9, FUNC_0(VAR_17));
    else
        FUNC_5( VAR_14, VAR_6, VAR_17, FUNC_0(VAR_17));

    FUNC_7("got filename = %s\n", FUNC_8(VAR_17));

    if (VAR_10 != VAR_7)
    {
        if (!FUNC_2( VAR_8, VAR_17) )
           return VAR_2;
    }
    FUNC_4(VAR_8, VAR_17);

    if (VAR_12)
    {
        if (VAR_8->hook)
        {
             FUNC_1(VAR_8, VAR_8->lbselchstring, VAR_10,
                             FUNC_6(VAR_11,VAR_1));
        }
        return VAR_5;
    }

    FUNC_3(VAR_8);
    if (VAR_8->hook)
    {
        VAR_13 = FUNC_1(VAR_8, VAR_8->fileokstring,
                  0, VAR_8->lParam );
        if (VAR_13)
        {
            FUNC_11( VAR_16, &VAR_15, VAR_18 );
            return VAR_2;
        }
    }
    if ((VAR_16->Flags & VAR_3) && (VAR_16->Flags & VAR_4))
    {
        if (VAR_16->lpstrFile)
        {
            LPWSTR VAR_19 = VAR_16->lpstrFile;
            LPWSTR VAR_20 = FUNC_13(VAR_19, '\\');
     VAR_19[FUNC_10(VAR_19) + 1] = '\0';
     *VAR_20 = 0;
        }
    }
    return VAR_5;
}
