
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ s_net; scalar_t__ s_node; } ;
struct atalk_route {int flags; struct atalk_route* next; int dev; TYPE_1__ target; } ;
struct atalk_addr {scalar_t__ s_net; scalar_t__ s_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct atalk_route* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct atalk_route*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct atalk_addr *VAR_4)
{
 struct atalk_route **VAR_5 = &VAR_2;
 int VAR_6 = 0;
 struct atalk_route *VAR_7;

 FUNC_2(&VAR_3);
 while ((VAR_7 = *VAR_5) != ((void*)0)) {
  if (VAR_7->target.s_net == VAR_4->s_net &&
      (!(VAR_7->flags&VAR_1) ||
       VAR_7->target.s_node == VAR_4->s_node)) {
   *VAR_5 = VAR_7->next;
   FUNC_0(VAR_7->dev);
   FUNC_1(VAR_7);
   goto out;
  }
  VAR_5 = &VAR_7->next;
 }
 VAR_6 = -VAR_0;
out:
 FUNC_3(&VAR_3);
 return VAR_6;
}
