
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nFlags; scalar_t__ nWidth; int nDescent; int nAscent; int len; } ;
struct TYPE_6__ {scalar_t__ cx; } ;
typedef TYPE_1__ SIZE ;
typedef TYPE_2__ ME_Run ;
typedef int ME_Paragraph ;
typedef int ME_Context ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (int *,int const*,TYPE_2__*,int ,int,int *,int *) ;

__attribute__((used)) static void FUNC_1(ME_Context *VAR_1, const ME_Paragraph *VAR_2, int VAR_3, ME_Run *VAR_4)
{
    if (VAR_4->nFlags & VAR_0) VAR_4->nWidth = 0;
    else
    {
        SIZE VAR_5 = FUNC_0( VAR_1, VAR_2, VAR_4, VAR_4->len, VAR_3, &VAR_4->nAscent, &VAR_4->nDescent );
        VAR_4->nWidth = VAR_5.cx;
    }
}
