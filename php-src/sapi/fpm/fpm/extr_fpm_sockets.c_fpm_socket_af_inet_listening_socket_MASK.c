
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fpm_worker_pool_s {TYPE_1__* config; } ;
struct TYPE_2__ {int listen_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct fpm_worker_pool_s*,char*,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct fpm_worker_pool_s *VAR_3)
{
 char *VAR_4 = FUNC_3(VAR_3->config->listen_address);
 char *VAR_5 = FUNC_5(VAR_4, ':');
 char *VAR_6 = ((void*)0);
 int VAR_7;
 int VAR_8 = 0;
 int VAR_9 = -1;

 if (VAR_5) {
  *VAR_5++ = '\0';
  VAR_8 = FUNC_0(VAR_5);
  VAR_6 = VAR_4;


  VAR_7 = FUNC_4(VAR_6);
  if (VAR_6[0] == '[' && VAR_6[VAR_7 - 1] == ']') {
   VAR_6[VAR_7 - 1] = '\0';
   VAR_6++;
  }

 } else if (FUNC_4(VAR_4) == FUNC_6(VAR_4, "0123456789")) {
  VAR_8 = FUNC_0(VAR_4);
  VAR_5 = VAR_4;
 }

 if (VAR_8 == 0) {
  FUNC_7(VAR_1, "invalid port value '%s'", VAR_5);
  return -1;
 }

 if (VAR_6) {

  VAR_9 = FUNC_1(VAR_3, VAR_6, VAR_5);
 } else {







  int VAR_10 = FUNC_8(VAR_0);
  VAR_9 = FUNC_1(VAR_3, "::", VAR_5);
  FUNC_8(VAR_10);

  if (VAR_9 < 0) {
   FUNC_7(VAR_2, "Failed implicitly binding to ::, retrying with 0.0.0.0");
   VAR_9 = FUNC_1(VAR_3, "0.0.0.0", VAR_5);
  }
 }

 FUNC_2(VAR_4);

 return VAR_9;
}
