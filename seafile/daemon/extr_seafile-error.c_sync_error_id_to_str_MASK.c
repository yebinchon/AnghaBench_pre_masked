
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* err_str; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 TYPE_1__* VAR_1 ;

const char *
FUNC_1 (int VAR_2)
{
    FUNC_0 ((VAR_2 >= 0 && VAR_2 < VAR_0), "Unknown error");

    return VAR_1[VAR_2].err_str;
}
