
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int v; int * typeinfo; } ;
typedef TYPE_1__ php_com_dotnet_object ;
struct TYPE_7__ {int cImplTypes; } ;
typedef TYPE_2__ TYPEATTR ;
typedef int OLECHAR ;
typedef int MEMBERID ;
typedef int ITypeLib ;
typedef int ITypeInfo ;
typedef int IProvideClassInfo2 ;
typedef int IProvideClassInfo ;
typedef int HREFTYPE ;
typedef int GUID ;
typedef int CLSID ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ,int **) ;
 int FUNC_3 (int ,int *,void**) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int **,unsigned int*) ;
 int FUNC_9 (int *,int,int*) ;
 int FUNC_10 (int *,int ,int **) ;
 int FUNC_11 (int *,int,int *) ;
 int FUNC_12 (int *,TYPE_2__**) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,TYPE_2__*) ;
 int FUNC_15 (int *,int *,int ,int **,int *,unsigned short*) ;
 int FUNC_16 (int *,int *,int **) ;
 int FUNC_17 (int *) ;
 int VAR_8 ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int * FUNC_21 (char*,int ) ;
 int * FUNC_22 (char*,int ,int ) ;
 int FUNC_23 (int *,int ,char*) ;
 int FUNC_24 (char*) ;

ITypeInfo *FUNC_25(char *VAR_9, php_com_dotnet_object *VAR_10, char *VAR_11, int VAR_12)
{
 ITypeInfo *VAR_13 = ((void*)0);
 ITypeLib *VAR_14 = ((void*)0);
 int VAR_15 = 0;
 GUID VAR_16;

 if (VAR_10) {
  if (VAR_11 == ((void*)0) && VAR_12) {
   IProvideClassInfo2 *VAR_17;
   IProvideClassInfo *VAR_18;

   if (FUNC_18(FUNC_3(FUNC_19(&VAR_10->v), &VAR_5, (void**)&VAR_17))) {
    VAR_15 = FUNC_18(FUNC_4(VAR_17, VAR_3, &VAR_16));
    FUNC_5(VAR_17);
   }
   if (!VAR_15 && FUNC_18(FUNC_3(FUNC_19(&VAR_10->v), &VAR_4, (void**)&VAR_18))) {


    FUNC_23(((void*)0), VAR_2, "IProvideClassInfo: this code not yet written!");
    FUNC_6(VAR_18);
   }
  } else if (VAR_11 == ((void*)0)) {
   if (VAR_10->typeinfo) {
    FUNC_7(VAR_10->typeinfo);
    return VAR_10->typeinfo;
   } else {
    FUNC_2(FUNC_19(&VAR_10->v), 0, VAR_8, &VAR_13);
    if (VAR_13) {
     return VAR_13;
    }
   }
  } else if (VAR_11 && VAR_10->typeinfo) {
   unsigned int VAR_19;

   FUNC_8(VAR_10->typeinfo, &VAR_14, &VAR_19);
  } else if (VAR_9 == ((void*)0)) {
   FUNC_2(FUNC_19(&VAR_10->v), 0, VAR_8, &VAR_13);
   if (VAR_11) {
    unsigned int VAR_20;

    FUNC_8(VAR_13, &VAR_14, &VAR_20);

    if (VAR_14) {
     FUNC_13(VAR_13);
     VAR_13 = ((void*)0);
    }
   }
  }
 } else if (VAR_9) {

  VAR_14 = FUNC_21(VAR_9, VAR_1);
 }

 if (!VAR_15 && VAR_11 && VAR_14) {
  unsigned short VAR_21;
  MEMBERID VAR_22;
  OLECHAR *VAR_23 = FUNC_22(VAR_11, FUNC_24(VAR_11), VAR_0);

  VAR_21 = 1;
  if (FUNC_1(FUNC_15(VAR_14, VAR_23, 0, &VAR_13, &VAR_22, &VAR_21)) || VAR_21 == 0) {
   CLSID VAR_24;
   ITypeInfo *VAR_25;


   if (FUNC_18(FUNC_0(VAR_23, &VAR_24)) &&
     FUNC_18(FUNC_16(VAR_14, &VAR_24, &VAR_25))) {


    TYPEATTR *VAR_26;
    int VAR_27;

    FUNC_12(VAR_25, &VAR_26);

    for (VAR_27 = 0; VAR_27 < VAR_26->cImplTypes; VAR_27++) {
     HREFTYPE VAR_28;
     int VAR_29;

     if (FUNC_1(FUNC_9(VAR_25, VAR_27, &VAR_29))) {
      continue;
     }

     if ((VAR_12 && VAR_29 == (VAR_7|VAR_6)) ||
      (!VAR_12 && (VAR_29 & VAR_7) == 0)) {



      if (FUNC_18(FUNC_11(VAR_25, VAR_27, &VAR_28)))
       if (FUNC_18(FUNC_10(VAR_25, VAR_28, &VAR_13)))
        break;

     }
    }

    FUNC_14(VAR_25, VAR_26);
    FUNC_13(VAR_25);
   }
  }


  FUNC_20(VAR_23);
 } else if (VAR_15) {
  FUNC_16(VAR_14, &VAR_16, &VAR_13);
 }

 if (VAR_14) {
  FUNC_17(VAR_14);
 }

 return VAR_13;
}
