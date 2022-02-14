
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int end; int start; } ;
struct sk_msg {TYPE_1__ sg; } ;



__attribute__((used)) static bool FUNC_0(struct sk_msg *VAR_0, int VAR_1)
{
 if (VAR_0->sg.end > VAR_0->sg.start &&
     VAR_1 < VAR_0->sg.end)
  return 1;

 if (VAR_0->sg.end < VAR_0->sg.start &&
     (VAR_1 > VAR_0->sg.start ||
      VAR_1 < VAR_0->sg.end))
  return 1;

 return 0;
}
