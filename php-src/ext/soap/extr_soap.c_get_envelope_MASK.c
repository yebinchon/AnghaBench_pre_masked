
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xmlNodePtr ;
struct TYPE_5__ {scalar_t__ type; struct TYPE_5__* next; } ;
typedef void* SOAP_GLOBAL ;


 void* VAR_0 ;
 char* VAR_1 ;
 void* VAR_2 ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*,char*,char*) ;
 int FUNC_1 (char*,char*,int *,int *,int *) ;

__attribute__((used)) static xmlNodePtr FUNC_2(xmlNodePtr VAR_5, int *VAR_6, char **VAR_7) {
 while (VAR_5 != ((void*)0)) {
  if (VAR_5->type == VAR_4) {
   if (FUNC_0(VAR_5,"Envelope",VAR_1)) {
    *VAR_6 = VAR_0;
    *VAR_7 = VAR_1;
    SOAP_GLOBAL(VAR_8) = VAR_0;
    return VAR_5;
   }

   if (FUNC_0(VAR_5,"Envelope",VAR_3)) {
    *VAR_6 = VAR_2;
    *VAR_7 = VAR_3;
    SOAP_GLOBAL(VAR_9) = VAR_2;
    return VAR_5;
   }

   FUNC_1("VersionMismatch", "Wrong Version", ((void*)0), ((void*)0), ((void*)0));
  }
  VAR_5 = VAR_5->next;
 }

 return ((void*)0);
}
