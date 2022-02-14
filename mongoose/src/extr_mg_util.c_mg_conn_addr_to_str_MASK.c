
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union socket_address {int dummy; } socket_address ;
struct mg_connection {int dummy; } ;
typedef int sa ;


 int VAR_0 ;
 int FUNC_0 (union socket_address*,int ,int) ;
 int FUNC_1 (struct mg_connection*,int,union socket_address*) ;
 int FUNC_2 (union socket_address*,char*,size_t,int) ;

int FUNC_3(struct mg_connection *VAR_1, char *VAR_2, size_t VAR_3,
                        int VAR_4) {
  union socket_address VAR_5;
  FUNC_0(&VAR_5, 0, sizeof(VAR_5));
  FUNC_1(VAR_1, VAR_4 & VAR_0, &VAR_5);
  return FUNC_2(&VAR_5, VAR_2, VAR_3, VAR_4);
}
