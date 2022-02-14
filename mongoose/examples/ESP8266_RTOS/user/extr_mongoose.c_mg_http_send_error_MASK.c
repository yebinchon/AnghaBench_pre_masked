
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_connection {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct mg_connection*,char const*,int ) ;
 int FUNC_2 (struct mg_connection*,int,int ,char*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char const*) ;

void FUNC_5(struct mg_connection *VAR_2, int VAR_3,
                        const char *VAR_4) {
  if (!VAR_4) VAR_4 = FUNC_3(VAR_3);
  FUNC_0(VAR_0, ("%p %d %s", VAR_2, VAR_3, VAR_4));
  FUNC_2(VAR_2, VAR_3, FUNC_4(VAR_4),
               "Content-Type: text/plain\r\nConnection: close");
  FUNC_1(VAR_2, VAR_4, FUNC_4(VAR_4));
  VAR_2->flags |= VAR_1;
}
