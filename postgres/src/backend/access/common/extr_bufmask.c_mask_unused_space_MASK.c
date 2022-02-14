
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pd_lower; int pd_upper; int pd_special; } ;
typedef TYPE_1__* PageHeader ;
typedef scalar_t__ Page ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (scalar_t__,int ,int) ;

void
FUNC_2(Page VAR_4)
{
 int VAR_5 = ((PageHeader) VAR_4)->pd_lower;
 int VAR_6 = ((PageHeader) VAR_4)->pd_upper;
 int VAR_7 = ((PageHeader) VAR_4)->pd_special;


 if (VAR_5 > VAR_6 || VAR_7 < VAR_6 ||
  VAR_5 < VAR_3 || VAR_7 > VAR_0)
 {
  FUNC_0(VAR_1, "invalid page pd_lower %u pd_upper %u pd_special %u\n",
    VAR_5, VAR_6, VAR_7);
 }

 FUNC_1(VAR_4 + VAR_5, VAR_2, VAR_6 - VAR_5);
}
