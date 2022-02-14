
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bytes_global; } ;
struct TYPE_5__ {struct TYPE_5__* data; TYPE_1__ p; } ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,int) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_2(void)
{
 FUNC_1(VAR_0->data, VAR_0->p.bytes_global);
 VAR_0->data = ((void*)0);

 FUNC_0();

 FUNC_1(VAR_0, sizeof(*VAR_0));
 VAR_0 = ((void*)0);
}
