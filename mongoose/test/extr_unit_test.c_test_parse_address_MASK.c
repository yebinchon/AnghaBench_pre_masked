
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union socket_address {int dummy; } socket_address ;
typedef int host ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int const) ;


 int FUNC_2 (char const*,union socket_address*,int*,char*,int) ;

__attribute__((used)) static const char *FUNC_3(void) {
  static const char *VAR_0[] = {
    "1",
    "1.2.3.4:1",
    "tcp://123",
    "udp://0.0.0.0:99",

    "tcp://localhost:99",

    ":8080",




    ((void*)0)
  };
  static const int VAR_1[] = {
    128,
    128,
    128,
    129,
    128,
    128





  };
  static const char *VAR_2[] = {"udp://a.com:53", "locl_host:12", ((void*)0)};
  static const char *VAR_3[] = {
      "99999", "1k", "1.2.3", "1.2.3.4:", "1.2.3.4:2p", "blah://12", ":123x",
      "veeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeery.long:12345",
      "udp://missingport", ((void*)0)};
  char VAR_4[50];
  union socket_address VAR_5;
  int VAR_6, VAR_7;

  for (VAR_6 = 0; VAR_0[VAR_6] != ((void*)0); VAR_6++) {
    FUNC_0(FUNC_2(VAR_0[VAR_6], &VAR_5, &VAR_7, VAR_4, sizeof(VAR_4)) > 0);
    FUNC_1(VAR_7, VAR_1[VAR_6]);
  }

  for (VAR_6 = 0; VAR_3[VAR_6] != ((void*)0); VAR_6++) {
    FUNC_1(FUNC_2(VAR_3[VAR_6], &VAR_5, &VAR_7, VAR_4, sizeof(VAR_4)),
              -1);
  }

  for (VAR_6 = 0; VAR_2[VAR_6] != ((void*)0); VAR_6++) {
    FUNC_1(FUNC_2(VAR_2[VAR_6], &VAR_5, &VAR_7, VAR_4, sizeof(VAR_4)),
              0);
  }

  return ((void*)0);
}
