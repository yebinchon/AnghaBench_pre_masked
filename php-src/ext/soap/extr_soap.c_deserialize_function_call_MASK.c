
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_44__ TYPE_9__ ;
typedef struct TYPE_43__ TYPE_8__ ;
typedef struct TYPE_42__ TYPE_7__ ;
typedef struct TYPE_41__ TYPE_6__ ;
typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_1__ ;
typedef struct TYPE_35__ TYPE_12__ ;
typedef struct TYPE_34__ TYPE_11__ ;
typedef struct TYPE_33__ TYPE_10__ ;


typedef int zval ;
typedef TYPE_5__* xmlNodePtr ;
typedef TYPE_6__* xmlDocPtr ;
typedef TYPE_7__* xmlAttrPtr ;
struct TYPE_43__ {int mustUnderstand; int num_params; struct TYPE_43__* next; int retval; int * parameters; TYPE_12__* function; TYPE_11__* hdr; int function_name; } ;
typedef TYPE_8__ soapHeader ;
struct TYPE_44__ {int s; int member_0; } ;
typedef TYPE_9__ smart_str ;
typedef TYPE_10__* sdlSoapBindingFunctionPtr ;
typedef TYPE_11__* sdlSoapBindingFunctionHeaderPtr ;
typedef int * sdlPtr ;
typedef TYPE_12__* sdlFunctionPtr ;
struct TYPE_42__ {TYPE_1__* children; struct TYPE_42__* next; int * ns; } ;
struct TYPE_41__ {int children; } ;
struct TYPE_40__ {scalar_t__ type; struct TYPE_40__* children; struct TYPE_40__* next; TYPE_2__* ns; TYPE_7__* properties; int name; } ;
struct TYPE_39__ {scalar_t__ bindingType; } ;
struct TYPE_38__ {scalar_t__ headers; } ;
struct TYPE_37__ {scalar_t__ href; } ;
struct TYPE_36__ {scalar_t__ content; } ;
struct TYPE_35__ {int bindingAttributes; TYPE_4__* binding; scalar_t__ functionName; } ;
struct TYPE_34__ {int encode; } ;
struct TYPE_33__ {scalar_t__ style; TYPE_3__ input; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_7__*,char*,char*) ;
 int FUNC_5 (TYPE_5__*,TYPE_12__*,int*,int **) ;
 void* FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 void* FUNC_9 (int *,TYPE_5__*,int *) ;
 TYPE_7__* FUNC_10 (TYPE_7__*,char*,char*) ;
 TYPE_12__* FUNC_11 (int *,int *) ;
 TYPE_5__* FUNC_12 (int ,int*,char**) ;
 int FUNC_13 (int *,int ,TYPE_5__*) ;
 int FUNC_14 (TYPE_8__*,int ,int) ;
 scalar_t__ FUNC_15 (TYPE_5__*,char*,char*) ;
 int FUNC_16 (int ,char*,int ) ;
 int FUNC_17 (TYPE_9__*) ;
 int FUNC_18 (TYPE_9__*,char) ;
 int FUNC_19 (TYPE_9__*,int ,int ) ;
 int FUNC_20 (TYPE_9__*,char*) ;
 int FUNC_21 (TYPE_9__*) ;
 int FUNC_22 (char*,char*,int *,int *,int *) ;
 scalar_t__ FUNC_23 (char*,char*) ;
 TYPE_11__* FUNC_24 (scalar_t__,int ) ;

