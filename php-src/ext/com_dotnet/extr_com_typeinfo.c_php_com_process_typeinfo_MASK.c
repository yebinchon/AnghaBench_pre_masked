
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int zval ;
struct TYPE_17__ {scalar_t__ vt; TYPE_4__* lptdesc; } ;
struct TYPE_15__ {int wParamFlags; } ;
struct TYPE_20__ {TYPE_5__ tdesc; TYPE_3__ paramdesc; } ;
struct TYPE_13__ {scalar_t__ vt; } ;
struct TYPE_14__ {TYPE_1__ tdesc; } ;
struct TYPE_19__ {int invkind; scalar_t__ memid; int cParams; TYPE_8__* lprgelemdescParam; TYPE_2__ elemdescFunc; } ;
struct TYPE_18__ {scalar_t__ typekind; int cFuncs; int guid; } ;
struct TYPE_16__ {scalar_t__ vt; } ;
typedef TYPE_6__ TYPEATTR ;
typedef int OLECHAR ;
typedef int ITypeInfo ;
typedef int HashTable ;
typedef int GUID ;
typedef TYPE_7__ FUNCDESC ;
typedef TYPE_8__ ELEMDESC ;
typedef scalar_t__ DISPID ;
typedef char BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,scalar_t__,int **,int **,int *,int *) ;
 int FUNC_2 (int *,int,TYPE_7__**) ;
 int FUNC_3 (int *,scalar_t__,char*,int,unsigned int*) ;
 int FUNC_4 (int *,TYPE_6__**) ;
 int FUNC_5 (int *,TYPE_7__*) ;
 int FUNC_6 (int *,TYPE_6__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (char) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int *,char*,size_t) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *,int *,int) ;
 char* FUNC_11 (char,size_t*,int) ;
 char* FUNC_12 (int *,int) ;
 int FUNC_13 (char*,...) ;
 scalar_t__ FUNC_14 (int,int,int ) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (int ,char*,scalar_t__) ;
 int FUNC_17 (int *,scalar_t__,int *) ;
 int FUNC_18 (int *,int ,int *,int ,int ) ;
 int FUNC_19 (char*,size_t) ;

