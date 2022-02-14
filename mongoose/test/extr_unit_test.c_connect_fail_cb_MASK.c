
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_connection {scalar_t__ user_data; } ;





__attribute__((used)) static void FUNC_0(struct mg_connection *VAR_0, int VAR_1, void *VAR_2) {
  switch (VAR_1) {
    case 128:

      *(int *) VAR_0->user_data |= *(int *) VAR_2 == 0 ? 1 : 4;
      break;
    case 129:
      *(int *) VAR_0->user_data |= 2;
      break;
  }
}
