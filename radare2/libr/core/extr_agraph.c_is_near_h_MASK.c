
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; int y; } ;
typedef TYPE_1__ RANode ;



__attribute__((used)) static int FUNC_0(const RANode *VAR_0, int VAR_1, int VAR_2, int VAR_3) {
 if (VAR_3) {
  return (VAR_0->x == VAR_1 && VAR_0->y > VAR_2) || VAR_0->x > VAR_1;
 }
 return (VAR_0->x == VAR_1 && VAR_0->y < VAR_2) || VAR_0->x < VAR_1;
}
