
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * prev_marked; int next_marked; int nFlags; int fmt; } ;
struct TYPE_7__ {TYPE_1__ para; } ;
struct TYPE_8__ {TYPE_2__ member; } ;
typedef int ME_TextEditor ;
typedef TYPE_3__ ME_DisplayItem ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static ME_DisplayItem *FUNC_2(ME_TextEditor *VAR_2)
{
    ME_DisplayItem *VAR_3 = FUNC_0(VAR_1);

    FUNC_1(VAR_2, &VAR_3->member.para.fmt);
    VAR_3->member.para.nFlags = VAR_0;
    VAR_3->member.para.next_marked = *(VAR_3->member.para.prev_marked = ((void*)0));

    return VAR_3;
}
