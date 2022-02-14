
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdsp {TYPE_1__* midi; } ;
struct TYPE_2__ {scalar_t__ pending; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_0)
{
 struct hdsp *VAR_1 = (struct hdsp *)VAR_0;

 if (VAR_1->midi[0].pending)
  FUNC_0 (&VAR_1->midi[0]);
 if (VAR_1->midi[1].pending)
  FUNC_0 (&VAR_1->midi[1]);
}
