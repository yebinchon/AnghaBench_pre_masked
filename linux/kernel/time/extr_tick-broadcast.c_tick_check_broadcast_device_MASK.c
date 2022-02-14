
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clock_event_device {int features; scalar_t__ rating; } ;
struct TYPE_2__ {scalar_t__ mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static bool FUNC_0(struct clock_event_device *VAR_6,
     struct clock_event_device *VAR_7)
{
 if ((VAR_7->features & VAR_1) ||
     (VAR_7->features & VAR_3) ||
     (VAR_7->features & VAR_0))
  return 0;

 if (VAR_5.mode == VAR_4 &&
     !(VAR_7->features & VAR_2))
  return 0;

 return !VAR_6 || VAR_7->rating > VAR_6->rating;
}
