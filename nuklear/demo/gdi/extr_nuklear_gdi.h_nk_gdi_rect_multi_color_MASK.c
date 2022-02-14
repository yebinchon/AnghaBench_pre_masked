
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct nk_color {int dummy; } ;
struct TYPE_12__ {int memory_dc; int window_dc; } ;
struct TYPE_11__ {int AlphaFormat; scalar_t__ SourceConstantAlpha; scalar_t__ BlendFlags; int BlendOp; } ;
struct TYPE_10__ {int Vertex1; int Vertex2; int Vertex3; } ;
struct TYPE_9__ {short x; short y; } ;
typedef TYPE_1__ TRIVERTEX ;
typedef int HDC ;
typedef TYPE_2__ GRADIENT_TRIANGLE ;
typedef int GRADIENT_RECT ;
typedef TYPE_3__ BLENDFUNCTION ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,short,short,short,short,int ,short,short,short,short,TYPE_3__) ;
 int VAR_2 ;
 int FUNC_1 (int ,TYPE_1__*,int,TYPE_2__*,int,int ) ;
 TYPE_5__ VAR_3 ;
 int FUNC_2 (TYPE_1__*,struct nk_color) ;

__attribute__((used)) static void
FUNC_3(HDC VAR_4, short VAR_5, short VAR_6, unsigned short VAR_7,
    unsigned short VAR_8, struct nk_color VAR_9, struct nk_color VAR_10,
    struct nk_color VAR_11, struct nk_color VAR_12)
{
    BLENDFUNCTION VAR_13;
    GRADIENT_RECT VAR_14;
    GRADIENT_TRIANGLE VAR_15[2];
    TRIVERTEX VAR_16[4];
    VAR_13.BlendOp = VAR_1;
    VAR_13.BlendFlags = 0;
    VAR_13.SourceConstantAlpha = 0;
    VAR_13.AlphaFormat = VAR_0;



    VAR_16[0].x = VAR_5;
    VAR_16[0].y = VAR_6;
    FUNC_2(&VAR_16[0], VAR_9);

    VAR_16[1].x = VAR_5+VAR_7;
    VAR_16[1].y = VAR_6;
    FUNC_2(&VAR_16[1], VAR_10);

    VAR_16[2].x = VAR_5;
    VAR_16[2].y = VAR_6+VAR_8;
    FUNC_2(&VAR_16[2], VAR_11);


    VAR_16[3].x = VAR_5+VAR_7;
    VAR_16[3].y = VAR_6+VAR_8;
    FUNC_2(&VAR_16[3], VAR_12);

    VAR_15[0].Vertex1 = 0;
    VAR_15[0].Vertex2 = 1;
    VAR_15[0].Vertex3 = 2;
    VAR_15[1].Vertex1 = 2;
    VAR_15[1].Vertex2 = 1;
    VAR_15[1].Vertex3 = 3;
    FUNC_1(VAR_4, VAR_16, 4, VAR_15, 2 , VAR_2);
    FUNC_0(VAR_3.window_dc, VAR_5, VAR_6, VAR_5+VAR_7, VAR_6+VAR_8,VAR_3.memory_dc, VAR_5, VAR_6, VAR_5+VAR_7, VAR_6+VAR_8,VAR_13);

}
