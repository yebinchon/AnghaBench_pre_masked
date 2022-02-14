
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* tools; } ;
struct TYPE_9__ {scalar_t__ cbSize; int rect; } ;
struct TYPE_8__ {int rect; } ;
typedef TYPE_2__ TTTOOLINFOW ;
typedef TYPE_3__ TOOLTIPS_INFO ;
typedef int LRESULT ;
typedef int INT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__ const*) ;
 int FUNC_1 (char*,int,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static LRESULT
FUNC_3 (TOOLTIPS_INFO *VAR_2, const TTTOOLINFOW *VAR_3)
{
    INT VAR_4;

    if (!VAR_3) return 0;
    if (VAR_3->cbSize < VAR_1)
 return VAR_0;

    VAR_4 = FUNC_0 (VAR_2, VAR_3);

    FUNC_1("nTool = %d, rect = %s\n", VAR_4, FUNC_2(&VAR_3->rect));

    if (VAR_4 == -1) return 0;

    VAR_2->tools[VAR_4].rect = VAR_3->rect;

    return 0;
}
