
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int char_width; int char_height; } ;
struct TYPE_6__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_7__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_8__ {TYPE_1__ lr; TYPE_2__ ul; } ;
typedef TYPE_3__ PhRect_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__ VAR_5 ;

void
FUNC_4(int VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
    PhRect_t VAR_10;

    VAR_10.ul.x = FUNC_0(VAR_7);
    VAR_10.ul.y = FUNC_1(VAR_6);


    VAR_10.lr.x = VAR_10.ul.x + VAR_9 * VAR_5.char_width;
    VAR_10.lr.y = VAR_10.ul.y + VAR_8 * VAR_5.char_height;
    if (VAR_9 > 0)
 VAR_10.lr.x -= 1;
    if (VAR_8 > 0)
 VAR_10.lr.y -= 1;

    VAR_1;
    FUNC_3(VAR_3);
    FUNC_2(&VAR_10, VAR_2);
    FUNC_3(VAR_4);
    VAR_0;
}
