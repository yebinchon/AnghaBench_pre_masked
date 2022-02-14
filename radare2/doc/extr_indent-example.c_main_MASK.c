
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int addr; } ;
struct TYPE_9__ {int offset; TYPE_1__* anal; } ;
struct TYPE_8__ {int esil; } ;


 TYPE_2__* VAR_0 ;
 TYPE_5__* VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_5__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int VAR_4 ;

int FUNC_4 (int VAR_5, char **VAR_6) {
 FUNC_0 (VAR_0->anal->esil, VAR_1 ? VAR_1->addr : VAR_0->offset);
 switch (*VAR_3) {
 case '\0':
 {
  VAR_4 = VAR_0->offset;
  FUNC_0 (VAR_0->anal->esil, VAR_1 ? VAR_1->addr : VAR_0->offset);
  FUNC_1 (VAR_0, VAR_1);
  FUNC_3 (VAR_0, VAR_4, 1);
  break;
 }
 case '?':
 default:
  FUNC_2 (VAR_0, VAR_2);
  break;
 }
 return 0;
}
