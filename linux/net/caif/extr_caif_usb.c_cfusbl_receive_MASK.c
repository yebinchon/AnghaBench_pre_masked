
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct cfpkt {int dummy; } ;
struct cflayer {TYPE_1__* up; } ;
struct TYPE_2__ {int (* receive ) (TYPE_1__*,struct cfpkt*) ;} ;


 int FUNC_0 (struct cfpkt*,int*,int) ;
 int FUNC_1 (TYPE_1__*,struct cfpkt*) ;

__attribute__((used)) static int FUNC_2(struct cflayer *VAR_0, struct cfpkt *VAR_1)
{
 u8 VAR_2;


 FUNC_0(VAR_1, &VAR_2, 1);
 FUNC_0(VAR_1, ((void*)0), VAR_2);
 return VAR_0->up->receive(VAR_0->up, VAR_1);
}
