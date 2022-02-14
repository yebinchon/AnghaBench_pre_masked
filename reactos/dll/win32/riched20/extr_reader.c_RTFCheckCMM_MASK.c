
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rtfClass; int rtfMajor; int rtfMinor; } ;
typedef TYPE_1__ RTF_Info ;



int FUNC_0(const RTF_Info *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 return (VAR_0->rtfClass == VAR_1 && VAR_0->rtfMajor == VAR_2 && VAR_0->rtfMinor == VAR_3);
}
