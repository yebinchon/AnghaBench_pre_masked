
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Linetype ;
typedef int Comment_state ;


 int FUNC_0 () ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int * VAR_17 ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int * FUNC_2 (char const*,scalar_t__,int ) ;
 int FUNC_3 (char const*) ;
 int VAR_18 ;
 scalar_t__ FUNC_4 (char const**) ;
 scalar_t__* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 char const* VAR_22 ;
 int VAR_23 ;
 size_t VAR_24 ;
 int * VAR_25 ;
 int * VAR_26 ;
 int * VAR_27 ;
 int * VAR_28 ;
 char* FUNC_5 (char const*) ;
 char* FUNC_6 (char const*) ;
 int FUNC_7 (char const*,int *) ;
 scalar_t__ FUNC_8 (char*,char const*,int) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (char const*,char*,int) ;
 scalar_t__ FUNC_11 (char const*,char) ;
 char const* VAR_29 ;
 int ** VAR_30 ;

__attribute__((used)) static Linetype
FUNC_12(void)
{
 const char *VAR_31;
 int VAR_32;
 int VAR_33;
 Linetype VAR_34;
 Comment_state VAR_35;

 VAR_23++;
 if (FUNC_2(VAR_29, VAR_16, VAR_21) == ((void*)0))
  return (VAR_9);
 if (VAR_26 == ((void*)0)) {
  if (FUNC_11(VAR_29, '\n') == FUNC_11(VAR_29, '\r') + 1)
   VAR_26 = VAR_27;
  else
   VAR_26 = VAR_28;
 }
 VAR_34 = VAR_13;
 VAR_35 = VAR_20;
 VAR_31 = FUNC_5(VAR_29);
 if (VAR_24 == VAR_2) {
  if (*VAR_31 == '#') {
   VAR_24 = VAR_1;
   VAR_18 = 1;
   VAR_31 = FUNC_5(VAR_31 + 1);
  } else if (*VAR_31 != '\0')
   VAR_24 = VAR_0;
 }
 if (!VAR_20 && VAR_24 == VAR_1) {
  VAR_22 = VAR_29 + (VAR_31 - VAR_29);
  VAR_31 = FUNC_6(VAR_31);
  VAR_33 = VAR_31 - VAR_22;

  if (FUNC_10(VAR_31, "\\\r\n", 3) == 0 ||
      FUNC_10(VAR_31, "\\\n", 2) == 0)
   FUNC_0();
  if (FUNC_8("ifdef", VAR_22, VAR_33) == 0 ||
      FUNC_8("ifndef", VAR_22, VAR_33) == 0) {
   VAR_31 = FUNC_5(VAR_31);
   if ((VAR_32 = FUNC_3(VAR_31)) < 0)
    VAR_34 = VAR_12;
   else {
    VAR_34 = (VAR_22[2] == 'n')
        ? VAR_10 : VAR_14;
    if (VAR_30[VAR_32] == ((void*)0))
     VAR_34 = (VAR_34 == VAR_14)
         ? VAR_10 : VAR_14;
    if (VAR_19[VAR_32])
     VAR_34 = (VAR_34 == VAR_14)
         ? VAR_15 : VAR_11;
   }
   VAR_31 = FUNC_6(VAR_31);
  } else if (FUNC_8("if", VAR_22, VAR_33) == 0)
   VAR_34 = FUNC_4(&VAR_31);
  else if (FUNC_8("elif", VAR_22, VAR_33) == 0)
   VAR_34 = FUNC_4(&VAR_31) - VAR_12 + VAR_5;
  else if (FUNC_8("else", VAR_22, VAR_33) == 0)
   VAR_34 = VAR_6;
  else if (FUNC_8("endif", VAR_22, VAR_33) == 0)
   VAR_34 = VAR_8;
  else {
   VAR_24 = VAR_0;
   VAR_34 = VAR_13;
  }
  VAR_31 = FUNC_5(VAR_31);
  if (*VAR_31 != '\0') {
   VAR_24 = VAR_0;
   if (VAR_34 == VAR_14 || VAR_34 == VAR_10 ||
       VAR_34 == VAR_15 || VAR_34 == VAR_11)
    VAR_34 = VAR_12;
   if (VAR_34 == VAR_7 || VAR_34 == VAR_4)
    VAR_34 = VAR_5;
  }
  if (VAR_34 != VAR_13 && (VAR_35 || VAR_20)) {
   VAR_34 += VAR_3;
   if (VAR_20)
    VAR_24 = VAR_0;
  }



  if (VAR_24 == VAR_1) {
   size_t VAR_36 = VAR_31 - VAR_29;
   if (FUNC_2(VAR_29 + VAR_36, VAR_16 - VAR_36, VAR_21) == ((void*)0)) {

    FUNC_7(VAR_29 + VAR_36, VAR_26);
    VAR_31 += FUNC_9(VAR_26);
    VAR_24 = VAR_2;
   } else {
    VAR_24 = VAR_0;
   }
  }
 }
 if (VAR_24 == VAR_0) {
  while (*VAR_31 != '\0')
   VAR_31 = FUNC_5(VAR_31 + 1);
 }
 FUNC_1("parser line %d state %s comment %s line", VAR_23,
     VAR_17[VAR_20], VAR_25[VAR_24]);
 return (VAR_34);
}
