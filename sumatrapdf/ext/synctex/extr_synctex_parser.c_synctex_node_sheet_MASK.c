
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* synctex_node_t ;
struct TYPE_8__ {TYPE_1__* class; } ;
struct TYPE_7__ {scalar_t__ type; } ;


 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;

synctex_node_t FUNC_1(synctex_node_t VAR_1)
{
 while(VAR_1 && VAR_1->class->type != VAR_0) {
  VAR_1 = FUNC_0(VAR_1);
 }

 return VAR_1;
}