int FUNC_20(ITypeInfo *VAR_10, HashTable *VAR_11, int VAR_12, GUID *VAR_13, int VAR_14)
{
 TYPEATTR *VAR_15;
 FUNCDESC *VAR_16;
 int VAR_17;
 OLECHAR *VAR_18;
 char *VAR_19 = ((void*)0);
 size_t VAR_20;
 int VAR_21 = 0;

 if (FUNC_0(FUNC_4(VAR_10, &VAR_15))) {
  return 0;
 }


 if (VAR_11 == ((void*)0) || VAR_15->typekind == VAR_6) {

  if (VAR_13) {
   FUNC_10(VAR_13, &VAR_15->guid, sizeof(GUID));
  }

  if (VAR_12) {
   char *VAR_22;

   FUNC_1(VAR_10, VAR_3, &VAR_18, ((void*)0), ((void*)0), ((void*)0));
   VAR_19 = FUNC_11(VAR_18, &VAR_20, VAR_14);
   FUNC_7(VAR_18);

   VAR_22 = FUNC_12(&VAR_15->guid, VAR_14);
   FUNC_13("class %s { /* GUID=%s */\n", VAR_19, VAR_22);
   FUNC_9(VAR_22);

   FUNC_9(VAR_19);
  }

  if (VAR_11) {
   FUNC_18(VAR_11, 0, ((void*)0), VAR_9, 0);
  }


  for (VAR_17 = 0; VAR_17 < VAR_15->cFuncs; VAR_17++) {
   zval VAR_23;
   DISPID VAR_24 = 0;
   int VAR_25;

   if (FUNC_0(FUNC_2(VAR_10, VAR_17, &VAR_16)))
    break;

   VAR_25 = (VAR_16->invkind & VAR_0 || VAR_16->invkind & VAR_1);

   if (!VAR_25 || VAR_24 != VAR_16->memid) {

    VAR_24 = VAR_16->memid;

    FUNC_1(VAR_10, VAR_16->memid, &VAR_18, ((void*)0), ((void*)0), ((void*)0));
    VAR_19 = FUNC_11(VAR_18, &VAR_20, VAR_14);
    FUNC_7(VAR_18);

    if (VAR_12) {
     int VAR_26;
     char *VAR_27;
     size_t VAR_28;
     unsigned int VAR_29 = 0;
     BSTR *VAR_30;

     VAR_30 = (BSTR*)FUNC_14((VAR_16->cParams + 1), sizeof(BSTR), 0);

     FUNC_3(VAR_10, VAR_16->memid, VAR_30, VAR_16->cParams + 1, &VAR_29);

     FUNC_7(VAR_30[0]);

     FUNC_13("\t/* DISPID=%d */\n", VAR_16->memid);

     if (VAR_16->elemdescFunc.tdesc.vt != VAR_8) {
      FUNC_13("\t/* %s [%d] */\n",
        FUNC_15(VAR_16->elemdescFunc.tdesc.vt),
        VAR_16->elemdescFunc.tdesc.vt
        );
     }

     if (VAR_25) {

      FUNC_1(VAR_10, VAR_16->memid, ((void*)0), &VAR_18, ((void*)0), ((void*)0));
      if (VAR_18) {
       VAR_27 = FUNC_11(VAR_18, &VAR_28, VAR_14);
       FUNC_7(VAR_18);
       FUNC_13("\t/* %s */\n", VAR_27);
       FUNC_9(VAR_27);
      }

      FUNC_13("\tvar $%s;\n\n", VAR_19);

     } else {


      FUNC_13("\tfunction %s(\n", VAR_19);

      for (VAR_26 = 0; VAR_26 < VAR_16->cParams; VAR_26++) {
       ELEMDESC *VAR_31 = &VAR_16->lprgelemdescParam[VAR_26];

       FUNC_13("\t\t/* %s [%d] ", FUNC_15(VAR_31->tdesc.vt), VAR_31->tdesc.vt);

       if (VAR_31->paramdesc.wParamFlags & VAR_4)
        FUNC_13("[in]");
       if (VAR_31->paramdesc.wParamFlags & VAR_5)
        FUNC_13("[out]");

       if (VAR_31->tdesc.vt == VAR_7) {

        FUNC_13(" --> %s [%d] ",
          FUNC_15(VAR_31->tdesc.lptdesc->vt),
          VAR_31->tdesc.lptdesc->vt
          );
       }


       if (VAR_26+1 < (int)VAR_29) {
        VAR_27 = FUNC_11(VAR_30[VAR_26+1], &VAR_28, VAR_14);
        FUNC_7(VAR_30[VAR_26+1]);
       } else {
        VAR_27 = "???";
       }

       FUNC_13(" */ %s%s%c\n",
         VAR_31->tdesc.vt == VAR_7 ? "&$" : "$",
         VAR_27,
         VAR_26 == VAR_16->cParams - 1 ? ' ' : ','
         );

       if (VAR_26+1 < (int)VAR_29) {
        FUNC_9(VAR_27);
       }
      }

      FUNC_13("\t\t)\n\t{\n");

      FUNC_1(VAR_10, VAR_16->memid, ((void*)0), &VAR_18, ((void*)0), ((void*)0));
      if (VAR_18) {
       VAR_27 = FUNC_11(VAR_18, &VAR_28, VAR_14);
       FUNC_7(VAR_18);
       FUNC_13("\t\t/* %s */\n", VAR_27);
       FUNC_9(VAR_27);
      }

      FUNC_13("\t}\n");
     }

     FUNC_9(VAR_30);
    }

    if (VAR_11) {
     FUNC_19(VAR_19, VAR_20);
     FUNC_8(&VAR_23, VAR_19, VAR_20);
     FUNC_17(VAR_11, VAR_16->memid, &VAR_23);

     FUNC_9(VAR_19);
    }
   }
   FUNC_5(VAR_10, VAR_16);
  }

  if (VAR_12) {
   FUNC_13("}\n");
  }

  VAR_21 = 1;
 } else {
  FUNC_16(VAR_2, "That's not a dispatchable interface!! type kind = %08x", VAR_15->typekind);
 }

 FUNC_6(VAR_10, VAR_15);

 return VAR_21;
}
