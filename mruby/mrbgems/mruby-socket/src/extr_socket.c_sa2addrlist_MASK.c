
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {unsigned short sin6_port; } ;
struct sockaddr_in {unsigned short sin_port; } ;
struct sockaddr {int sa_family; } ;
typedef int socklen_t ;
typedef int mrb_value ;
typedef int mrb_state ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sockaddr const*,int ,int ,int ,int *,int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (unsigned short) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int ,char*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,char const*) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *,char*) ;
 unsigned short FUNC_11 (unsigned short) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static mrb_value
FUNC_13(mrb_state *VAR_3, const struct sockaddr *VAR_4, socklen_t VAR_5)
{
  mrb_value VAR_6, VAR_7;
  unsigned short VAR_8;
  const char *VAR_9;

  switch (VAR_4->sa_family) {
  case 129:
    VAR_9 = "AF_INET";
    VAR_8 = ((struct sockaddr_in *)VAR_4)->sin_port;
    break;
  case 128:
    VAR_9 = "AF_INET6";
    VAR_8 = ((struct sockaddr_in6 *)VAR_4)->sin6_port;
    break;
  default:
    FUNC_6(VAR_3, VAR_0, "bad af");
    return FUNC_5();
  }
  VAR_8 = FUNC_11(VAR_8);
  VAR_7 = FUNC_7(VAR_3, VAR_1);
  if (FUNC_1(VAR_4, VAR_5, FUNC_0(VAR_7), VAR_1, ((void*)0), 0, VAR_2) == -1)
    FUNC_10(VAR_3, "getnameinfo");
  FUNC_9(VAR_3, VAR_7, FUNC_12(FUNC_0(VAR_7)));
  VAR_6 = FUNC_2(VAR_3, 4);
  FUNC_3(VAR_3, VAR_6, FUNC_8(VAR_3, VAR_9));
  FUNC_3(VAR_3, VAR_6, FUNC_4(VAR_8));
  FUNC_3(VAR_3, VAR_6, VAR_7);
  FUNC_3(VAR_3, VAR_6, VAR_7);
  return VAR_6;
}
