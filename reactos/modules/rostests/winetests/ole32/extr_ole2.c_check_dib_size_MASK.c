
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int biWidth; int biHeight; } ;
struct TYPE_5__ {TYPE_1__ bmiHeader; } ;
typedef int HGLOBAL ;
typedef TYPE_2__ BITMAPINFO ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*,int,int) ;

__attribute__((used)) static void FUNC_3( HGLOBAL VAR_0, int VAR_1, int VAR_2 )
{
    BITMAPINFO *VAR_3;

    VAR_3 = FUNC_0( VAR_0 );
    FUNC_2( VAR_3->bmiHeader.biWidth == VAR_1, "got %d expect %d\n", VAR_3->bmiHeader.biWidth, VAR_1 );
    FUNC_2( VAR_3->bmiHeader.biHeight == VAR_2, "got %d expect %d\n", VAR_3->bmiHeader.biHeight, VAR_2 );
    FUNC_1( VAR_0 );
}
