
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mg_str {int p; int len; } ;
struct TYPE_9__ {int len; } ;
struct TYPE_10__ {int len; } ;
struct TYPE_8__ {int len; } ;
struct http_message {TYPE_4__ body; TYPE_5__ resp_status_msg; int resp_code; TYPE_5__ proto; TYPE_5__ query_string; TYPE_5__ uri; TYPE_3__ message; TYPE_2__* header_names; TYPE_1__* header_values; } ;
struct TYPE_7__ {int len; int * p; } ;
struct TYPE_6__ {int p; int len; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,size_t) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,int) ;
 struct mg_str* FUNC_5 (struct http_message*,char*) ;
 int FUNC_6 (char const*,int,struct http_message*,int) ;
 int FUNC_7 (TYPE_5__*,char*) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static const char *FUNC_9(void) {
  static const char *VAR_0 = "GET / HTTP/1.0\n\n";
  static const char *VAR_1 = "GET /blah HTTP/1.0\r\nFoo:  bar  \r\n\r\n";
  static const char *VAR_2 = "get b c\nz:  k \nb: t\nvvv\n\n xx";
  static const char *VAR_3 = "a b c\nContent-Length: 21 \nb: t\nvvv\n\n";
  static const char *VAR_4 = "GET /foo?a=b&c=d HTTP/1.0\n\n";
  static const char *VAR_5 = "POST /x HTTP/1.0\n\n";
  static const char *VAR_6 = "WOHOO /x HTTP/1.0\n\n";
  static const char *VAR_7 = "HTTP/1.0 200 OK\n\n";
  static const char *VAR_8 = "HTTP/1.0 999 OMGWTFBBQ\n\n";
  static const char *VAR_9 =
      "GET / HTTP/1.0\r\nHost: 127.0.0.1:18888\r\nCookie:\r\nX-PlayID: "
      "45455\r\nRange: 0-1\r\n\r\n";
  int VAR_10, VAR_11;
  struct mg_str *VAR_12;
  struct http_message VAR_13;

  VAR_11 = FUNC_8(VAR_1);
  for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
    FUNC_1(FUNC_6(VAR_1, VAR_10, &VAR_13, 1), 0);
  }

  FUNC_1(FUNC_6("\b23", 3, &VAR_13, 1), -1);
  FUNC_1(FUNC_6("\b23", 3, &VAR_13, 0), -1);
  FUNC_1(FUNC_6("get\n\n", 5, &VAR_13, 1), -1);
  FUNC_1(FUNC_6("get\n\n", 5, &VAR_13, 0), -1);
  FUNC_1(FUNC_6(VAR_0, FUNC_8(VAR_0) - 1, &VAR_13, 1), 0);
  FUNC_1(FUNC_6(VAR_0, FUNC_8(VAR_0), &VAR_13, 0), -1);

  FUNC_1(FUNC_6(VAR_0, FUNC_8(VAR_0), &VAR_13, 1), (int) FUNC_8(VAR_0));
  FUNC_1(VAR_13.message.len, FUNC_8(VAR_0));
  FUNC_1(VAR_13.body.len, 0);

  FUNC_1(FUNC_6(VAR_1, FUNC_8(VAR_1), &VAR_13, 0), -1);
  FUNC_1(FUNC_6(VAR_1, FUNC_8(VAR_1), &VAR_13, 1), (int) FUNC_8(VAR_1));
  FUNC_1(VAR_13.header_names[0].len, 3);
  FUNC_1(VAR_13.header_values[0].len, 3);
  FUNC_0(VAR_13.header_names[1].p == ((void*)0));
  FUNC_1(VAR_13.query_string.len, 0);
  FUNC_1(VAR_13.message.len, FUNC_8(VAR_1));
  FUNC_1(VAR_13.body.len, 0);

  FUNC_1(FUNC_6(VAR_2, FUNC_8(VAR_2), &VAR_13, 1), (int) FUNC_8(VAR_2) - 3);
  FUNC_0(VAR_13.header_names[2].p == ((void*)0));
  FUNC_0(VAR_13.header_names[0].p != ((void*)0));
  FUNC_0(VAR_13.header_names[1].p != ((void*)0));
  FUNC_1(FUNC_4(VAR_13.header_values[1].p, "t", 1), 0);
  FUNC_1(VAR_13.header_names[1].len, 1);
  FUNC_1(VAR_13.body.len, 0);

  FUNC_1(FUNC_6(VAR_3, FUNC_8(VAR_3), &VAR_13, 1), (int) FUNC_8(VAR_3));
  FUNC_1(VAR_13.body.len, 21);
  FUNC_1(VAR_13.message.len, 21 + FUNC_8(VAR_3));
  FUNC_0(FUNC_5(&VAR_13, "foo") == ((void*)0));
  FUNC_0((VAR_12 = FUNC_5(&VAR_13, "contENT-Length")) != ((void*)0));
  FUNC_1(VAR_12->len, 2);
  FUNC_3(VAR_12->p, "21");

  FUNC_1(FUNC_6(VAR_4, FUNC_8(VAR_4), &VAR_13, 1), (int) FUNC_8(VAR_4));
  FUNC_1(FUNC_7(&VAR_13.uri, "/foo"), 0);
  FUNC_1(FUNC_7(&VAR_13.query_string, "a=b&c=d"), 0);

  FUNC_1(FUNC_6(VAR_5, FUNC_8(VAR_5), &VAR_13, 1), (int) FUNC_8(VAR_5));
  FUNC_2(VAR_13.body.len, (size_t) ~0);

  FUNC_1(FUNC_6(VAR_6, FUNC_8(VAR_6), &VAR_13, 1), (int) FUNC_8(VAR_6));
  FUNC_1(VAR_13.body.len, 0);

  FUNC_1(FUNC_6(VAR_7, FUNC_8(VAR_7), &VAR_13, 0), (int) FUNC_8(VAR_7));
  FUNC_1(FUNC_7(&VAR_13.proto, "HTTP/1.0"), 0);
  FUNC_1(VAR_13.resp_code, 200);
  FUNC_1(FUNC_7(&VAR_13.resp_status_msg, "OK"), 0);
  FUNC_2(VAR_13.body.len, (size_t) ~0);

  FUNC_1(FUNC_6(VAR_8, FUNC_8(VAR_8), &VAR_13, 0), -1);

  FUNC_1(FUNC_6(VAR_9, FUNC_8(VAR_9), &VAR_13, 1), (int) FUNC_8(VAR_9));
  FUNC_0(FUNC_5(&VAR_13, "Host") != ((void*)0));
  FUNC_0(FUNC_5(&VAR_13, "Cookie") == ((void*)0));
  FUNC_0(FUNC_5(&VAR_13, "Range") != ((void*)0));

  return ((void*)0);
}
