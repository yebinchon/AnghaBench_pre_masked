
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdspm {int midiPorts; TYPE_1__* midi; } ;
struct TYPE_2__ {scalar_t__ pending; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_0)
{
 struct hdspm *VAR_1 = (struct hdspm *)VAR_0;
 int VAR_2 = 0;

 while (VAR_2 < VAR_1->midiPorts) {
  if (VAR_1->midi[VAR_2].pending)
   FUNC_0(&VAR_1->midi[VAR_2]);

  VAR_2++;
 }
}
