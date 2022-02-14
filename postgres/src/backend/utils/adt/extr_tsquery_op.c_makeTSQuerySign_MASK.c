
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ valcrc; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_1__ qoperand; } ;
struct TYPE_8__ {int size; } ;
typedef unsigned int TSQuerySign ;
typedef TYPE_2__* TSQuery ;
typedef TYPE_3__ QueryItem ;


 TYPE_3__* FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;

TSQuerySign
FUNC_1(TSQuery VAR_2)
{
 int VAR_3;
 QueryItem *VAR_4 = FUNC_0(VAR_2);
 TSQuerySign VAR_5 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_2->size; VAR_3++)
 {
  if (VAR_4->type == VAR_0)
   VAR_5 |= ((TSQuerySign) 1) << (((unsigned int) VAR_4->qoperand.valcrc) % VAR_1);
  VAR_4++;
 }

 return VAR_5;
}
