
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfpkt {int dummy; } ;
struct cflayer {TYPE_1__* up; } ;
struct TYPE_2__ {int (* receive ) (TYPE_1__*,struct cfpkt*) ;} ;


 int FUNC_0 (TYPE_1__*,struct cfpkt*) ;

__attribute__((used)) static int FUNC_1(struct cflayer *VAR_0, struct cfpkt *VAR_1)
{
 return VAR_0->up->receive(VAR_0->up, VAR_1);
}
