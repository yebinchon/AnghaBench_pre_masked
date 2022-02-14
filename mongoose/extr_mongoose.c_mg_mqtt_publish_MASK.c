
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct mg_connection {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mg_connection*,void const*,size_t) ;
 int FUNC_3 (struct mg_connection*,int ,int,size_t) ;
 int FUNC_4 (char const*) ;

void FUNC_5(struct mg_connection *VAR_1, const char *VAR_2,
                     uint16_t VAR_3, int VAR_4, const void *VAR_5,
                     size_t VAR_6) {
  uint16_t VAR_7;
  uint16_t VAR_8 = FUNC_4(VAR_2);

  size_t VAR_9 = 2 + VAR_8 + VAR_6;
  if (FUNC_0(VAR_4) > 0) {
    VAR_9 += 2;
  }

  FUNC_3(VAR_1, VAR_0, VAR_4, VAR_9);

  VAR_7 = FUNC_1(VAR_8);
  FUNC_2(VAR_1, &VAR_7, 2);
  FUNC_2(VAR_1, VAR_2, VAR_8);

  if (FUNC_0(VAR_4) > 0) {
    VAR_7 = FUNC_1(VAR_3);
    FUNC_2(VAR_1, &VAR_7, 2);
  }

  FUNC_2(VAR_1, VAR_5, VAR_6);
}
