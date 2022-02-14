
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {char* p; int len; } ;
struct mbuf {int dummy; } ;
struct cs_base64_ctx {int dummy; } ;


 int FUNC_0 (struct cs_base64_ctx*) ;
 int FUNC_1 (struct cs_base64_ctx*,int ,struct mbuf*) ;
 int FUNC_2 (struct cs_base64_ctx*,char*,int) ;
 int FUNC_3 (struct mbuf*,char const*,int ) ;
 int VAR_0 ;
 int FUNC_4 (char const*) ;

void FUNC_5(const struct mg_str VAR_1, const struct mg_str VAR_2,
                          struct mbuf *VAR_3) {
  const char *VAR_4 = "Authorization: Basic ";
  const char *VAR_5 = "\r\n";

  struct cs_base64_ctx VAR_6;
  FUNC_1(&VAR_6, VAR_0, VAR_3);

  FUNC_3(VAR_3, VAR_4, FUNC_4(VAR_4));

  FUNC_2(&VAR_6, VAR_1.p, VAR_1.len);
  if (VAR_2.len > 0) {
    FUNC_2(&VAR_6, ":", 1);
    FUNC_2(&VAR_6, VAR_2.p, VAR_2.len);
  }
  FUNC_0(&VAR_6);
  FUNC_3(VAR_3, VAR_5, FUNC_4(VAR_5));
}
