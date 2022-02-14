
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {scalar_t__ broadcast; int name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_1(struct clock_event_device *VAR_2)
{
 if (!VAR_2->broadcast)
  VAR_2->broadcast = VAR_1;
 if (!VAR_2->broadcast) {
  FUNC_0("%s depends on broadcast, but no broadcast function available\n",
        VAR_2->name);
  VAR_2->broadcast = VAR_0;
 }
}
