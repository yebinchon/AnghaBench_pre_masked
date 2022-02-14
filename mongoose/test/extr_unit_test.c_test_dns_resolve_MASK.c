
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_mgr_init_opts {char* nameserver; } ;
struct mg_mgr {int dummy; } ;
typedef int opts ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mg_mgr_init_opts*,int ,int) ;
 int FUNC_2 (struct mg_mgr*) ;
 int FUNC_3 (struct mg_mgr*,int *) ;
 int FUNC_4 (struct mg_mgr*,int *,struct mg_mgr_init_opts) ;
 int FUNC_5 (struct mg_mgr*,char*,int ,int ,int*) ;
 int FUNC_6 (struct mg_mgr*,char*) ;
 int FUNC_7 (struct mg_mgr*,int,int ,int*,void*) ;

__attribute__((used)) static const char *FUNC_8(void) {
  struct mg_mgr VAR_3;
  struct mg_mgr_init_opts VAR_4;

  int VAR_5 = 0;

  FUNC_3(&VAR_3, ((void*)0));


  FUNC_5(&VAR_3, "dns.msftncsi.com", VAR_0, VAR_2,
                   &VAR_5);

  FUNC_7(&VAR_3, 1, VAR_1, &VAR_5, (void *) 0);
  FUNC_0(VAR_5, 1);

  FUNC_2(&VAR_3);

  VAR_5 = 0;
  FUNC_1(&VAR_4, 0, sizeof(VAR_4));
  VAR_4.nameserver = "8.8.4.4";
  FUNC_4(&VAR_3, ((void*)0), VAR_4);


  FUNC_5(&VAR_3, "dns.msftncsi.com", VAR_0, VAR_2,
                   &VAR_5);

  FUNC_7(&VAR_3, 1, VAR_1, &VAR_5, (void *) 0);
  FUNC_0(VAR_5, 1);

  FUNC_2(&VAR_3);

  VAR_5 = 0;
  FUNC_3(&VAR_3, ((void*)0));
  FUNC_6(&VAR_3, "8.8.4.4");


  FUNC_5(&VAR_3, "dns.msftncsi.com", VAR_0, VAR_2,
                   &VAR_5);

  FUNC_7(&VAR_3, 1, VAR_1, &VAR_5, (void *) 0);
  FUNC_0(VAR_5, 1);

  FUNC_2(&VAR_3);

  return ((void*)0);
}
