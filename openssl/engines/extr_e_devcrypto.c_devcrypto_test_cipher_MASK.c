
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ status; scalar_t__ accelerated; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int* VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_0(size_t VAR_8)
{
    return (VAR_5[VAR_8].status == VAR_3
            && VAR_6[VAR_8] == 1
            && (VAR_5[VAR_8].accelerated
                    == VAR_0
                || VAR_7 == VAR_4
                || (VAR_5[VAR_8].accelerated
                        != VAR_1
                    && VAR_7 == VAR_2)));
}
