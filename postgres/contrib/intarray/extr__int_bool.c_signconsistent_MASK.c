
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ size; } ;
typedef TYPE_1__ QUERYTYPE ;
typedef scalar_t__ BITVEC ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,void*,int,int ) ;

bool
FUNC_2(QUERYTYPE *VAR_1, BITVEC VAR_2, bool VAR_3)
{
 return FUNC_1(FUNC_0(VAR_1) + VAR_1->size - 1,
       (void *) VAR_2, VAR_3,
       VAR_0);
}
