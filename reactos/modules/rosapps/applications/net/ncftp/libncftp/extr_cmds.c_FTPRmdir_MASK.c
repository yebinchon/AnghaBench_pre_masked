
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {void* errNo; int magic; } ;
struct TYPE_11__ {TYPE_1__* first; } ;
struct TYPE_10__ {char* line; struct TYPE_10__* next; } ;
typedef TYPE_1__* LinePtr ;
typedef TYPE_2__ LineList ;
typedef TYPE_3__* FTPCIPtr ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__* const,char*,char*) ;
 int FUNC_2 (TYPE_3__* const,TYPE_2__*,char const* const,int const) ;
 int FUNC_3 (TYPE_3__* const,char*) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int const VAR_6 ;
 scalar_t__ FUNC_4 (int ,int ) ;

int
FUNC_5(const FTPCIPtr VAR_7, const char *const VAR_8, const int VAR_9, const int VAR_10)
{
 LineList VAR_11;
 LinePtr VAR_12;
 char *VAR_13;
 int VAR_14, VAR_15;

 if (VAR_7 == ((void*)0))
  return (VAR_2);
 if (FUNC_4(VAR_7->magic, VAR_4))
  return (VAR_1);

 VAR_15 = FUNC_2(VAR_7, &VAR_11, VAR_8, VAR_10);
 if (VAR_15 != VAR_5)
  return (VAR_15);

 for (VAR_15 = VAR_5, VAR_12 = VAR_11.first;
  VAR_12 != ((void*)0);
  VAR_12 = VAR_12->next)
 {
  VAR_13 = VAR_12->line;
  if (VAR_13 == ((void*)0)) {
   VAR_15 = VAR_0;
   VAR_7->errNo = VAR_0;
   break;
  }
  VAR_14 = FUNC_1(VAR_7, "RMD %s", VAR_13);
  if (VAR_14 < 0) {
   VAR_15 = VAR_14;
   break;
  }
  if (VAR_14 != 2) {
   if (VAR_9 == VAR_6) {
    VAR_14 = FUNC_3(VAR_7, VAR_13);
    if (VAR_14 < 0) {
     VAR_15 = VAR_3;
     VAR_7->errNo = VAR_3;
    }
   } else {
    VAR_15 = VAR_3;
    VAR_7->errNo = VAR_3;
   }
  }
 }
 FUNC_0(&VAR_11);
 return (VAR_15);
}
