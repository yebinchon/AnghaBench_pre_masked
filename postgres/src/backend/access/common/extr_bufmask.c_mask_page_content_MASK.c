
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_2__ {int pd_upper; int pd_lower; } ;
typedef TYPE_1__* PageHeader ;
typedef scalar_t__ Page ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ,int) ;

void
FUNC_1(Page VAR_3)
{

 FUNC_0(VAR_3 + VAR_2, VAR_1,
     VAR_0 - VAR_2);


 FUNC_0(&((PageHeader) VAR_3)->pd_lower, VAR_1,
     sizeof(uint16));
 FUNC_0(&((PageHeader) VAR_3)->pd_upper, VAR_1,
     sizeof(uint16));
}
