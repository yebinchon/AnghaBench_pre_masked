
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int s_addr; } ;
struct in6_addr {int s6_addr; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef size_t mrb_int ;
typedef int buf ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t,char*,void*) ;
 int FUNC_1 (char*,char*,size_t) ;
 int FUNC_2 (int *,char*,size_t*,char**,size_t*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (int *,char*,int) ;

__attribute__((used)) static mrb_value
FUNC_6(mrb_state *VAR_3, mrb_value VAR_4)
{
  mrb_int VAR_5, VAR_6;
  char *VAR_7, VAR_8[50];

  FUNC_2(VAR_3, "is", &VAR_5, &VAR_7, &VAR_6);
  if ((size_t)VAR_6 > sizeof(VAR_8) - 1)
    FUNC_4(VAR_3, VAR_2, "invalid address");
  FUNC_1(VAR_8, VAR_7, VAR_6);
  VAR_8[VAR_6] = '\0';

  if (VAR_5 == VAR_0) {
    struct in_addr VAR_9;
    if (FUNC_0(VAR_0, VAR_8, (void *)&VAR_9.s_addr) != 1)
      goto invalid;
    return FUNC_5(VAR_3, (char*)&VAR_9.s_addr, 4);
  } else if (VAR_5 == VAR_1) {
    struct in6_addr VAR_10;
    if (FUNC_0(VAR_1, VAR_8, (void *)&VAR_10) != 1)
      goto invalid;
    return FUNC_5(VAR_3, (char*)&VAR_10, 16);
  } else
    FUNC_4(VAR_3, VAR_2, "unsupported address family");

invalid:
  FUNC_4(VAR_3, VAR_2, "invalid address");
  return FUNC_3();
}
