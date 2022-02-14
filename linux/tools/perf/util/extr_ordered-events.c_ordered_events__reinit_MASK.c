
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ordered_events {int data; int deliver; } ;
typedef int ordered_events__deliver_t ;


 int FUNC_0 (struct ordered_events*,char,int) ;
 int FUNC_1 (struct ordered_events*) ;
 int FUNC_2 (struct ordered_events*,int ,int ) ;

void FUNC_3(struct ordered_events *VAR_0)
{
 ordered_events__deliver_t VAR_1 = VAR_0->deliver;

 FUNC_1(VAR_0);
 FUNC_0(VAR_0, '\0', sizeof(*VAR_0));
 FUNC_2(VAR_0, VAR_1, VAR_0->data);
}
