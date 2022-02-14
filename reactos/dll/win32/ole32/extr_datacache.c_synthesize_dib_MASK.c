
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int header ;
struct TYPE_14__ {int biSize; int biHeight; scalar_t__ biSizeImage; } ;
struct TYPE_12__ {int hGlobal; } ;
struct TYPE_13__ {int * pUnkForRelease; int tymed; TYPE_1__ u; } ;
typedef TYPE_2__ STGMEDIUM ;
typedef int HRESULT ;
typedef int HDC ;
typedef int HBITMAP ;
typedef int DWORD ;
typedef TYPE_3__ BITMAPINFOHEADER ;
typedef TYPE_3__ BITMAPINFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,char*,TYPE_3__*,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 TYPE_3__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_9 (TYPE_3__*,int ,int) ;

__attribute__((used)) static HRESULT FUNC_10( HBITMAP VAR_5, STGMEDIUM *VAR_6 )
{
    HDC VAR_7 = FUNC_0( 0 );
    BITMAPINFOHEADER VAR_8;
    BITMAPINFO *VAR_9;
    HRESULT VAR_10 = VAR_1;
    DWORD VAR_11;

    FUNC_9( &VAR_8, 0, sizeof(VAR_8) );
    VAR_8.biSize = sizeof(VAR_8);
    if (!FUNC_1( VAR_7, VAR_5, 0, 0, ((void*)0), (BITMAPINFO *)&VAR_8, VAR_0 )) goto done;

    VAR_11 = FUNC_7( (BITMAPINFO *)&VAR_8, VAR_0 );
    if (!(VAR_6->u.hGlobal = FUNC_2( VAR_2, VAR_11 + VAR_8.biSizeImage ))) goto done;
    VAR_9 = FUNC_3( VAR_6->u.hGlobal );
    FUNC_9( VAR_9, 0, VAR_11 );
    FUNC_8( VAR_9, &VAR_8, VAR_8.biSize );
    FUNC_1( VAR_7, VAR_5, 0, FUNC_6(VAR_8.biHeight), (char *)VAR_9 + VAR_11, VAR_9, VAR_0 );
    FUNC_4( VAR_6->u.hGlobal );
    VAR_6->tymed = VAR_4;
    VAR_6->pUnkForRelease = ((void*)0);
    VAR_10 = VAR_3;

done:
    FUNC_5( 0, VAR_7 );
    return VAR_10;
}
