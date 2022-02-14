
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct simple_data {int fail; int num_timer; int num_close; int num_send; int num_recv; int num_connect; int num_accept; } ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct simple_data *VAR_0, int VAR_1) {
  switch (VAR_1) {
    case 131:
      break;
    case 134:
      VAR_0->num_accept++;
      break;
    case 132:
      VAR_0->num_connect++;
      break;
    case 130:
      VAR_0->num_recv++;
      break;
    case 129:
      VAR_0->num_send++;
      break;
    case 133:
      VAR_0->num_close++;
      break;
    case 128:
      VAR_0->num_timer++;
      break;
    default: {
      char VAR_2[100];
      FUNC_0(VAR_2, "(unexpected event: %d)", VAR_1);
      FUNC_1(VAR_0->fail, VAR_2);
    }
  }
}
