
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inotify_event {int mask; } ;
typedef int gboolean ;
struct TYPE_3__ {int mask; } ;
typedef TYPE_1__ EventInfo ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) inline static gboolean
FUNC_0 (EventInfo *VAR_2, struct inotify_event *VAR_3)
{
    return ((VAR_2->mask & VAR_1) && (VAR_3->mask & VAR_0));
}
