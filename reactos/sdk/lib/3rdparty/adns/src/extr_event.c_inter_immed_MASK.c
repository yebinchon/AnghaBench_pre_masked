
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;


 int FUNC_0 (struct timeval*) ;

__attribute__((used)) static void FUNC_1(struct timeval **VAR_0, struct timeval *VAR_1) {
  struct timeval *VAR_2;

  if (!VAR_0) return;

  VAR_2= *VAR_0;
  if (!VAR_2) { *VAR_0= VAR_2= VAR_1; }

  FUNC_0(VAR_2);
}
