
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ curx; scalar_t__ Width; int cury; int Pass; int Height; int Interlace; } ;
typedef TYPE_1__ GifCtx ;



__attribute__((used)) static void
FUNC_0(GifCtx *VAR_0)
{



        ++(VAR_0->curx);






        if( VAR_0->curx == VAR_0->Width ) {
                VAR_0->curx = 0;

                if( !VAR_0->Interlace )
                        ++(VAR_0->cury);
                else {
                     switch( VAR_0->Pass ) {

                       case 0:
                          VAR_0->cury += 8;
                          if( VAR_0->cury >= VAR_0->Height ) {
                                ++(VAR_0->Pass);
                                VAR_0->cury = 4;
                          }
                          break;

                       case 1:
                          VAR_0->cury += 8;
                          if( VAR_0->cury >= VAR_0->Height ) {
                                ++(VAR_0->Pass);
                                VAR_0->cury = 2;
                          }
                          break;

                       case 2:
                          VAR_0->cury += 4;
                          if( VAR_0->cury >= VAR_0->Height ) {
                             ++(VAR_0->Pass);
                             VAR_0->cury = 1;
                          }
                          break;

                       case 3:
                          VAR_0->cury += 2;
                          break;
                        }
                }
        }
}
