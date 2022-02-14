
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VFD_MEDIA ;
typedef int VFD_FLAGS ;
typedef scalar_t__ ULONG ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 () ;
 char FUNC_3 (int ,char*) ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_4 (int ,...) ;
 scalar_t__ VAR_23 ;
 char* FUNC_5 (int ) ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (scalar_t__,int *,int *,int *,int*,int *,int *) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (char const*,char*) ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ FUNC_10 (char const) ;
 int FUNC_11 (char*,char*) ;
 scalar_t__ FUNC_12 (char const) ;

int FUNC_13(const char **VAR_34)
{
 ULONG VAR_35 = VAR_20;

 ULONG VAR_36 = VAR_24;
 ULONG VAR_37 = VAR_24;
 HANDLE VAR_38;

 VFD_MEDIA VAR_39;
 VFD_FLAGS VAR_40;

 DWORD VAR_41;



 while (VAR_34 && *VAR_34) {

  if (!FUNC_9(*VAR_34, "/f") ||
   !FUNC_9(*VAR_34, "/force")) {

   if (VAR_35 != VAR_20) {
    FUNC_4(VAR_10, *VAR_34);
    return VAR_29;
   }

   VAR_35 = VAR_21;
  }
  else if (!FUNC_9(*VAR_34, "/q") ||
   !FUNC_9(*VAR_34, "/quit")) {

   if (VAR_35 != VAR_20) {
    FUNC_4(VAR_10, *VAR_34);
    return VAR_29;
   }

   VAR_35 = VAR_22;
  }
  else if ((FUNC_10(**VAR_34) || **VAR_34 == '*') &&
   (*(*VAR_34 + 1) == ':' || *(*VAR_34 + 1) == '\0')) {

   if (VAR_36 != VAR_24) {
    FUNC_4(VAR_10, *VAR_34);
    return VAR_29;
   }

   if (**VAR_34 == '*') {
    VAR_36 = '0';
    VAR_37 = '0' + VAR_27;
   }
   else {
    VAR_36 = FUNC_12(**VAR_34);
    VAR_37 = VAR_36 + 1;
   }
  }
  else {
   FUNC_4(VAR_19, *VAR_34);
   FUNC_4(VAR_11, VAR_33);
   return VAR_29;
  }

  VAR_34++;
 }

 if (VAR_36 == VAR_24) {

  VAR_36 = '0';
  VAR_37 = '1';
  FUNC_4(VAR_18, VAR_36);
 }



 if (VAR_32 == VAR_30) {
  FUNC_4(VAR_14);
  return VAR_29;
 }



 if (VAR_32 != VAR_23) {
  FUNC_4(VAR_15);
  return VAR_29;
 }



 while (VAR_36 < VAR_37) {



  VAR_38 = FUNC_8(VAR_36);

  if (VAR_38 == VAR_3) {
   VAR_41 = FUNC_1();

   FUNC_4(VAR_4, VAR_36);
   FUNC_11("%s", FUNC_5(VAR_41));

   if (VAR_35 != VAR_21) {
    return VAR_29;
   }

   VAR_36++;
   continue;
  }



  VAR_41 = FUNC_7(VAR_38, ((void*)0), ((void*)0),
   &VAR_39, &VAR_40, ((void*)0), ((void*)0));

  if (VAR_41 != VAR_2) {
   FUNC_4(VAR_4, VAR_36);
   FUNC_11("%s", FUNC_5(VAR_41));

   FUNC_0(VAR_38);

   if (VAR_35 != VAR_21) {
    return VAR_29;
   }

   VAR_36++;
   continue;
  }

  if (VAR_39 == VAR_28) {



   FUNC_0(VAR_38);
   VAR_36++;
   continue;
  }

  if (VAR_40 & VAR_26) {



   FUNC_4(VAR_13, VAR_36);

   if (VAR_35 == VAR_21) {
    FUNC_4(VAR_6);
   }
   else if (VAR_35 == VAR_22) {
    FUNC_4(VAR_9);
    FUNC_0(VAR_38);
    return VAR_29;
   }
   else {
    if (FUNC_3(VAR_5, "yn") == 'n') {
     FUNC_0(VAR_38);
     return VAR_29;
    }
   }
  }

retry:
  VAR_41 = FUNC_6(
   VAR_38, (VAR_35 == VAR_21));

  if (VAR_41 == VAR_0) {

   FUNC_4(VAR_12, VAR_36);

   if (VAR_35 == VAR_22) {
    FUNC_0(VAR_38);
    return VAR_29;
   }
   else if (VAR_35 == VAR_20) {

    int VAR_42;

    if (FUNC_2()) {
     VAR_42 = FUNC_3(VAR_16, "rc");
    }
    else {
     VAR_42 = FUNC_3(VAR_17, "rfc");
    }

    if (VAR_42 == 'f') {
     VAR_41 = FUNC_6(VAR_38, VAR_25);
    }
    else if (VAR_42 == 'c') {
     FUNC_0(VAR_38);
     return VAR_29;
    }
    else {
     goto retry;
    }
   }
  }

  FUNC_0(VAR_38);

  if (VAR_41 == VAR_2) {
   FUNC_4(VAR_8, VAR_36);
  }
  else if (VAR_41 != VAR_1) {
   FUNC_4(VAR_7, VAR_36);
   FUNC_11("%s", FUNC_5(VAR_41));

   if (VAR_35 != VAR_21) {
    return VAR_29;
   }
  }

  VAR_36++;
 }

 return VAR_31;
}
