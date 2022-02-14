
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ filter_change_timeout; } ;
typedef scalar_t__ INT ;
typedef TYPE_1__ HEADER_INFO ;



__attribute__((used)) static INT FUNC_0(HEADER_INFO *VAR_0, INT VAR_1)
{
    INT VAR_2 = VAR_0->filter_change_timeout;

    if (VAR_1 != 0)
        VAR_0->filter_change_timeout = VAR_1;
    return VAR_2;
}
