
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pattern {scalar_t__ regex; } ;


 int FUNC_0 (struct pattern*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct pattern *VAR_0) {
 if (VAR_0) {
  if (VAR_0->regex) {
   FUNC_1(VAR_0->regex);
  }
  FUNC_0(VAR_0);
 }
}
