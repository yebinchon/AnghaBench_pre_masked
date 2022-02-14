
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ serverType; int errNo; void* hasBUFSIZE; void* hasSBUFSZ; void* hasSBUFSIZ; void* hasSTORBUFSIZE; void* hasRBUFSIZ; void* hasRBUFSZ; void* hasRETRBUFSIZE; int ietfCompatLevel; void* hasCLNT; void* hasMLSD; void* hasMLST; void* hasUTIME; void* hasREST; void* hasMDTM; void* hasSIZE; void* hasPASV; void* hasFEAT; void* NLSTfileParamWorks; int magic; } ;
struct TYPE_16__ {char* line; struct TYPE_16__* next; } ;
struct TYPE_14__ {TYPE_3__* first; } ;
struct TYPE_15__ {int printMode; TYPE_1__ msg; } ;
typedef TYPE_2__* ResponsePtr ;
typedef TYPE_3__* LinePtr ;
typedef TYPE_4__* FTPCIPtr ;


 int FUNC_0 (TYPE_4__* const,TYPE_2__*) ;
 int FUNC_1 (TYPE_4__* const,char*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 TYPE_2__* FUNC_3 () ;
 int FUNC_4 (TYPE_4__* const,TYPE_2__*,char*) ;
 int FUNC_5 (TYPE_4__* const,TYPE_2__*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_8 (int ,int ) ;
 char* FUNC_9 (char*,char*) ;

int
FUNC_10(const FTPCIPtr VAR_12)
{
 ResponsePtr VAR_13;
 int VAR_14;
 LinePtr VAR_15;
 char *VAR_16, *VAR_17;

 if (VAR_12 == ((void*)0))
  return (VAR_3);
 if (FUNC_8(VAR_12->magic, VAR_5))
  return (VAR_2);

 if (VAR_12->serverType == VAR_10) {




  VAR_12->hasPASV = VAR_0;
  VAR_12->hasSIZE = VAR_1;
  VAR_12->hasMDTM = VAR_1;
  VAR_12->hasREST = VAR_1;
  VAR_12->NLSTfileParamWorks = VAR_0;
  VAR_12->hasUTIME = VAR_1;
  VAR_12->hasCLNT = VAR_1;
  VAR_12->hasMLST = VAR_1;
  VAR_12->hasMLSD = VAR_1;
  return (VAR_6);
 }

 VAR_13 = FUNC_3();
 if (VAR_13 == ((void*)0)) {
  VAR_12->errNo = VAR_4;
  VAR_14 = VAR_12->errNo;
 } else {
  VAR_13->printMode = (VAR_7|VAR_8);
  VAR_14 = FUNC_4(VAR_12, VAR_13, "FEAT");
  if (VAR_14 < VAR_6) {
   FUNC_0(VAR_12, VAR_13);
   return (VAR_14);
  } else if (VAR_14 != 2) {





    if (VAR_12->serverType == VAR_11) {
    VAR_12->hasPASV = VAR_0;
    VAR_12->hasSIZE = VAR_0;
    VAR_12->hasMDTM = VAR_0;
    VAR_12->hasREST = VAR_0;
    VAR_12->NLSTfileParamWorks = VAR_0;
   } else if (VAR_12->serverType == VAR_9) {
    VAR_12->hasPASV = VAR_0;
    VAR_12->hasSIZE = VAR_0;
    VAR_12->hasMDTM = VAR_0;
    VAR_12->hasREST = VAR_0;
    VAR_12->NLSTfileParamWorks = VAR_0;
   }





   VAR_12->hasMLST = VAR_1;
   VAR_12->hasMLSD = VAR_1;
  } else {
   VAR_12->hasFEAT = VAR_0;

   for (VAR_15 = VAR_13->msg.first; VAR_15 != ((void*)0); VAR_15 = VAR_15->next) {







    VAR_16 = VAR_15->line;
    if (*VAR_16++ != ' ')
     continue;
    if (FUNC_2(VAR_16, "PASV", 4) == 0) {
     VAR_12->hasPASV = VAR_0;
    } else if (FUNC_2(VAR_16, "SIZE", 4) == 0) {
     VAR_12->hasSIZE = VAR_0;
    } else if (FUNC_2(VAR_16, "MDTM", 4) == 0) {
     VAR_12->hasMDTM = VAR_0;
    } else if (FUNC_2(VAR_16, "REST", 4) == 0) {
     VAR_12->hasREST = VAR_0;
    } else if (FUNC_2(VAR_16, "UTIME", 5) == 0) {
     VAR_12->hasUTIME = VAR_0;
    } else if (FUNC_2(VAR_16, "MLST", 4) == 0) {
     VAR_12->hasMLST = VAR_0;
     VAR_12->hasMLSD = VAR_0;
     FUNC_1(VAR_12, VAR_16 + 5);
    } else if (FUNC_2(VAR_16, "CLNT", 4) == 0) {
     VAR_12->hasCLNT = VAR_0;
    } else if (FUNC_2(VAR_16, "Compliance Level: ", 18) == 0) {





     VAR_12->ietfCompatLevel = FUNC_6(VAR_16 + 18);
    }
   }
  }

  FUNC_5(VAR_12, VAR_13);
  VAR_14 = FUNC_4(VAR_12, VAR_13, "HELP SITE");
  if (VAR_14 == 2) {
   for (VAR_15 = VAR_13->msg.first; VAR_15 != ((void*)0); VAR_15 = VAR_15->next) {
    VAR_16 = VAR_15->line;
    if (FUNC_9(VAR_16, "RETRBUFSIZE") != ((void*)0))
     VAR_12->hasRETRBUFSIZE = VAR_0;
    if (FUNC_9(VAR_16, "RBUFSZ") != ((void*)0))
     VAR_12->hasRBUFSZ = VAR_0;

    if (
     ((VAR_17 = FUNC_9(VAR_16, "RBUFSIZ")) != ((void*)0)) &&
     (
       (VAR_17 == VAR_16) ||
      ((VAR_17 > VAR_16) && (!FUNC_7(VAR_17[-1])))
     )
    )
     VAR_12->hasRBUFSIZ = VAR_0;
    if (FUNC_9(VAR_16, "STORBUFSIZE") != ((void*)0))
     VAR_12->hasSTORBUFSIZE = VAR_0;
    if (FUNC_9(VAR_16, "SBUFSIZ") != ((void*)0))
     VAR_12->hasSBUFSIZ = VAR_0;
    if (FUNC_9(VAR_16, "SBUFSZ") != ((void*)0))
     VAR_12->hasSBUFSZ = VAR_0;
    if (FUNC_9(VAR_16, "BUFSIZE") != ((void*)0))
     VAR_12->hasBUFSIZE = VAR_0;
   }
  }
  FUNC_0(VAR_12, VAR_13);
 }

 return (VAR_6);
}
