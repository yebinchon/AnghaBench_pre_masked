
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ RegisNode ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static RegisNode *
FUNC_1(RegisNode *VAR_1, int VAR_2)
{
 RegisNode *VAR_3;

 VAR_3 = (RegisNode *) FUNC_0(VAR_0 + VAR_2 + 1);
 if (VAR_1)
  VAR_1->next = VAR_3;
 return VAR_3;
}
