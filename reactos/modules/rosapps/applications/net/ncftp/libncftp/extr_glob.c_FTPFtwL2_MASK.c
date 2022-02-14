
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int errNo; } ;
struct TYPE_15__ {TYPE_1__* first; } ;
struct TYPE_14__ {char* line; struct TYPE_14__* next; } ;
typedef TYPE_1__* LinePtr ;
typedef TYPE_2__ LineList ;
typedef int (* FTPFtwProc ) (TYPE_3__* const,char*,int ) ;
typedef TYPE_3__* FTPCIPtr ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__* const,char*) ;
 int FUNC_2 (TYPE_3__* const,char*) ;
 int FUNC_3 (TYPE_3__* const,TYPE_2__*,char*,int ) ;
 char* FUNC_4 (char*,char*,size_t) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_5 (char*,char) ;
 int * FUNC_6 (char*,char) ;
 int FUNC_7 (TYPE_3__* const,char*,int ) ;
 int FUNC_8 (TYPE_3__* const,char*,int ) ;

__attribute__((used)) static int
FUNC_9(const FTPCIPtr VAR_8, char *VAR_9, char *VAR_10, size_t VAR_11, FTPFtwProc VAR_12, int VAR_13)
{
 LineList VAR_14;
 LinePtr VAR_15;
 char *VAR_16, *VAR_17;
 int VAR_18;

 if (VAR_13 <= 0) {
  VAR_18 = VAR_8->errNo = VAR_3;
  return (VAR_18);
 }

 VAR_18 = FUNC_3(VAR_8, &VAR_14, "**", VAR_6);
 if (VAR_18 != VAR_7) {
  if (VAR_18 == VAR_2)
   VAR_18 = VAR_7;
  return (VAR_18);
 }

 for (VAR_15 = VAR_14.first;
  VAR_15 != ((void*)0);
  VAR_15 = VAR_15->next)
 {
  VAR_16 = VAR_15->line;
  if (VAR_16 == ((void*)0)) {
   VAR_8->errNo = VAR_0;
   break;
  }

  if ((VAR_16[0] == '.') && ((VAR_16[1] == '\0') || ((VAR_16[1] == '.') && (VAR_16[2] == '\0'))))
   continue;

  VAR_18 = FUNC_2(VAR_8, VAR_16);
  if (VAR_18 < 0) {


   continue;
  } else if (VAR_18 == 1) {

   VAR_17 = FUNC_4(VAR_9, VAR_16, VAR_11);
   VAR_18 = (*VAR_12)(VAR_8, VAR_9, VAR_4);
   if (VAR_18 != VAR_7)
    break;

   if ((FUNC_5(VAR_9, '/') == ((void*)0)) && (FUNC_6(VAR_9, '\\') != ((void*)0)))
    *VAR_17++ = '\\';
   else
    *VAR_17++ = '/';
   *VAR_17 = '\0';

   VAR_18 = FUNC_1(VAR_8, VAR_16);
   if (VAR_18 == VAR_7) {
    VAR_18 = FUNC_9(VAR_8, VAR_9, VAR_17, VAR_11, VAR_12, VAR_13 - 1);
    if (VAR_18 != VAR_7)
     break;
    if (FUNC_1(VAR_8, "..") < 0) {
     VAR_18 = VAR_1;
     VAR_8->errNo = VAR_1;
     break;
    }
   }

   *VAR_10 = '\0';
   if (VAR_18 != 0)
    break;
  } else {

   VAR_17 = FUNC_4(VAR_9, VAR_16, VAR_11);
   VAR_18 = (*VAR_12)(VAR_8, VAR_9, VAR_5);
   *VAR_10 = '\0';
   if (VAR_18 != 0)
    break;
  }
 }
 FUNC_0(&VAR_14);

 return (VAR_18);
}
