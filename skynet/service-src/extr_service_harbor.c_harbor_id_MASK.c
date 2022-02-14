
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slave {int fd; } ;
struct harbor {struct slave* s; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct harbor *VAR_1, int VAR_2) {
 int VAR_3;
 for (VAR_3=1;VAR_3<VAR_0;VAR_3++) {
  struct slave *VAR_4 = &VAR_1->s[VAR_3];
  if (VAR_4->fd == VAR_2) {
   return VAR_3;
  }
 }
 return 0;
}
