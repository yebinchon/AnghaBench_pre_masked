
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_request {unsigned long member_0; } ;
struct mg_connection {int * user_data; } ;
typedef int req ;





 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int ,struct work_request*,int) ;

__attribute__((used)) static void FUNC_2(struct mg_connection *VAR_2, int VAR_3, void *VAR_4) {
  (void) VAR_2;
  (void) VAR_4;

  switch (VAR_3) {
    case 130:
      VAR_2->user_data = (void *)++VAR_0;
      break;
    case 128: {
      struct work_request VAR_5 = {(unsigned long)VAR_2->user_data};

      if (FUNC_1(VAR_1[0], &VAR_5, sizeof(VAR_5)) < 0)
        FUNC_0("Writing worker sock");
      break;
    }
    case 129: {
      if (VAR_2->user_data) VAR_2->user_data = ((void*)0);
    }
  }
}
