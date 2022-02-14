
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int k; TYPE_3__* u; } ;
typedef TYPE_2__ dictkv ;
struct TYPE_7__ {TYPE_1__* handler; } ;
struct TYPE_5__ {scalar_t__ name; } ;
typedef TYPE_3__ RAnalEsilInterrupt ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(dictkv* VAR_1, void* VAR_2) {
 RAnalEsilInterrupt* VAR_3 = VAR_1->u;
 FUNC_0 ("%3x: %s\n", VAR_1->k, VAR_3->handler->name ? VAR_3->handler->name : VAR_0);
 return 0;
}
