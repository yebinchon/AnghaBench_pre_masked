
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int top; int left; } ;
struct TYPE_5__ {int face_bmp; TYPE_1__ face_rect; int hFacesBMP; } ;
typedef int HGDIOBJ ;
typedef int HDC ;
typedef TYPE_2__ BOARD ;


 int FUNC_0 (int ,int ,int ,int ,int,int ,int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2( HDC VAR_3, HDC VAR_4, BOARD *VAR_5 )
{
    HGDIOBJ VAR_6;

    VAR_6 = FUNC_1 (VAR_4, VAR_5->hFacesBMP);

    FUNC_0( VAR_3,
        VAR_5->face_rect.left,
        VAR_5->face_rect.top,
        VAR_1,
        VAR_0,
        VAR_4, 0, VAR_5->face_bmp * VAR_0, VAR_2);

    FUNC_1( VAR_4, VAR_6 );
}
