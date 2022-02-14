
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slave {scalar_t__ status; scalar_t__ fd; } ;
struct harbor {int map; struct slave* s; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct harbor*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct harbor*) ;

void
FUNC_3(struct harbor *VAR_2) {
 int VAR_3;
 for (VAR_3=1;VAR_3<VAR_0;VAR_3++) {
  struct slave *VAR_4 = &VAR_2->s[VAR_3];
  if (VAR_4->fd && VAR_4->status != VAR_1) {
   FUNC_0(VAR_2,VAR_3);


  }
 }
 FUNC_1(VAR_2->map);
 FUNC_2(VAR_2);
}
