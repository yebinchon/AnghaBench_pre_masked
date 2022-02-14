
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_connection {double ev_timer_time; int flags; int * priv_2; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;

double FUNC_1(struct mg_connection *VAR_1, double VAR_2) {
  double VAR_3 = VAR_1->ev_timer_time;
  VAR_1->ev_timer_time = VAR_2;





  FUNC_0(("%p %p %d -> %lu", VAR_1, VAR_1->priv_2, (VAR_1->flags & VAR_0 ? 1 : 0),
       (unsigned long) VAR_2));
  if ((VAR_1->flags & VAR_0) && VAR_1->priv_2 != ((void*)0)) {
    FUNC_1((struct mg_connection *) VAR_1->priv_2, VAR_2);
  }
  return VAR_3;
}
