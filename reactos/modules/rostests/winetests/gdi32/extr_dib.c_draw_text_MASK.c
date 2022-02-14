
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ biCompression; int biBitCount; } ;
struct TYPE_6__ {TYPE_1__ bmiHeader; scalar_t__ bmiColors; } ;
typedef int HDC ;
typedef int DWORD ;
typedef int BYTE ;
typedef TYPE_2__ BITMAPINFO ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_2__ const*,int *,int ) ;

__attribute__((used)) static void FUNC_1( HDC VAR_3, const BITMAPINFO *VAR_4, BYTE *VAR_5 )
{
    FUNC_0( VAR_3, VAR_4, VAR_5, VAR_1 );


    if ((VAR_4->bmiHeader.biCompression == VAR_0 && ((DWORD*)VAR_4->bmiColors)[0] == 0x3f000) ||
        (VAR_4->bmiHeader.biBitCount == 16))
        return;

    FUNC_0( VAR_3, VAR_4, VAR_5, VAR_2 );
}
