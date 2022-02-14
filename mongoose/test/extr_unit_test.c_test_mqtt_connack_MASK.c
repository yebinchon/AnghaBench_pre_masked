
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* buf; int len; } ;
struct mg_connection {TYPE_1__ send_mbuf; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const,int) ;
 int VAR_0 ;
 struct mg_connection* FUNC_2 () ;
 int FUNC_3 (struct mg_connection*) ;
 int FUNC_4 (struct mg_connection*,int) ;
 int FUNC_5 (struct mg_connection*) ;

__attribute__((used)) static const char *FUNC_6(void) {
  struct mg_connection *VAR_1 = FUNC_2();
  const char *VAR_2;
  FUNC_5(VAR_1);

  FUNC_4(VAR_1, 42);
  VAR_2 = VAR_1->send_mbuf.buf;
  FUNC_0(VAR_1->send_mbuf.len > 0);
  FUNC_1((VAR_2[0] & 0xf0), (VAR_0 << 4));
  FUNC_1((size_t) VAR_2[1], (VAR_1->send_mbuf.len - 2));
  FUNC_1(VAR_2[3], 42);

  FUNC_3(VAR_1);
  return ((void*)0);
}