__attribute__((used)) static sdlFunctionPtr FUNC_25(sdlPtr VAR_13, xmlDocPtr VAR_14, char* VAR_15, zval *VAR_16, int *VAR_17, zval **VAR_18, int *VAR_19, soapHeader **VAR_20)
{
 char* VAR_21 = ((void*)0);
 xmlNodePtr VAR_22,VAR_23,VAR_24,VAR_25,VAR_26;
 xmlAttrPtr VAR_27;
 sdlFunctionPtr VAR_28;

 FUNC_8();


 VAR_23 = FUNC_12(VAR_14->children, VAR_19, &VAR_21);
 if (!VAR_23) {
  FUNC_22("Client", "looks like we got XML without \"Envelope\" element", ((void*)0), ((void*)0), ((void*)0));
 }

 VAR_27 = VAR_23->properties;
 while (VAR_27 != ((void*)0)) {
  if (VAR_27->ns == ((void*)0)) {
   FUNC_22("Client", "A SOAP Envelope element cannot have non Namespace qualified attributes", ((void*)0), ((void*)0), ((void*)0));
  } else if (FUNC_4(VAR_27,"encodingStyle",VAR_10)) {
   if (*VAR_19 == VAR_6) {
    FUNC_22("Client", "encodingStyle cannot be specified on the Envelope", ((void*)0), ((void*)0), ((void*)0));
   } else if (FUNC_23((char*)VAR_27->children->content,VAR_4) != 0) {
    FUNC_22("Client", "Unknown data encoding style", ((void*)0), ((void*)0), ((void*)0));
   }
  }
  VAR_27 = VAR_27->next;
 }


 VAR_24 = ((void*)0);
 VAR_22 = VAR_23->children;
 while (VAR_22 != ((void*)0) && VAR_22->type != VAR_12) {
  VAR_22 = VAR_22->next;
 }
 if (VAR_22 != ((void*)0) && FUNC_15(VAR_22,"Header",VAR_21)) {
  VAR_24 = VAR_22;
  VAR_22 = VAR_22->next;
 }


 VAR_25 = ((void*)0);
 while (VAR_22 != ((void*)0) && VAR_22->type != VAR_12) {
  VAR_22 = VAR_22->next;
 }
 if (VAR_22 != ((void*)0) && FUNC_15(VAR_22,"Body",VAR_21)) {
  VAR_25 = VAR_22;
  VAR_22 = VAR_22->next;
 }
 while (VAR_22 != ((void*)0) && VAR_22->type != VAR_12) {
  VAR_22 = VAR_22->next;
 }
 if (VAR_25 == ((void*)0)) {
  FUNC_22("Client", "Body must be present in a SOAP envelope", ((void*)0), ((void*)0), ((void*)0));
 }
 VAR_27 = VAR_25->properties;
 while (VAR_27 != ((void*)0)) {
  if (VAR_27->ns == ((void*)0)) {
   if (*VAR_19 == VAR_6) {
    FUNC_22("Client", "A SOAP Body element cannot have non Namespace qualified attributes", ((void*)0), ((void*)0), ((void*)0));
   }
  } else if (FUNC_4(VAR_27,"encodingStyle",VAR_10)) {
   if (*VAR_19 == VAR_6) {
    FUNC_22("Client", "encodingStyle cannot be specified on the Body", ((void*)0), ((void*)0), ((void*)0));
   } else if (FUNC_23((char*)VAR_27->children->content,VAR_4) != 0) {
    FUNC_22("Client", "Unknown data encoding style", ((void*)0), ((void*)0), ((void*)0));
   }
  }
  VAR_27 = VAR_27->next;
 }

 if (VAR_22 != ((void*)0) && *VAR_19 == VAR_6) {
  FUNC_22("Client", "A SOAP 1.2 envelope can contain only Header and Body", ((void*)0), ((void*)0), ((void*)0));
 }

 VAR_26 = ((void*)0);
 VAR_22 = VAR_25->children;
 while (VAR_22 != ((void*)0)) {
  if (VAR_22->type == VAR_12) {





   VAR_26 = VAR_22;
   break;
  }
  VAR_22 = VAR_22->next;
 }
 if (VAR_26 == ((void*)0)) {
  VAR_28 = FUNC_11(VAR_13, ((void*)0));
  if (VAR_28 != ((void*)0)) {
   FUNC_1(VAR_16, (char *)VAR_28->functionName);
  } else {
   FUNC_22("Client", "looks like we got \"Body\" without function call", ((void*)0), ((void*)0), ((void*)0));
  }
 } else {
  if (*VAR_19 == VAR_2) {
   VAR_27 = FUNC_10(VAR_26->properties,"encodingStyle",VAR_5);
   if (VAR_27 && FUNC_23((char*)VAR_27->children->content,VAR_4) != 0) {
    FUNC_22("Client","Unknown Data Encoding Style", ((void*)0), ((void*)0), ((void*)0));
   }
  } else {
   VAR_27 = FUNC_10(VAR_26->properties,"encodingStyle",VAR_10);
   if (VAR_27 && FUNC_23((char*)VAR_27->children->content,VAR_9) != 0) {
    FUNC_22("DataEncodingUnknown","Unknown Data Encoding Style", ((void*)0), ((void*)0), ((void*)0));
   }
  }
  VAR_28 = FUNC_9(VAR_13, VAR_26, VAR_16);
  if (VAR_13 != ((void*)0) && VAR_28 == ((void*)0)) {
   if (*VAR_19 == VAR_6) {
    FUNC_22("rpc:ProcedureNotPresent","Procedure not present", ((void*)0), ((void*)0), ((void*)0));
   } else {
    FUNC_16(VAR_1, "Procedure '%s' not present", VAR_26->name);
   }
  }
 }

 *VAR_20 = ((void*)0);
 if (VAR_24) {
  soapHeader *VAR_29, *VAR_30 = ((void*)0);

  VAR_27 = VAR_24->properties;
  while (VAR_27 != ((void*)0)) {
   if (VAR_27->ns == ((void*)0)) {
    FUNC_22("Client", "A SOAP Header element cannot have non Namespace qualified attributes", ((void*)0), ((void*)0), ((void*)0));
   } else if (FUNC_4(VAR_27,"encodingStyle",VAR_10)) {
    if (*VAR_19 == VAR_6) {
     FUNC_22("Client", "encodingStyle cannot be specified on the Header", ((void*)0), ((void*)0), ((void*)0));
    } else if (FUNC_23((char*)VAR_27->children->content,VAR_4) != 0) {
     FUNC_22("Client", "Unknown data encoding style", ((void*)0), ((void*)0), ((void*)0));
    }
   }
   VAR_27 = VAR_27->next;
  }
  VAR_22 = VAR_24->children;
  while (VAR_22 != ((void*)0)) {
   if (VAR_22->type == VAR_12) {
    xmlNodePtr VAR_31 = VAR_22;
    int VAR_32 = 0;

    if (*VAR_19 == VAR_2) {
     VAR_27 = FUNC_10(VAR_31->properties,"encodingStyle",VAR_5);
     if (VAR_27 && FUNC_23((char*)VAR_27->children->content,VAR_4) != 0) {
      FUNC_22("Client","Unknown Data Encoding Style", ((void*)0), ((void*)0), ((void*)0));
     }
     VAR_27 = FUNC_10(VAR_31->properties,"actor",VAR_21);
     if (VAR_27 != ((void*)0)) {
      if (FUNC_23((char*)VAR_27->children->content,VAR_3) != 0 &&
          (VAR_15 == ((void*)0) || FUNC_23((char*)VAR_27->children->content,VAR_15) != 0)) {
        goto ignore_header;
      }
     }
    } else if (*VAR_19 == VAR_6) {
     VAR_27 = FUNC_10(VAR_31->properties,"encodingStyle",VAR_10);
     if (VAR_27 && FUNC_23((char*)VAR_27->children->content,VAR_9) != 0) {
      FUNC_22("DataEncodingUnknown","Unknown Data Encoding Style", ((void*)0), ((void*)0), ((void*)0));
     }
     VAR_27 = FUNC_10(VAR_31->properties,"role",VAR_21);
     if (VAR_27 != ((void*)0)) {
      if (FUNC_23((char*)VAR_27->children->content,VAR_8) != 0 &&
          FUNC_23((char*)VAR_27->children->content,VAR_7) != 0 &&
          (VAR_15 == ((void*)0) || FUNC_23((char*)VAR_27->children->content,VAR_15) != 0)) {
        goto ignore_header;
      }
     }
    }
    VAR_27 = FUNC_10(VAR_31->properties,"mustUnderstand",VAR_21);
    if (VAR_27) {
     if (FUNC_23((char*)VAR_27->children->content,"1") == 0 ||
         FUNC_23((char*)VAR_27->children->content,"true") == 0) {
      VAR_32 = 1;
     } else if (FUNC_23((char*)VAR_27->children->content,"0") == 0 ||
                FUNC_23((char*)VAR_27->children->content,"false") == 0) {
      VAR_32 = 0;
     } else {
      FUNC_22("Client","mustUnderstand value is not boolean", ((void*)0), ((void*)0), ((void*)0));
     }
    }
    VAR_29 = FUNC_6(sizeof(soapHeader));
    FUNC_14(VAR_29, 0, sizeof(soapHeader));
    VAR_29->mustUnderstand = VAR_32;
    VAR_29->function = FUNC_9(VAR_13, VAR_31, &VAR_29->function_name);
    if (!VAR_29->function && VAR_13 && VAR_28 && VAR_28->binding && VAR_28->binding->bindingType == VAR_0) {
     sdlSoapBindingFunctionHeaderPtr VAR_33;
     sdlSoapBindingFunctionPtr VAR_34 = (sdlSoapBindingFunctionPtr)VAR_28->bindingAttributes;
     if (VAR_34->input.headers) {
      smart_str VAR_35 = {0};

      if (VAR_31->ns) {
       FUNC_20(&VAR_35, (char*)VAR_31->ns->href);
       FUNC_18(&VAR_35, ':');
      }
      FUNC_19(&VAR_35, FUNC_3(VAR_29->function_name), FUNC_2(VAR_29->function_name));
      FUNC_17(&VAR_35);
      if ((VAR_33 = FUNC_24(VAR_34->input.headers, VAR_35.s)) != ((void*)0)) {
       VAR_29->hdr = VAR_33;
      }
      FUNC_21(&VAR_35);
     }
    }
    if (VAR_29->hdr) {
     VAR_29->num_params = 1;
     VAR_29->parameters = FUNC_6(sizeof(zval));
     FUNC_13(&VAR_29->parameters[0], VAR_29->hdr->encode, VAR_31);
    } else {
     if (VAR_29->function && VAR_29->function->binding && VAR_29->function->binding->bindingType == VAR_0) {
      sdlSoapBindingFunctionPtr VAR_36 = (sdlSoapBindingFunctionPtr)VAR_29->function->bindingAttributes;
      if (VAR_36->style == VAR_11) {
       VAR_31 = VAR_31->children;
      }
     }
     FUNC_5(VAR_31, VAR_29->function, &VAR_29->num_params, &VAR_29->parameters);
    }
    FUNC_0(&VAR_29->retval);
    if (VAR_30 == ((void*)0)) {
     *VAR_20 = VAR_29;
    } else {
     VAR_30->next = VAR_29;
    }
    VAR_30 = VAR_29;
   }
ignore_header:
   VAR_22 = VAR_22->next;
  }
 }

 if (VAR_28 && VAR_28->binding && VAR_28->binding->bindingType == VAR_0) {
  sdlSoapBindingFunctionPtr VAR_37 = (sdlSoapBindingFunctionPtr)VAR_28->bindingAttributes;
  if (VAR_37->style == VAR_11) {
   VAR_26 = VAR_26->children;
  }
 } else {
  VAR_26 = VAR_26->children;
 }
 FUNC_5(VAR_26, VAR_28, VAR_17, VAR_18);

 FUNC_7();

 return VAR_28;
}
