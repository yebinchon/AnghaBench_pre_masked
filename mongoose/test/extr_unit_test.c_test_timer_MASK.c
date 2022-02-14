
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_mgr {int dummy; } ;
struct mg_connection {int* user_data; int ev_timer_time; int flags; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (double,double) ;
 int FUNC_3 (double,double) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mg_connection* FUNC_4 (struct mg_mgr*,int ,int ) ;
 struct mg_connection* FUNC_5 (struct mg_mgr*,char*,int ) ;
 int FUNC_6 (struct mg_mgr*) ;
 int FUNC_7 (struct mg_mgr*,int *) ;
 int FUNC_8 (struct mg_mgr*,int) ;
 int FUNC_9 (struct mg_connection*,int) ;
 double FUNC_10 () ;
 int FUNC_11 (struct mg_mgr*,int,int ,int*,void*) ;

__attribute__((used)) static const char *FUNC_12(void) {
  struct mg_mgr VAR_4;
  struct mg_connection *VAR_5;
  double VAR_6, VAR_7;
  int VAR_8 = 0, VAR_9;

  FUNC_7(&VAR_4, ((void*)0));
  FUNC_0((VAR_5 = FUNC_4(&VAR_4, VAR_0, VAR_3)) != ((void*)0));
  VAR_5->user_data = &VAR_8;


  FUNC_8(&VAR_4, 1);
  FUNC_1(VAR_8, 0);





  FUNC_1(FUNC_9(VAR_5, FUNC_10() + 0.1), 0.0);
  VAR_6 = FUNC_10();




  for (VAR_9 = 0; VAR_8 != 1 && VAR_9 < 5; VAR_9++) {
    FUNC_8(&VAR_4, 1000);
  }
  VAR_7 = FUNC_10();
  FUNC_1(VAR_8, 1);
  FUNC_3(VAR_7 - VAR_6, 0.9);
  FUNC_2(VAR_7 - VAR_6, 0.09);


  FUNC_1(VAR_5->ev_timer_time, 0.0);
  FUNC_8(&VAR_4, 1);
  FUNC_1(VAR_8, 1);

  VAR_5->flags |= VAR_1;
  FUNC_8(&VAR_4, 1);
  FUNC_1(VAR_8, 101);


  VAR_8 = 0;
  FUNC_0((VAR_5 = FUNC_5(&VAR_4, "awful.sad:1234", VAR_3)) != ((void*)0));
  VAR_5->user_data = &VAR_8;
  FUNC_9(VAR_5, 1);
  FUNC_11(&VAR_4, 1, VAR_2, &VAR_8, (void *) 101);
  FUNC_1(VAR_8, 101);

  FUNC_6(&VAR_4);

  return ((void*)0);
}
