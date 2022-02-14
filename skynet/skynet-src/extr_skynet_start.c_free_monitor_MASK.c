
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct monitor {int count; struct monitor* m; int cond; int mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct monitor*) ;
 int FUNC_3 (struct monitor) ;

__attribute__((used)) static void
FUNC_4(struct monitor *VAR_0) {
 int VAR_1;
 int VAR_2 = VAR_0->count;
 for (VAR_1=0;VAR_1<VAR_2;VAR_1++) {
  FUNC_3(VAR_0->m[VAR_1]);
 }
 FUNC_1(&VAR_0->mutex);
 FUNC_0(&VAR_0->cond);
 FUNC_2(VAR_0->m);
 FUNC_2(VAR_0);
}
