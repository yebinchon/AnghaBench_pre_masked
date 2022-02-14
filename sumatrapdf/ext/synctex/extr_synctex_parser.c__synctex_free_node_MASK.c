
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_2__* synctex_node_t ;
struct TYPE_10__ {TYPE_1__* class; } ;
struct TYPE_9__ {int (* sibling ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5(synctex_node_t VAR_0) {

 synctex_node_t VAR_1;
 while (VAR_0) {
  (*((VAR_0->class)->sibling))(VAR_0);
  VAR_1 = FUNC_2(VAR_0);
  FUNC_1(FUNC_0(VAR_0));
  FUNC_3(VAR_0);
  VAR_0 = VAR_1;
 }
 return;
}
