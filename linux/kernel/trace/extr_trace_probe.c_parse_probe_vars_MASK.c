
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fetch_type {int dummy; } ;
struct fetch_insn {unsigned int param; int op; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,int,unsigned long*) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(char *VAR_15, const struct fetch_type *VAR_16,
   struct fetch_insn *VAR_17, unsigned int VAR_18, int VAR_19)
{
 unsigned long VAR_20;
 int VAR_21 = 0;
 int VAR_22;

 if (FUNC_3(VAR_15, "retval") == 0) {
  if (VAR_18 & VAR_14) {
   VAR_17->op = VAR_6;
  } else {
   FUNC_4(VAR_19, VAR_10);
   VAR_21 = -VAR_3;
  }
 } else if ((VAR_22 = FUNC_2(VAR_15, "stack"))) {
  if (VAR_15[VAR_22] == '\0') {
   VAR_17->op = VAR_8;
  } else if (FUNC_0(VAR_15[VAR_22])) {
   VAR_21 = FUNC_1(VAR_15 + VAR_22, 10, &VAR_20);
   if (VAR_21) {
    goto inval_var;
   } else if ((VAR_18 & VAR_12) &&
        VAR_20 > VAR_9) {
    FUNC_4(VAR_19, VAR_1);
    VAR_21 = -VAR_3;
   } else {
    VAR_17->op = VAR_7;
    VAR_17->param = (unsigned int)VAR_20;
   }
  } else
   goto inval_var;
 } else if (FUNC_3(VAR_15, "comm") == 0) {
  VAR_17->op = VAR_5;
 } else
  goto inval_var;

 return VAR_21;

inval_var:
 FUNC_4(VAR_19, VAR_2);
 return -VAR_3;
}
