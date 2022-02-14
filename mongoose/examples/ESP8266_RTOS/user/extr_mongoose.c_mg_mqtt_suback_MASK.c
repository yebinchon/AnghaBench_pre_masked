
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct mg_connection {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mg_connection*,int *,int) ;
 int FUNC_3 (struct mg_connection*,int ,int ,int) ;

void FUNC_4(struct mg_connection *VAR_1, uint8_t *VAR_2, size_t VAR_3,
                    uint16_t VAR_4) {
  size_t VAR_5;
  uint16_t VAR_6;

  FUNC_3(VAR_1, VAR_0, FUNC_0(1), 2 + VAR_3);

  VAR_6 = FUNC_1(VAR_4);
  FUNC_2(VAR_1, &VAR_6, 2);

  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
    FUNC_2(VAR_1, &VAR_2[VAR_5], 1);
  }
}
