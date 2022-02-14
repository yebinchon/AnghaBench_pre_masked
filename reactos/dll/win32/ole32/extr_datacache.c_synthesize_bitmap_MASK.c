
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int bmiHeader; } ;
struct TYPE_8__ {int hBitmap; } ;
struct TYPE_9__ {int * pUnkForRelease; int tymed; TYPE_1__ u; } ;
typedef TYPE_2__ STGMEDIUM ;
typedef int HRESULT ;
typedef int HGLOBAL ;
typedef int HDC ;
typedef TYPE_3__ BITMAPINFO ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ,char*,TYPE_3__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (TYPE_3__*,int ) ;

__attribute__((used)) static HRESULT FUNC_6( HGLOBAL VAR_5, STGMEDIUM *VAR_6 )
{
    HRESULT VAR_7 = VAR_2;
    BITMAPINFO *VAR_8;
    HDC VAR_9 = FUNC_1( 0 );

    if ((VAR_8 = FUNC_2( VAR_5 )))
    {

        VAR_6->u.hBitmap = FUNC_0( VAR_9, &VAR_8->bmiHeader, VAR_0,
                                         (char *)VAR_8 + FUNC_5( VAR_8, VAR_1 ),
                                         VAR_8, VAR_1 );
        FUNC_3( VAR_5 );
        VAR_6->tymed = VAR_4;
        VAR_6->pUnkForRelease = ((void*)0);
        VAR_7 = VAR_3;
    }
    FUNC_4( 0, VAR_9 );
    return VAR_7;
}
