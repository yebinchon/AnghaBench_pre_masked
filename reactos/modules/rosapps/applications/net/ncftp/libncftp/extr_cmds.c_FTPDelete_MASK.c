
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
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int const VAR_7 ;
 scalar_t__ FUNC_4 (int ,int ) ;

int
FUNC_5(const FTPCIPtr VAR_8, const char *const VAR_9, const int VAR_10, const int VAR_11)
{
 LineList VAR_12;
 LinePtr VAR_13;
 char *VAR_14;
 int VAR_15, VAR_16;

 if (VAR_8 == ((void*)0))
  return (VAR_2);
 if (FUNC_4(VAR_8->magic, VAR_5))
  return (VAR_1);

 VAR_16 = FUNC_2(VAR_8, &VAR_12, VAR_9, VAR_11);
 if (VAR_16 != VAR_6)
  return (VAR_16);

 for (VAR_16 = VAR_6, VAR_13 = VAR_12.first;
  VAR_13 != ((void*)0);
  VAR_13 = VAR_13->next)
 {
  VAR_14 = VAR_13->line;
  if (VAR_14 == ((void*)0)) {
   VAR_16 = VAR_0;
   VAR_8->errNo = VAR_0;
   break;
  }
  VAR_15 = FUNC_1(VAR_8, "DELE %s", VAR_14);
  if (VAR_15 < 0) {
   VAR_16 = VAR_15;
   break;
  }
  if (VAR_15 != 2) {
   if (VAR_10 != VAR_7) {
    VAR_16 = VAR_3;
    VAR_8->errNo = VAR_3;
   } else {
    VAR_15 = FUNC_1(VAR_8, "RMD %s", VAR_14);
    if (VAR_15 < 0) {
     VAR_16 = VAR_15;
     break;
    }
    if (VAR_15 != 2) {
     VAR_15 = FUNC_3(VAR_8, VAR_14);
     if (VAR_15 < 0) {
      VAR_16 = VAR_4;
      VAR_8->errNo = VAR_4;
     }
    }
   }
  }
 }
 FUNC_0(&VAR_12);
 return (VAR_16);
}
