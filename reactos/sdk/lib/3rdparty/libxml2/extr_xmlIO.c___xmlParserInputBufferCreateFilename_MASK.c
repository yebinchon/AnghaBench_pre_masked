
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int avail_in; scalar_t__ next_in; } ;
typedef TYPE_1__ z_stream ;
typedef TYPE_2__* xmlParserInputBufferPtr ;
typedef int xmlCharEncoding ;
struct TYPE_8__ {scalar_t__ (* matchcallback ) (char const*) ;int (* closecallback ) (void*) ;void* (* opencallback ) (char const*) ;int readcallback; } ;
struct TYPE_7__ {int compressed; int (* closecallback ) (void*) ;int readcallback; void* context; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*,char*,int) ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 scalar_t__ FUNC_6 (char const*) ;
 void* FUNC_7 (char const*) ;
 int FUNC_8 (void*) ;
 TYPE_2__* FUNC_9 (int ) ;
 void* FUNC_10 (char const*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_11 () ;
 void* FUNC_12 (char const*) ;

xmlParserInputBufferPtr
FUNC_13(const char *VAR_3, xmlCharEncoding VAR_4) {
    xmlParserInputBufferPtr VAR_5;
    int VAR_6 = 0;
    void *VAR_7 = ((void*)0);

    if (VAR_0 == 0)
 FUNC_11();

    if (VAR_3 == ((void*)0)) return(((void*)0));





    if (VAR_7 == ((void*)0)) {
 for (VAR_6 = VAR_1 - 1;VAR_6 >= 0;VAR_6--) {
     if ((VAR_2[VAR_6].matchcallback != ((void*)0)) &&
  (VAR_2[VAR_6].matchcallback(VAR_3) != 0)) {
  VAR_7 = VAR_2[VAR_6].opencallback(VAR_3);
  if (VAR_7 != ((void*)0)) {
      break;
  }
     }
 }
    }
    if (VAR_7 == ((void*)0)) {
 return(((void*)0));
    }




    VAR_5 = FUNC_9(VAR_4);
    if (VAR_5 != ((void*)0)) {
 VAR_5->context = VAR_7;
 VAR_5->readcallback = VAR_2[VAR_6].readcallback;
 VAR_5->closecallback = VAR_2[VAR_6].closecallback;
    }
    else
      VAR_2[VAR_6].closecallback (VAR_7);

    return(VAR_5);
}
