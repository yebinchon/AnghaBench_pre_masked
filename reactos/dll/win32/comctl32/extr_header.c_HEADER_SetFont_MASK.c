
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ WORD ;
struct TYPE_6__ {int hwndSelf; int bRectsValid; scalar_t__ nHeight; scalar_t__ hFont; } ;
struct TYPE_5__ {scalar_t__ tmHeight; } ;
typedef TYPE_1__ TEXTMETRICW ;
typedef int LRESULT ;
typedef scalar_t__ HFONT ;
typedef TYPE_2__ HEADER_INFO ;
typedef int HDC ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static LRESULT
FUNC_6 (HEADER_INFO *VAR_3, HFONT VAR_4, WORD VAR_5)
{
    TEXTMETRICW VAR_6;
    HFONT VAR_7;
    HDC VAR_8;

    VAR_3->hFont = VAR_4;

    VAR_8 = FUNC_0 (0);
    VAR_7 = FUNC_5 (VAR_8, VAR_3->hFont ? VAR_3->hFont : FUNC_1 (VAR_1));
    FUNC_2 (VAR_8, &VAR_6);
    VAR_3->nHeight = VAR_6.tmHeight + VAR_2;
    FUNC_5 (VAR_8, VAR_7);
    FUNC_4 (0, VAR_8);

    VAR_3->bRectsValid = VAR_0;

    if (VAR_5) {
        FUNC_3(VAR_3->hwndSelf, ((void*)0), VAR_0);
    }

    return 0;
}
