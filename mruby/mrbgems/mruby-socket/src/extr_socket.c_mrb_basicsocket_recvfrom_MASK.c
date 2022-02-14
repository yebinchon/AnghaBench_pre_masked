
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int ssize_t ;
typedef int socklen_t ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;
typedef int fsize_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,char*,int*,int*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int ,scalar_t__,int ,int,struct sockaddr*,int*) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static mrb_value
FUNC_9(mrb_state *VAR_0, mrb_value VAR_1)
{
  ssize_t VAR_2;
  mrb_int VAR_3, VAR_4 = 0;
  mrb_value VAR_5, VAR_6, VAR_7;
  socklen_t VAR_8;

  FUNC_3(VAR_0, "i|i", &VAR_3, &VAR_4);
  VAR_6 = FUNC_4(VAR_0, VAR_3);
  VAR_8 = sizeof(struct sockaddr_storage);
  VAR_7 = FUNC_4(VAR_0, VAR_8);
  VAR_2 = FUNC_7(FUNC_8(VAR_0, VAR_1), FUNC_0(VAR_6), (fsize_t)VAR_3, (int)VAR_4, (struct sockaddr *)FUNC_0(VAR_7), &VAR_8);
  if (VAR_2 == -1)
    FUNC_6(VAR_0, "recvfrom");
  FUNC_5(VAR_0, VAR_6, (mrb_int)VAR_2);
  FUNC_5(VAR_0, VAR_7, (mrb_int)VAR_8);
  VAR_5 = FUNC_1(VAR_0, 2);
  FUNC_2(VAR_0, VAR_5, VAR_6);
  FUNC_2(VAR_0, VAR_5, VAR_7);
  return VAR_5;
}
