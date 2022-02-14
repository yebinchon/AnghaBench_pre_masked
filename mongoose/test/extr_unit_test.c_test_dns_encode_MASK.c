
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* buf; char const len; } ;
struct mg_connection {TYPE_1__ send_mbuf; } ;


 size_t FUNC_0 (int*) ;
 int FUNC_1 (char const,int) ;
 int FUNC_2 (char const*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct mg_connection*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct mg_connection*,char*,int) ;

__attribute__((used)) static const char *FUNC_6(void) {
  struct mg_connection VAR_2;
  const char *VAR_3;
  int VAR_4[] = {VAR_1, VAR_0};
  size_t VAR_5;
  FUNC_3(&VAR_2);






  for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4); VAR_5++) {
    FUNC_5(&VAR_2, "www.cesanta.com", VAR_4[VAR_5]);
    VAR_3 = VAR_2.send_mbuf.buf;
    FUNC_1(VAR_2.send_mbuf.len, 12 + 4 + 13 + 4 + 2);
    FUNC_1(VAR_3[14], 3);
    FUNC_2(&VAR_3[15], "www");
    FUNC_1(VAR_3[18], 7);
    FUNC_2(&VAR_3[19], "cesanta");
    FUNC_1(VAR_3[26], 3);
    FUNC_2(&VAR_3[27], "com");
    FUNC_1(VAR_3[30], 0);
    FUNC_1(VAR_3[31], 0);
    FUNC_1(VAR_3[32], VAR_4[VAR_5]);
    FUNC_1(VAR_3[33], 0);
    FUNC_1(VAR_3[34], 1);

    FUNC_4(&VAR_2.send_mbuf);
  }
  return ((void*)0);
}
