
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct skynet_message {size_t sz; int * data; scalar_t__ session; scalar_t__ source; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,struct skynet_message*) ;
 scalar_t__ FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2() {


 struct skynet_message VAR_2;
 VAR_2.source = 0;
 VAR_2.session = 0;
 VAR_2.data = ((void*)0);
 VAR_2.sz = (size_t)VAR_1 << VAR_0;
 uint32_t VAR_3 = FUNC_1("logger");
 if (VAR_3) {
  FUNC_0(VAR_3, &VAR_2);
 }
}
