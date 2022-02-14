
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (char*,void*) ;

__attribute__((used)) static void FUNC_2(void)
{
 if (VAR_3 == VAR_0) {
  FUNC_1("inner.dest6", (void *) &VAR_10);
  FUNC_1("inner.source6", (void *) &VAR_12);
 } else {
  FUNC_1("inner.dest4", (void *) &VAR_9);
  FUNC_1("inner.source4", (void *) &VAR_11);
 }

 if (!VAR_4)
  return;

 FUNC_0(VAR_17, "encap proto:   %u\n", VAR_1);

 if (VAR_4 == VAR_0) {
  FUNC_1("outer.dest6", (void *) &VAR_14);
  FUNC_1("outer.source6", (void *) &VAR_16);
 } else {
  FUNC_1("outer.dest4", (void *) &VAR_13);
  FUNC_1("outer.source4", (void *) &VAR_15);
 }

 if (!VAR_2)
  return;

 if (VAR_4 == VAR_0) {
  FUNC_1("extra.dest6", (void *) &VAR_6);
  FUNC_1("extra.source6", (void *) &VAR_8);
 } else {
  FUNC_1("extra.dest4", (void *) &VAR_5);
  FUNC_1("extra.source4", (void *) &VAR_7);
 }

}
