
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sort; scalar_t__ case_sensitive; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static char * FUNC_0 ( void )
{
    if ( VAR_0.case_sensitive ) {
        if ( VAR_0.sort ) {
            return "±";
        }
        else {
            return "-";
        }
    }
    else{
        if ( VAR_0.sort ) {
            return "+";
        }
    }
    return " ";
}
