
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct mtpav_port {int mode; scalar_t__ output; } ;
struct mtpav {int num_ports; int spinlock; struct mtpav_port* ports; int timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mtpav* VAR_2 ;
 struct mtpav* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct mtpav*,struct mtpav_port*,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_5)
{
 unsigned long VAR_6;
 struct mtpav *VAR_7 = FUNC_0(VAR_7, VAR_5, VAR_4);
 int VAR_8;

 FUNC_3(&VAR_7->spinlock, VAR_6);

 FUNC_1(&VAR_7->timer, 1 + VAR_3);

 for (VAR_8 = 0; VAR_8 <= VAR_7->num_ports * 2 + VAR_1; VAR_8++) {
  struct mtpav_port *VAR_9 = &VAR_7->ports[VAR_8];
  if ((VAR_9->mode & VAR_0) && VAR_9->output)
   FUNC_2(VAR_7, VAR_9, VAR_9->output);
 }
 FUNC_4(&VAR_7->spinlock, VAR_6);
}
