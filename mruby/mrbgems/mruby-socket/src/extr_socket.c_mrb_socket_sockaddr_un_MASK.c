
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_len; char* sun_path; int sun_family; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,scalar_t__,size_t) ;
 int FUNC_3 (int *,char*,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int *,int ,char*,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ,int) ;

__attribute__((used)) static mrb_value
FUNC_9(mrb_state *VAR_3, mrb_value VAR_4)
{




  struct sockaddr_un *VAR_5;
  mrb_value VAR_6, VAR_7;

  FUNC_3(VAR_3, "S", &VAR_6);
  if ((size_t)FUNC_0(VAR_6) > sizeof(VAR_5->sun_path) - 1) {
    FUNC_6(VAR_3, VAR_1, "too long unix socket path (max: %d bytes)", (int)sizeof(VAR_5->sun_path) - 1);
  }
  VAR_7 = FUNC_7(VAR_3, sizeof(struct sockaddr_un));
  VAR_5 = (struct sockaddr_un *)FUNC_1(VAR_7);



  VAR_5->sun_family = VAR_0;
  FUNC_2(VAR_5->sun_path, FUNC_1(VAR_6), FUNC_0(VAR_6));
  VAR_5->sun_path[FUNC_0(VAR_6)] = '\0';
  FUNC_8(VAR_3, VAR_7, sizeof(struct sockaddr_un));
  return VAR_7;

}
