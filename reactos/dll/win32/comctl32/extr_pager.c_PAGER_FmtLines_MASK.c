
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hwndSelf; int nHeight; int nWidth; int hwndChild; } ;
typedef TYPE_1__ PAGER_INFO ;
typedef int LRESULT ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int) ;

__attribute__((used)) static LRESULT
FUNC_2(const PAGER_INFO *VAR_6)
{

    FUNC_1(VAR_6->hwndSelf, 0, 0, 0, 0, 0,
   VAR_1 | VAR_4 | VAR_3 |
   VAR_5 | VAR_2);

    FUNC_1(VAR_6->hwndChild, 0,
   0,0,VAR_6->nWidth,VAR_6->nHeight,
   0);

    return FUNC_0 (VAR_6->hwndSelf, VAR_0, 0, 0);
}
