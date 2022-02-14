
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct user_namespace {int dummy; } ;
struct TYPE_4__ {int len; char* data; } ;
struct gss_upcall_msg {char* databuf; TYPE_2__ msg; int uid; TYPE_1__* auth; } ;
struct gss_api_mech {int gm_upcall_enctypes; int gm_name; } ;
struct cred {struct user_namespace* user_ns; } ;
struct TYPE_3__ {struct gss_api_mech* mech; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct user_namespace*,int ) ;
 int FUNC_2 (char*,size_t,char*,...) ;
 char* FUNC_3 (char const*,char) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct gss_upcall_msg *VAR_1,
    const char *VAR_2,
    const char *VAR_3,
    const struct cred *VAR_4)
{
 struct user_namespace *VAR_5 = VAR_4->user_ns;
 struct gss_api_mech *VAR_6 = VAR_1->auth->mech;
 char *VAR_7 = VAR_1->databuf;
 size_t VAR_8 = sizeof(VAR_1->databuf);
 int VAR_9;

 VAR_9 = FUNC_2(VAR_7, VAR_8, "mech=%s uid=%d", VAR_6->gm_name,
   FUNC_1(VAR_5, VAR_1->uid));
 VAR_8 -= VAR_9;
 VAR_7 += VAR_9;
 VAR_1->msg.len = VAR_9;





 if (VAR_3) {
  VAR_9 = FUNC_2(VAR_7, VAR_8, " target=%s", VAR_3);
  VAR_8 -= VAR_9;
  VAR_7 += VAR_9;
  VAR_1->msg.len += VAR_9;
 }
 if (VAR_2) {
  char *VAR_10 = FUNC_3(VAR_2, '@');

  if (!VAR_10)
   VAR_9 = FUNC_2(VAR_7, VAR_8, " service=%s",
     VAR_2);
  else
   VAR_9 = FUNC_2(VAR_7, VAR_8,
     " service=%.*s srchost=%s",
     (int)(VAR_10 - VAR_2),
     VAR_2, VAR_10 + 1);
  VAR_8 -= VAR_9;
  VAR_7 += VAR_9;
  VAR_1->msg.len += VAR_9;
 }

 if (VAR_6->gm_upcall_enctypes) {
  VAR_9 = FUNC_2(VAR_7, VAR_8, " enctypes=%s",
    VAR_6->gm_upcall_enctypes);
  VAR_8 -= VAR_9;
  VAR_7 += VAR_9;
  VAR_1->msg.len += VAR_9;
 }
 FUNC_4(VAR_1->databuf);
 VAR_9 = FUNC_2(VAR_7, VAR_8, "\n");
 if (VAR_9 == 0)
  goto out_overflow;
 VAR_1->msg.len += VAR_9;
 VAR_1->msg.data = VAR_1->databuf;
 return 0;
out_overflow:
 FUNC_0(1);
 return -VAR_0;
}
