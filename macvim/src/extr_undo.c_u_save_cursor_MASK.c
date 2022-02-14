
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int linenr_T ;
struct TYPE_3__ {int lnum; } ;
struct TYPE_4__ {TYPE_1__ w_cursor; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ,int ) ;

int
FUNC_1()
{
    return (FUNC_0((linenr_T)(VAR_0->w_cursor.lnum - 1),
          (linenr_T)(VAR_0->w_cursor.lnum + 1)));
}
