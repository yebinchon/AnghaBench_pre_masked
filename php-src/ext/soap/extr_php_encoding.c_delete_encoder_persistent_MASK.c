
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef TYPE_2__* encodePtr ;
struct TYPE_5__ {int * map; TYPE_2__* type_str; TYPE_2__* ns; } ;
struct TYPE_6__ {TYPE_1__ details; } ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(zval *VAR_0)
{
 encodePtr VAR_1 = FUNC_0(VAR_0);
 if (VAR_1->details.ns) {
  FUNC_2(VAR_1->details.ns);
 }
 if (VAR_1->details.type_str) {
  FUNC_2(VAR_1->details.type_str);
 }

 FUNC_1(VAR_1->details.map == ((void*)0));
 FUNC_2(VAR_1);
}
