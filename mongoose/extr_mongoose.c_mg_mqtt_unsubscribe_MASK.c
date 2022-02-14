
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint16_t ;
struct mg_connection {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 char FUNC_1 (char) ;
 int FUNC_2 (struct mg_connection*,char*,char) ;
 int FUNC_3 (struct mg_connection*,int ,int ,size_t) ;
 char FUNC_4 (char*) ;

void FUNC_5(struct mg_connection *VAR_1, char **VAR_2,
                         size_t VAR_3, uint16_t VAR_4) {
  uint16_t VAR_5;
  size_t VAR_6;
  uint16_t VAR_7;
  size_t VAR_8 = 2;

  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
    VAR_8 += 2 + FUNC_4(VAR_2[VAR_6]);
  }

  FUNC_3(VAR_1, VAR_0, FUNC_0(1), VAR_8);

  VAR_5 = FUNC_1(VAR_4);
  FUNC_2(VAR_1, (char *) &VAR_5, 2);

  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
    VAR_7 = FUNC_4(VAR_2[VAR_6]);
    VAR_5 = FUNC_1(VAR_7);
    FUNC_2(VAR_1, &VAR_5, 2);
    FUNC_2(VAR_1, VAR_2[VAR_6], VAR_7);
  }
}
