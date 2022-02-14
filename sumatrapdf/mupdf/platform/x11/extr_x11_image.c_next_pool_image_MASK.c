
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int XImage ;
struct TYPE_2__ {scalar_t__ lastused; int ** pool; int display; scalar_t__ useshm; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static XImage *
FUNC_2(void)
{
 if (VAR_2.lastused + 1 >= VAR_1) {
  if (VAR_2.useshm)
   FUNC_1(VAR_2.display, VAR_0);
  else
   FUNC_0(VAR_2.display);
  VAR_2.lastused = 0;
 }
 return VAR_2.pool[VAR_2.lastused ++];
}
