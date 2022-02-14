
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct http_message {int dummy; } ;
struct TYPE_3__ {int st_size; scalar_t__ st_mtime; } ;
typedef TYPE_1__ cs_stat_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct http_message*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (char const*,int ,struct http_message*,int) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static const char *FUNC_4(void) {
  struct http_message VAR_0;
  cs_stat_t VAR_1;
  const char *VAR_2 =
      "GET / HTTP/1.0\nIf-None-Match: \"0.123\"\n"
      "If-Modified-Since: Tue 17 Nov 2015 21:01:56 GMT\n\n";
  const char *VAR_3 =
      "GET / HTTP/1.0\nIf-None-Match: \"0.7\"\n"
      "If-Modified-Since: Tue 17 Nov 2015 21:01:56 GMT\n\n";
  const char *VAR_4 =
      "GET / HTTP/1.0\n"
      "If-Modified-Since: Tue 17 Nov 2015 21:01:56 GMT\n\n";
  const char *VAR_5 = "GET / HTTP/1.0\n\n";

  VAR_1.st_size = 7;
  VAR_1.st_mtime = (time_t) 0;


  FUNC_0(FUNC_2(VAR_2, FUNC_3(VAR_2), &VAR_0, 1) > 0);
  FUNC_0(FUNC_1(&VAR_0, &VAR_1) == 0);


  FUNC_0(FUNC_2(VAR_4, FUNC_3(VAR_4), &VAR_0, 1) > 0);
  FUNC_0(FUNC_1(&VAR_0, &VAR_1) != 0);

  FUNC_0(FUNC_2(VAR_5, FUNC_3(VAR_5), &VAR_0, 1) > 0);
  FUNC_0(FUNC_1(&VAR_0, &VAR_1) == 0);

  FUNC_0(FUNC_2(VAR_3, FUNC_3(VAR_3), &VAR_0, 1) > 0);
  FUNC_0(FUNC_1(&VAR_0, &VAR_1) != 0);

  return ((void*)0);
}
