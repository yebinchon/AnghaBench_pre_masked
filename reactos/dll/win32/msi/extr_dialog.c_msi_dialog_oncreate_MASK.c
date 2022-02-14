
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_20__ {TYPE_7__* package; scalar_t__ default_font; int attributes; int hwnd; int scale; int name; } ;
typedef TYPE_1__ msi_dialog ;
typedef char WCHAR ;
struct TYPE_24__ {int db; } ;
struct TYPE_23__ {TYPE_1__* lpCreateParams; } ;
struct TYPE_22__ {int hdr; } ;
struct TYPE_21__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__ MSIRECORD ;
typedef int LRESULT ;
typedef int * LPWSTR ;
typedef TYPE_4__* LPCREATESTRUCTW ;
typedef int LONG_PTR ;
typedef int HWND ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (char*,TYPE_1__*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,TYPE_3__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_13 (int ,char const*) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (TYPE_7__*,TYPE_3__*,int) ;
 TYPE_3__* FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (char const*) ;

__attribute__((used)) static LRESULT FUNC_19( HWND VAR_4, LPCREATESTRUCTW VAR_5 )
{
    static const WCHAR VAR_6[] = {
        'D','e','f','a','u','l','t','U','I','F','o','n','t',0 };
    static const WCHAR VAR_7[] = {
        'M','S',' ','S','h','e','l','l',' ','D','l','g',0 };
    msi_dialog *VAR_8 = VAR_5->lpCreateParams;
    MSIRECORD *VAR_9 = ((void*)0);
    LPWSTR VAR_10 = ((void*)0);
    RECT VAR_11;

    FUNC_5("%p %p\n", VAR_8, VAR_8->package);

    VAR_8->hwnd = VAR_4;
    FUNC_2( VAR_4, VAR_0, (LONG_PTR) VAR_8 );

    VAR_9 = FUNC_16( VAR_8 );
    if( !VAR_9 )
    {
        FUNC_5("No record found for dialog %s\n", FUNC_6(VAR_8->name));
        return -1;
    }

    VAR_8->scale = FUNC_11(VAR_8->hwnd);

    FUNC_7( VAR_8, VAR_9, &VAR_11 );

    VAR_8->attributes = FUNC_0( VAR_9, 6 );

    VAR_8->default_font = FUNC_13( VAR_8->package->db, VAR_6 );
    if (!VAR_8->default_font)
    {
        VAR_8->default_font = FUNC_18(VAR_7);
        if (!VAR_8->default_font)
        {
            FUNC_17( &VAR_9->hdr );
            return -1;
        }
    }

    VAR_10 = FUNC_15( VAR_8->package, VAR_9, 7 );
    FUNC_4( VAR_4, VAR_10 );
    FUNC_14( VAR_10 );

    FUNC_3( VAR_4, 0, VAR_11.left, VAR_11.top,
                  VAR_11.right - VAR_11.left, VAR_11.bottom - VAR_11.top,
                  VAR_1 | VAR_3 | VAR_2 );

    FUNC_8( VAR_8 );
    FUNC_10( VAR_8 );
    FUNC_9( VAR_8 );
    FUNC_12( VAR_8, FUNC_1( VAR_9, 8 ) );
    FUNC_17( &VAR_9->hdr );

    return 0;
}
