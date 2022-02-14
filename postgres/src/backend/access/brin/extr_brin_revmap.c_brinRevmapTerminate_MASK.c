
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rm_metaBuf; scalar_t__ rm_currBuf; } ;
typedef TYPE_1__ BrinRevmap ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(BrinRevmap *VAR_1)
{
 FUNC_0(VAR_1->rm_metaBuf);
 if (VAR_1->rm_currBuf != VAR_0)
  FUNC_0(VAR_1->rm_currBuf);
 FUNC_1(VAR_1);
}
