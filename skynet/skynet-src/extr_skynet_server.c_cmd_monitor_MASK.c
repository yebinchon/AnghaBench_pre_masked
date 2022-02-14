
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct skynet_context {char const* result; } ;
struct TYPE_2__ {int monitor_exit; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char const*,char*,int) ;
 int FUNC_1 (struct skynet_context*,char const*) ;

__attribute__((used)) static const char *
FUNC_2(struct skynet_context * VAR_1, const char * VAR_2) {
 uint32_t VAR_3=0;
 if (VAR_2 == ((void*)0) || VAR_2[0] == '\0') {
  if (VAR_0.monitor_exit) {

   FUNC_0(VAR_1->result, ":%x", VAR_0.monitor_exit);
   return VAR_1->result;
  }
  return ((void*)0);
 } else {
  VAR_3 = FUNC_1(VAR_1, VAR_2);
 }
 VAR_0.monitor_exit = VAR_3;
 return ((void*)0);
}
