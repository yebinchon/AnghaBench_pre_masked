
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fetch_type {int dummy; } ;
struct fetch_insn {int op; unsigned int param; unsigned long immediate; char* data; long offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 unsigned int VAR_24 ;
 int FUNC_0 (char*,char**,int) ;
 struct fetch_type* FUNC_1 (int *) ;
 int FUNC_2 (char) ;
 char* FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ,long*) ;
 int FUNC_5 (char*,int ,unsigned long*) ;
 int FUNC_6 (char*,struct fetch_type const*,struct fetch_insn*,unsigned int,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,unsigned long*) ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (char*,char) ;
 int FUNC_12 (int,int ) ;

__attribute__((used)) static int
FUNC_13(char *VAR_25, const struct fetch_type *VAR_26,
  struct fetch_insn **VAR_27, struct fetch_insn *VAR_28,
  unsigned int VAR_29, int VAR_30)
{
 struct fetch_insn *VAR_31 = *VAR_27;
 unsigned long VAR_32;
 int VAR_33 = VAR_14;
 long VAR_34 = 0;
 char *VAR_35;
 int VAR_36 = 0;

 switch (VAR_25[0]) {
 case '$':
  VAR_36 = FUNC_6(VAR_25 + 1, VAR_26, VAR_31, VAR_29, VAR_30);
  break;

 case '%':
  VAR_36 = FUNC_7(VAR_25 + 1);
  if (VAR_36 >= 0) {
   VAR_31->op = VAR_18;
   VAR_31->param = (unsigned int)VAR_36;
   VAR_36 = 0;
  } else
   FUNC_12(VAR_30, VAR_5);
  break;

 case '@':
  if (FUNC_2(VAR_25[1])) {
   VAR_36 = FUNC_5(VAR_25 + 1, 0, &VAR_32);
   if (VAR_36) {
    FUNC_12(VAR_30, VAR_4);
    break;
   }

   VAR_31->op = VAR_16;
   VAR_31->immediate = VAR_32;
  } else if (VAR_25[1] == '+') {

   if (VAR_29 & VAR_24) {
    FUNC_12(VAR_30, VAR_20);
    return -VAR_9;
   }
   VAR_36 = FUNC_4(VAR_25 + 2, 0, &VAR_34);
   if (VAR_36) {
    FUNC_12(VAR_30, VAR_2);
    break;
   }

   VAR_31->op = VAR_15;
   VAR_31->immediate = (unsigned long)VAR_34;
  } else {

   if (!(VAR_29 & VAR_24)) {
    FUNC_12(VAR_30, VAR_22);
    return -VAR_9;
   }

   VAR_31->op = VAR_11;
   VAR_31->data = FUNC_3(VAR_25 + 1, VAR_21);
   if (!VAR_31->data)
    return -VAR_10;
   if (++VAR_31 == VAR_28) {
    FUNC_12(VAR_30, VAR_23);
    return -VAR_9;
   }
   VAR_31->op = VAR_16;
   VAR_31->immediate = 0;
  }

  if (++VAR_31 == VAR_28) {
   FUNC_12(VAR_30, VAR_23);
   return -VAR_9;
  }
  *VAR_27 = VAR_31;
  VAR_31->op = VAR_14;
  VAR_31->offset = VAR_34;
  break;

 case '+':
 case '-':
  if (VAR_25[1] == 'u') {
   VAR_33 = VAR_19;
   VAR_25[1] = VAR_25[0];
   VAR_25++;
  }
  if (VAR_25[0] == '+')
   VAR_25++;
  VAR_35 = FUNC_9(VAR_25, '(');
  if (!VAR_35) {
   FUNC_12(VAR_30, VAR_7);
   return -VAR_9;
  }
  *VAR_35 = '\0';
  VAR_36 = FUNC_4(VAR_25, 0, &VAR_34);
  if (VAR_36) {
   FUNC_12(VAR_30, VAR_0);
   break;
  }
  VAR_30 += (VAR_35 + 1 - VAR_25) + (VAR_25[0] != '-' ? 1 : 0);
  VAR_25 = VAR_35 + 1;
  VAR_35 = FUNC_11(VAR_25, ')');
  if (!VAR_35) {
   FUNC_12(VAR_30 + FUNC_10(VAR_25),
         VAR_8);
   return -VAR_9;
  } else {
   const struct fetch_type *VAR_37 = FUNC_1(((void*)0));

   *VAR_35 = '\0';
   VAR_36 = FUNC_13(VAR_25, VAR_37, &VAR_31, VAR_28, VAR_29, VAR_30);
   if (VAR_36)
    break;
   if (VAR_31->op == VAR_12 ||
       VAR_31->op == VAR_13) {
    FUNC_12(VAR_30, VAR_6);
    return -VAR_9;
   }
   if (++VAR_31 == VAR_28) {
    FUNC_12(VAR_30, VAR_23);
    return -VAR_9;
   }
   *VAR_27 = VAR_31;

   VAR_31->op = VAR_33;
   VAR_31->offset = VAR_34;
  }
  break;
 case '\\':
  if (VAR_25[1] == '"') {
   VAR_36 = FUNC_0(VAR_25 + 2, &VAR_35, VAR_30 + 2);
   if (VAR_36)
    break;
   VAR_31->op = VAR_13;
   VAR_31->data = VAR_35;
  } else {
   VAR_36 = FUNC_8(VAR_25 + 1, &VAR_31->immediate);
   if (VAR_36)
    FUNC_12(VAR_30 + 1, VAR_3);
   else
    VAR_31->op = VAR_16;
  }
  break;
 }
 if (!VAR_36 && VAR_31->op == VAR_17) {

  FUNC_12(VAR_30, VAR_1);
  VAR_36 = -VAR_9;
 }
 return VAR_36;
}
