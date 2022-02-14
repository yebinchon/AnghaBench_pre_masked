
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct sway_container {int dummy; } ;
struct resize_amount {scalar_t__ unit; int amount; } ;
struct cmd_results {int dummy; } ;
struct TYPE_3__ {struct sway_container* container; } ;
struct TYPE_4__ {TYPE_1__ handler_context; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct cmd_results* FUNC_0 (int ,char const*) ;
 TYPE_2__* VAR_6 ;
 scalar_t__ FUNC_1 (struct sway_container*) ;
 int FUNC_2 (int,char**,struct resize_amount*) ;
 scalar_t__ FUNC_3 (char*) ;
 struct cmd_results* FUNC_4 (scalar_t__,struct resize_amount*) ;
 struct cmd_results* FUNC_5 (scalar_t__,struct resize_amount*) ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static struct cmd_results *FUNC_7(int VAR_7, char **VAR_8,
  int VAR_9) {
 const char VAR_10[] = "Expected 'resize grow|shrink <direction> "
  "[<amount> px|ppt [or <amount> px|ppt]]'";
 uint32_t VAR_11 = FUNC_3(*VAR_8);
 if (VAR_11 == VAR_5) {
  return FUNC_0(VAR_0, VAR_10);
 }
 --VAR_7; ++VAR_8;


 struct resize_amount VAR_12;
 if (VAR_7) {
  int VAR_13 = FUNC_2(VAR_7, VAR_8, &VAR_12);
  VAR_7 -= VAR_13;
  VAR_8 += VAR_13;
  if (VAR_12.unit == VAR_2) {
   return FUNC_0(VAR_0, VAR_10);
  }
 } else {
  VAR_12.amount = 10;
  VAR_12.unit = VAR_1;
 }


 if (VAR_7) {
  if (FUNC_6(*VAR_8, "or") != 0) {
   return FUNC_0(VAR_0, VAR_10);
  }
  --VAR_7; ++VAR_8;
 }


 struct resize_amount VAR_14;
 if (VAR_7) {
  int VAR_15 = FUNC_2(VAR_7, VAR_8, &VAR_14);
  if (VAR_7 > VAR_15) {
   return FUNC_0(VAR_0, VAR_10);
  }
  if (VAR_14.unit == VAR_2) {
   return FUNC_0(VAR_0, VAR_10);
  }
 } else {
  VAR_14.amount = 0;
  VAR_14.unit = VAR_2;
 }

 VAR_12.amount *= VAR_9;
 VAR_14.amount *= VAR_9;

 struct sway_container *VAR_16 = VAR_6->handler_context.container;
 if (FUNC_1(VAR_16)) {


  if (VAR_12.unit == VAR_4) {
   return FUNC_4(VAR_11, &VAR_12);
  } else if (VAR_14.unit == VAR_4) {
   return FUNC_4(VAR_11, &VAR_14);
  } else if (VAR_12.unit == VAR_1) {
   return FUNC_4(VAR_11, &VAR_12);
  } else if (VAR_14.unit == VAR_1) {
   return FUNC_4(VAR_11, &VAR_14);
  } else {
   return FUNC_0(VAR_0,
     "Floating containers cannot use ppt measurements");
  }
 }


 if (VAR_12.unit == VAR_3) {
  return FUNC_5(VAR_11, &VAR_12);
 } else if (VAR_14.unit == VAR_3) {
  return FUNC_5(VAR_11, &VAR_14);
 } else if (VAR_12.unit == VAR_1) {
  return FUNC_5(VAR_11, &VAR_12);
 } else if (VAR_14.unit == VAR_1) {
  return FUNC_5(VAR_11, &VAR_14);
 } else {
  return FUNC_5(VAR_11, &VAR_12);
 }
}
