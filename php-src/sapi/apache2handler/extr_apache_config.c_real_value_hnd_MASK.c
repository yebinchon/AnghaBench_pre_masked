
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int status; int htaccess; int value_len; int value; } ;
typedef TYPE_1__ php_dir_entry ;
struct TYPE_7__ {int config; } ;
typedef TYPE_2__ php_conf_rec ;
typedef int e ;
struct TYPE_8__ {int override; int pool; } ;
typedef TYPE_3__ cmd_parms ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int ,TYPE_1__*,int) ;

__attribute__((used)) static const char *FUNC_6(cmd_parms *VAR_3, void *VAR_4, const char *VAR_5, const char *VAR_6, int VAR_7)
{
 php_conf_rec *VAR_8 = VAR_4;
 php_dir_entry VAR_9;

 FUNC_1((VAR_2, "Getting %s=%s for %p (%d)\n", VAR_5, VAR_6, VAR_4, FUNC_4(&VAR_8->config)));

 if (!FUNC_3(VAR_6, "none", sizeof("none"))) {
  VAR_6 = "";
 }

 VAR_9.value = FUNC_0(VAR_3->pool, VAR_6);
 VAR_9.value_len = FUNC_2(VAR_6);
 VAR_9.status = VAR_7;
 VAR_9.htaccess = ((VAR_3->override & (VAR_1|VAR_0)) == 0);

 FUNC_5(&VAR_8->config, (char *) VAR_5, FUNC_2(VAR_5), &VAR_9, sizeof(VAR_9));
 return ((void*)0);
}
