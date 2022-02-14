
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_7__ {int bmHeight; int bmWidth; } ;
struct TYPE_6__ {int cySource; int cxSource; int * hBitmap; } ;
typedef TYPE_1__* PIMGINFO ;
typedef TYPE_2__ BITMAP ;


 int FUNC_0 (int *,int,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int VAR_3 ;

__attribute__((used)) static VOID
FUNC_4(PIMGINFO VAR_4)
{
    BITMAP VAR_5;

    FUNC_3(VAR_4, sizeof(*VAR_4));

    VAR_4->hBitmap = FUNC_1(VAR_3,
                                 FUNC_2(VAR_0),
                                 VAR_1,
                                 0,
                                 0,
                                 VAR_2);

    if (VAR_4->hBitmap != ((void*)0))
    {
        FUNC_0(VAR_4->hBitmap, sizeof(BITMAP), &VAR_5);

        VAR_4->cxSource = VAR_5.bmWidth;
        VAR_4->cySource = VAR_5.bmHeight;
    }
}
