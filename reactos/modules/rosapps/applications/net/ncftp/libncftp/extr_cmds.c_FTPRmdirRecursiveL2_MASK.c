
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {void* errNo; } ;
struct TYPE_12__ {TYPE_1__* first; } ;
struct TYPE_11__ {char* line; struct TYPE_11__* next; } ;
typedef TYPE_1__* LinePtr ;
typedef TYPE_2__ LineList ;
typedef TYPE_3__* FTPCIPtr ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__* const,char*) ;
 int FUNC_2 (TYPE_3__* const,char*,int ,int ) ;
 int FUNC_3 (TYPE_3__* const,TYPE_2__*,char*,int ) ;
 int FUNC_4 (TYPE_3__* const,char*,int ,int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_5(const FTPCIPtr VAR_7)
{
 LineList VAR_8;
 LinePtr VAR_9;
 char *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_3(VAR_7, &VAR_8, "**", VAR_4);
 if (VAR_11 != VAR_5) {
  return (VAR_11);
 }

 for (VAR_9 = VAR_8.first;
  VAR_9 != ((void*)0);
  VAR_9 = VAR_9->next)
 {
  VAR_10 = VAR_9->line;
  if (VAR_10 == ((void*)0)) {
   VAR_7->errNo = VAR_0;
   break;
  }

  if ((VAR_10[0] == '.') && ((VAR_10[1] == '\0') || ((VAR_10[1] == '.') && (VAR_10[2] == '\0'))))
   continue;

  if (FUNC_1(VAR_7, VAR_10) == VAR_5) {



   VAR_11 = FUNC_5(VAR_7);

   if (FUNC_1(VAR_7, "..") != VAR_5) {




    VAR_11 = VAR_1;
    VAR_7->errNo = VAR_1;
    return (VAR_11);
   }

   if ((VAR_11 < 0) && (VAR_11 != VAR_2))
    return (VAR_11);

   VAR_11 = FUNC_4(VAR_7, VAR_10, VAR_6, VAR_3);
   if (VAR_11 != VAR_5) {




    return (VAR_11);
   }
  } else {

   VAR_11 = FUNC_2(VAR_7, VAR_10, VAR_6, VAR_3);



  }
 }
 FUNC_0(&VAR_8);

 return (VAR_11);
}
