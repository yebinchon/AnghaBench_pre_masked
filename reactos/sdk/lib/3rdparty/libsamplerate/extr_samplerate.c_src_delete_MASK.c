
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* private_data; } ;
typedef int SRC_STATE ;
typedef TYPE_1__ SRC_PRIVATE ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

SRC_STATE *
FUNC_2 (SRC_STATE *VAR_0)
{ SRC_PRIVATE *VAR_1 ;

 VAR_1 = (SRC_PRIVATE*) VAR_0 ;
 if (VAR_1)
 { if (VAR_1->private_data)
   FUNC_0 (VAR_1->private_data) ;
  FUNC_1 (VAR_1, 0, sizeof (SRC_PRIVATE)) ;
  FUNC_0 (VAR_1) ;
  } ;

 return ((void*)0) ;
}
