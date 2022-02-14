
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nFlags; } ;
struct TYPE_7__ {TYPE_1__ para; } ;
struct TYPE_8__ {TYPE_2__ member; } ;
typedef int ME_TextEditor ;
typedef TYPE_3__ ME_DisplayItem ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_3__*) ;

void FUNC_1(ME_TextEditor *VAR_1, ME_DisplayItem *VAR_2)
{
    VAR_2->member.para.nFlags |= VAR_0;
    FUNC_0(VAR_1, VAR_2);
}
