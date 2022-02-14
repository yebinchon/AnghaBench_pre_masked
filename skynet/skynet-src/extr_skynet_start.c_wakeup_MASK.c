
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct monitor {int sleep; int count; int cond; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct monitor *VAR_0, int VAR_1) {
 if (VAR_0->sleep >= VAR_0->count - VAR_1) {

  FUNC_0(&VAR_0->cond);
 }
}
