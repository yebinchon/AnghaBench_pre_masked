
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int right; scalar_t__ bottom; scalar_t__ top; scalar_t__ left; } ;
struct TYPE_9__ {int cx; scalar_t__ cy; } ;
struct TYPE_8__ {int Self; int Font; } ;
typedef TYPE_1__ SYSLINK_INFO ;
typedef TYPE_2__ SIZE ;
typedef TYPE_3__ RECT ;
typedef scalar_t__ LONG ;
typedef int HGDIOBJ ;
typedef int * HDC ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__ const*,int *,TYPE_3__*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static LONG FUNC_4 (const SYSLINK_INFO *VAR_0, int VAR_1, SIZE *VAR_2)
{
    RECT VAR_3;
    HDC VAR_4;

    VAR_3.left = VAR_3.top = VAR_3.bottom = 0;
    VAR_3.right = VAR_1;

    VAR_4 = FUNC_0(VAR_0->Self);
    if (VAR_4 != ((void*)0))
    {
        HGDIOBJ VAR_5 = FUNC_3(VAR_4, VAR_0->Font);

        FUNC_2(VAR_0, VAR_4, &VAR_3);

        FUNC_3(VAR_4, VAR_5);
        FUNC_1(VAR_0->Self, VAR_4);

        VAR_2->cx = VAR_3.right;
        VAR_2->cy = VAR_3.bottom;
    }

    return VAR_3.bottom;
}
