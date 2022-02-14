
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int mpgl_caps; int (* PixelStorei ) (int ,int) ;int (* TexSubImage2D ) (int ,int ,int,int,int,int,int ,int ,int const*) ;} ;
typedef int GLenum ;
typedef TYPE_1__ GL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ,int,int,int,int,int ,int ,int const*) ;
 int FUNC_6 (int ,int ,int,int,int,int,int ,int ,int const*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;

void FUNC_9(GL *VAR_3, GLenum VAR_4, GLenum VAR_5, GLenum VAR_6,
                   const void *VAR_7, int VAR_8,
                   int VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
    int VAR_13 = FUNC_2(VAR_5, VAR_6);
    const uint8_t *VAR_14 = VAR_7;
    int VAR_15 = VAR_10 + VAR_12;
    if (VAR_11 <= 0 || VAR_12 <= 0 || !VAR_13)
        return;
    FUNC_0(VAR_8 > 0);
    VAR_3->PixelStorei(VAR_0, FUNC_1(VAR_8));
    int VAR_16 = VAR_12;
    if (VAR_3->mpgl_caps & VAR_2) {

        VAR_3->PixelStorei(VAR_1, VAR_8 / VAR_13);
    } else {
        if (VAR_8 != VAR_13 * VAR_11)
            VAR_16 = 1;
    }
    for (; VAR_10 + VAR_16 <= VAR_15; VAR_10 += VAR_16) {
        VAR_3->TexSubImage2D(VAR_4, 0, VAR_9, VAR_10, VAR_11, VAR_16, VAR_5, VAR_6, VAR_14);
        VAR_14 += VAR_8 * VAR_16;
    }
    if (VAR_10 < VAR_15)
        VAR_3->TexSubImage2D(VAR_4, 0, VAR_9, VAR_10, VAR_11, VAR_15 - VAR_10, VAR_5, VAR_6, VAR_14);
    if (VAR_3->mpgl_caps & VAR_2)
        VAR_3->PixelStorei(VAR_1, 0);
    VAR_3->PixelStorei(VAR_0, 4);
}
