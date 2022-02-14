
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int username_buf ;
typedef int uri_buf ;
struct mg_str {int dummy; } ;
struct TYPE_4__ {scalar_t__ len; } ;
struct TYPE_3__ {scalar_t__ len; int p; } ;
struct http_message {TYPE_2__ query_string; TYPE_1__ uri; int method; } ;
typedef int response_buf ;
typedef int qop_buf ;
typedef int nonce_buf ;
typedef int nc_buf ;
typedef int cnonce_buf ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_2 (char*) ;
 struct mg_str* FUNC_3 (struct http_message*,char*) ;
 scalar_t__ FUNC_4 (struct mg_str*,char*,char**,int) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int ,scalar_t__) ;

int FUNC_7(struct http_message *VAR_0, const char *VAR_1,
                              FILE *VAR_2) {
  int VAR_3 = 0;
  struct mg_str *VAR_4;
  char VAR_5[50], VAR_6[64], VAR_7[40], VAR_8[200],
      VAR_9[20], VAR_10[20], VAR_11[16];

  char *VAR_12 = VAR_5, *VAR_13 = VAR_6, *VAR_14 = VAR_7,
       *VAR_15 = VAR_8, *VAR_16 = VAR_9, *VAR_17 = VAR_10, *VAR_18 = VAR_11;


  if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0) ||
      (VAR_4 = FUNC_3(VAR_0, "Authorization")) == ((void*)0) ||
      FUNC_4(VAR_4, "username", &VAR_12, sizeof(VAR_5)) ==
          0 ||
      FUNC_4(VAR_4, "cnonce", &VAR_13, sizeof(VAR_6)) == 0 ||
      FUNC_4(VAR_4, "response", &VAR_14, sizeof(VAR_7)) ==
          0 ||
      FUNC_4(VAR_4, "uri", &VAR_15, sizeof(VAR_8)) == 0 ||
      FUNC_4(VAR_4, "qop", &VAR_16, sizeof(VAR_9)) == 0 ||
      FUNC_4(VAR_4, "nc", &VAR_17, sizeof(VAR_10)) == 0 ||
      FUNC_4(VAR_4, "nonce", &VAR_18, sizeof(VAR_11)) == 0 ||
      FUNC_2(VAR_18) == 0) {
    VAR_3 = 0;
    goto clean;
  }



  VAR_3 = FUNC_1(
      VAR_0->method,
      FUNC_6(
          VAR_0->uri.p,
          VAR_0->uri.len + (VAR_0->query_string.len ? VAR_0->query_string.len + 1 : 0)),
      FUNC_5(VAR_12), FUNC_5(VAR_13), FUNC_5(VAR_14),
      FUNC_5(VAR_16), FUNC_5(VAR_17), FUNC_5(VAR_18), FUNC_5(VAR_1),
      VAR_2);

clean:
  if (VAR_12 != VAR_5) FUNC_0(VAR_12);
  if (VAR_13 != VAR_6) FUNC_0(VAR_13);
  if (VAR_14 != VAR_7) FUNC_0(VAR_14);
  if (VAR_15 != VAR_8) FUNC_0(VAR_15);
  if (VAR_16 != VAR_9) FUNC_0(VAR_16);
  if (VAR_17 != VAR_10) FUNC_0(VAR_17);
  if (VAR_18 != VAR_11) FUNC_0(VAR_18);

  return VAR_3;
}
