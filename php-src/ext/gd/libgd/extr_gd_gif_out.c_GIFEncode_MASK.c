
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int gdImagePtr ;
typedef int gdIOCtxPtr ;
typedef int ctx ;
struct TYPE_4__ {int Interlace; int in_count; int Width; int Height; long CountDown; scalar_t__ cury; scalar_t__ curx; scalar_t__ Pass; } ;
typedef TYPE_1__ GifCtx ;


 int FUNC_0 (int,int ,int ,TYPE_1__*) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_5(gdIOCtxPtr VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, int *VAR_7, int *VAR_8, int *VAR_9, gdImagePtr VAR_10)
{
        int VAR_11;
        int VAR_12, VAR_13;
        int VAR_14, VAR_15;
        int VAR_16;
        int VAR_17;
        int VAR_18;
        int VAR_19;
  GifCtx VAR_20;

  FUNC_4(&VAR_20, 0, sizeof(VAR_20));
        VAR_20.Interlace = VAR_3;
  VAR_20.in_count = 1;

        VAR_17 = 1 << VAR_6;

        VAR_12 = VAR_20.Width = VAR_1;
        VAR_13 = VAR_20.Height = VAR_2;
        VAR_14 = VAR_15 = 0;

        VAR_16 = VAR_6;




        VAR_20.CountDown = (long)VAR_20.Width * (long)VAR_20.Height;




        VAR_20.Pass = 0;




        if( VAR_6 <= 1 )
                VAR_18 = 2;
        else
                VAR_18 = VAR_6;




        VAR_20.curx = VAR_20.cury = 0;




        FUNC_1(VAR_5 < 0 ? "GIF87a" : "GIF89a", 6, VAR_0 );




        FUNC_3( VAR_12, VAR_0 );
        FUNC_3( VAR_13, VAR_0 );




        VAR_11 = 0x80;




        VAR_11 |= (VAR_16 - 1) << 5;




        VAR_11 |= (VAR_6 - 1);




        FUNC_2( VAR_11, VAR_0 );




        FUNC_2( VAR_4, VAR_0 );




        FUNC_2( 0, VAR_0 );




        for( VAR_19=0; VAR_19<VAR_17; ++VAR_19 ) {
                FUNC_2( VAR_7[VAR_19], VAR_0 );
                FUNC_2( VAR_8[VAR_19], VAR_0 );
                FUNC_2( VAR_9[VAR_19], VAR_0 );
        }




 if ( VAR_5 >= 0 ) {
     FUNC_2( '!', VAR_0 );
     FUNC_2( 0xf9, VAR_0 );
     FUNC_2( 4, VAR_0 );
     FUNC_2( 1, VAR_0 );
     FUNC_2( 0, VAR_0 );
     FUNC_2( 0, VAR_0 );
     FUNC_2( (unsigned char) VAR_5, VAR_0 );
     FUNC_2( 0, VAR_0 );
 }




        FUNC_2( ',', VAR_0 );





        FUNC_3( VAR_14, VAR_0 );
        FUNC_3( VAR_15, VAR_0 );
        FUNC_3( VAR_20.Width, VAR_0 );
        FUNC_3( VAR_20.Height, VAR_0 );




        if( VAR_20.Interlace )
                FUNC_2( 0x40, VAR_0 );
        else
                FUNC_2( 0x00, VAR_0 );




        FUNC_2( VAR_18, VAR_0 );




        FUNC_0( VAR_18+1, VAR_0, VAR_10, &VAR_20 );




        FUNC_2( 0, VAR_0 );




        FUNC_2( ';', VAR_0 );
}
