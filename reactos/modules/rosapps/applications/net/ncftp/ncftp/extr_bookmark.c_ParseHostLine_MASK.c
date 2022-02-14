
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int token ;
typedef int time_t ;
struct TYPE_4__ {int xferType; unsigned int port; char xferMode; scalar_t__ pass; scalar_t__ ldir; void* hasUTIME; scalar_t__ comment; scalar_t__ lastIP; void* isUnix; void* hasPASV; void* hasMDTM; void* hasSIZE; int lastCall; scalar_t__ dir; scalar_t__ acct; scalar_t__ user; scalar_t__ name; scalar_t__ bookmarkName; } ;
typedef TYPE_1__* BookmarkPtr ;


 int FUNC_0 (char*,scalar_t__,int ,int) ;
 int FUNC_1 (char) ;
 int FUNC_2 (scalar_t__,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 void* FUNC_4 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (char*,char*,long*) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,int ,scalar_t__) ;

int
FUNC_8(char *VAR_3, BookmarkPtr VAR_4)
{
 char VAR_5[128];
 char VAR_6[128];
 char *VAR_7, *VAR_8;
 char *VAR_9;
 long VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13, VAR_14, VAR_15;

 FUNC_3(VAR_4);
 VAR_7 = VAR_3;
 VAR_9 = VAR_5 + sizeof(VAR_5) - 1;
 VAR_12 = -1;
 for (VAR_11=1; ; VAR_11++) {
  if (*VAR_7 == '\0')
   break;





  for (VAR_8 = VAR_5; *VAR_7 != '\0'; ) {
   if ((*VAR_7 == '\\') && (VAR_7[1] != '\0')) {
    if (VAR_8 < VAR_9)
     *VAR_8++ = VAR_7[1];
    VAR_7 += 2;
   } else if (*VAR_7 == ',') {
    ++VAR_7;
    break;
   } else if ((*VAR_7 == '$') && (VAR_7[1] != '\0') && (VAR_7[2] != '\0')) {
    VAR_14 = FUNC_1(VAR_7[1]);
    VAR_15 = FUNC_1(VAR_7[2]);
    if ((VAR_14 >= 0) && (VAR_15 >= 0)) {
     VAR_13 = (VAR_14 << 4) | VAR_15;
     if (VAR_8 < VAR_9)
      *(unsigned char *)VAR_8++ = (unsigned int) VAR_13;
    }
    VAR_7 += 3;
   } else {
    if (VAR_8 < VAR_9)
     *VAR_8++ = *VAR_7;
    ++VAR_7;
   }
  }
  *VAR_8 = '\0';
  switch(VAR_11) {
   case 1: (void) FUNC_2(VAR_4->bookmarkName, VAR_5); break;
   case 2: (void) FUNC_2(VAR_4->name, VAR_5); break;
   case 3: (void) FUNC_2(VAR_4->user, VAR_5); break;
   case 4: (void) FUNC_2(VAR_4->pass, VAR_5); break;
   case 5: (void) FUNC_2(VAR_4->acct, VAR_5); break;
   case 6: (void) FUNC_2(VAR_4->dir, VAR_5);
     VAR_12 = 0;
     break;
   case 7:
    if (VAR_5[0] != '\0')
     VAR_4->xferType = (int) VAR_5[0];
    break;
   case 8:

    if (VAR_5[0] == '\0')
     VAR_4->port = (unsigned int) VAR_0;
    else
     VAR_4->port = (unsigned int) FUNC_4(VAR_5);
    break;
   case 9:
    (void) FUNC_5(VAR_5, "%lx", &VAR_10);
    VAR_4->lastCall = (time_t) VAR_10;
    break;
   case 10: VAR_4->hasSIZE = FUNC_4(VAR_5); break;
   case 11: VAR_4->hasMDTM = FUNC_4(VAR_5); break;
   case 12: VAR_4->hasPASV = FUNC_4(VAR_5); break;
   case 13: VAR_4->isUnix = FUNC_4(VAR_5);
     VAR_12 = 3;
     break;
   case 14: (void) FUNC_2(VAR_4->lastIP, VAR_5); break;
   case 15: (void) FUNC_2(VAR_4->comment, VAR_5); break;
   case 16:
   case 17:
   case 18:
   case 19:
    break;
   case 20: VAR_4->xferMode = VAR_5[0];
     VAR_12 = 7;
     break;
   case 21: VAR_4->hasUTIME = FUNC_4(VAR_5);
     break;
   case 22: (void) FUNC_2(VAR_4->ldir, VAR_5);
     VAR_12 = 8;
     break;
   default:
     VAR_12 = 99;
     goto done;
  }
 }
done:


 if (FUNC_7(VAR_4->pass, VAR_1, VAR_2) == 0) {
  FUNC_0(VAR_6, VAR_4->pass + VAR_2, FUNC_6(VAR_4->pass + VAR_2), 1);
  (void) FUNC_2(VAR_4->pass, VAR_6);
 }
 return (VAR_12);
}
