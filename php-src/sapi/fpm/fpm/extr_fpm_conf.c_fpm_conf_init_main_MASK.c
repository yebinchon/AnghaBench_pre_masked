
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* pid_file; } ;
struct TYPE_3__ {char* pid; int test_successful; scalar_t__* config; scalar_t__* prefix; } ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (scalar_t__*) ;
 scalar_t__ FUNC_5 (int) ;
 TYPE_2__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_6 (char**,int ,char*,scalar_t__*) ;
 void* FUNC_7 (char*) ;
 int FUNC_8 (int ,char*,...) ;

int FUNC_9(int VAR_8, int VAR_9)
{
 int VAR_10;

 if (VAR_7.prefix && *VAR_7.prefix) {
  if (!FUNC_3(VAR_7.prefix)) {
   FUNC_8(VAR_2, "the global prefix '%s' does not exist or is not a directory", VAR_7.prefix);
   return -1;
  }
 }

 if (VAR_7.pid && *VAR_7.pid) {
  VAR_6.pid_file = FUNC_7(VAR_7.pid);
 }

 if (VAR_7.config == ((void*)0)) {
  char *VAR_11;

  if (VAR_7.prefix == ((void*)0)) {
   FUNC_6(&VAR_11, 0, "%s/php-fpm.conf", VAR_1);
  } else {
   FUNC_6(&VAR_11, 0, "%s/etc/php-fpm.conf", VAR_7.prefix);
  }

  if (!VAR_11) {
   FUNC_8(VAR_4, "spprintf() failed (tmp for fpm_globals.config)");
   return -1;
  }

  VAR_7.config = FUNC_7(VAR_11);
  FUNC_0(VAR_11);

  if (!VAR_7.config) {
   FUNC_8(VAR_4, "spprintf() failed (fpm_globals.config)");
   return -1;
  }
 }

 VAR_10 = FUNC_4(VAR_7.config);

 if (0 > VAR_10) {
  FUNC_8(VAR_2, "failed to load configuration file '%s'", VAR_7.config);
  return -1;
 }

 if (0 > FUNC_5(VAR_9)) {
  FUNC_8(VAR_2, "failed to post process the configuration");
  return -1;
 }

 if (VAR_8) {
  if (VAR_8 > 1) {
   FUNC_2();
  }
  FUNC_8(VAR_3, "configuration file %s test is successful\n", VAR_7.config);
  VAR_7.test_successful = 1;
  return -1;
 }

 if (0 > FUNC_1(VAR_0, VAR_5, 0)) {
  return -1;
 }

 return 0;
}
