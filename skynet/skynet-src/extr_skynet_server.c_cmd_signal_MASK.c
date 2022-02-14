
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct skynet_context {int instance; int mod; } ;


 int FUNC_0 (struct skynet_context*) ;
 struct skynet_context* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int) ;
 char* FUNC_3 (char const*,char) ;
 int FUNC_4 (char const*,int *,int ) ;
 scalar_t__ FUNC_5 (struct skynet_context*,char const*) ;

__attribute__((used)) static const char *
FUNC_6(struct skynet_context * VAR_0, const char * VAR_1) {
 uint32_t VAR_2 = FUNC_5(VAR_0, VAR_1);
 if (VAR_2 == 0)
  return ((void*)0);
 struct skynet_context * VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 == ((void*)0))
  return ((void*)0);
 VAR_1 = FUNC_3(VAR_1, ' ');
 int VAR_4 = 0;
 if (VAR_1) {
  VAR_4 = FUNC_4(VAR_1, ((void*)0), 0);
 }

 FUNC_2(VAR_3->mod, VAR_3->instance, VAR_4);

 FUNC_0(VAR_3);
 return ((void*)0);
}
