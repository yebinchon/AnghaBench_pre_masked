
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_md5sig {int tcpm_keylen; int tcpm_key; int tcpm_addr; } ;
typedef int socklen_t ;
typedef int md5sig ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (struct tcp_md5sig*,int ,int) ;
 int FUNC_3 (int,int ,int ,struct tcp_md5sig*,int) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(int VAR_4, void *VAR_5, socklen_t VAR_6, const char *VAR_7)
{
 struct tcp_md5sig VAR_8;
 int VAR_9 = VAR_7 ? FUNC_4(VAR_7) : 0;
 int VAR_10;

 FUNC_2(&VAR_8, 0, sizeof(VAR_8));
 FUNC_1(VAR_8.tcpm_addr, VAR_5, VAR_6);
 VAR_8.tcpm_keylen = VAR_9;

 if (VAR_9)
  FUNC_1(VAR_8.tcpm_key, VAR_7, VAR_9);

 VAR_10 = FUNC_3(VAR_4, VAR_1, VAR_2, &VAR_8, sizeof(VAR_8));
 if (VAR_10 < 0) {

  if (VAR_3 == VAR_0)
   VAR_10 = 0;
  else
   FUNC_0("setsockopt(TCP_MD5SIG)");
 }

 return VAR_10;
}
