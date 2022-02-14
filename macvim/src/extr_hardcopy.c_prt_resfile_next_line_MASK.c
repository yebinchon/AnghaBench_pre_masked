
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int line_end; int len; scalar_t__* buffer; int line_start; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int
FUNC_0()
{
    int VAR_3;


    VAR_3 = VAR_2.line_end + 1;
    while (VAR_3 < VAR_2.len)
    {
 if (VAR_2.buffer[VAR_3] != VAR_1 && VAR_2.buffer[VAR_3] != VAR_0)
     break;
 VAR_3++;
    }
    VAR_2.line_start = VAR_3;

    while (VAR_3 < VAR_2.len)
    {
 if (VAR_2.buffer[VAR_3] == VAR_1 || VAR_2.buffer[VAR_3] == VAR_0)
     break;
 VAR_3++;
    }
    VAR_2.line_end = VAR_3;

    return (VAR_3 < VAR_2.len);
}
