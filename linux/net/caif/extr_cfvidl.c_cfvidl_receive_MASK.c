
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cfpkt {int dummy; } ;
struct cflayer {TYPE_1__* up; } ;
struct TYPE_2__ {int (* receive ) (TYPE_1__*,struct cfpkt*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct cfpkt*) ;
 scalar_t__ FUNC_1 (struct cfpkt*,int *,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,struct cfpkt*) ;

__attribute__((used)) static int FUNC_4(struct cflayer *VAR_1, struct cfpkt *VAR_2)
{
 u32 VAR_3;
 if (FUNC_1(VAR_2, &VAR_3, 4) < 0) {
  FUNC_2("Packet is erroneous!\n");
  FUNC_0(VAR_2);
  return -VAR_0;
 }
 return VAR_1->up->receive(VAR_1->up, VAR_2);
}
