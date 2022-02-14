
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {void* errNo; int magic; } ;
struct TYPE_10__ {TYPE_1__* first; } ;
struct TYPE_9__ {char* line; struct TYPE_9__* next; } ;
typedef TYPE_1__* LinePtr ;
typedef TYPE_2__ LineList ;
typedef TYPE_3__* FTPCIPtr ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__* const,char*,char const* const,char*) ;
 int FUNC_2 (TYPE_3__* const,TYPE_2__*,char const* const,int const) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ,int ) ;

int
FUNC_4(const FTPCIPtr VAR_6, const char *const VAR_7, const char *const VAR_8, const int VAR_9)
{
 LineList VAR_10;
 LinePtr VAR_11;
 char *VAR_12;
 int VAR_13, VAR_14;

 if (VAR_6 == ((void*)0))
  return (VAR_2);
 if (FUNC_3(VAR_6->magic, VAR_4))
  return (VAR_1);

 VAR_14 = FUNC_2(VAR_6, &VAR_10, VAR_7, VAR_9);
 if (VAR_14 != VAR_5)
  return (VAR_14);

 for (VAR_14 = VAR_5, VAR_11 = VAR_10.first;
  VAR_11 != ((void*)0);
  VAR_11 = VAR_11->next)
 {
  VAR_12 = VAR_11->line;
  if (VAR_12 == ((void*)0)) {
   VAR_14 = VAR_0;
   VAR_6->errNo = VAR_0;
   break;
  }
  VAR_13 = FUNC_1(VAR_6, "SITE CHMOD %s %s", VAR_8, VAR_12);
  if (VAR_13 < 0) {
   VAR_14 = VAR_13;
   break;
  }
  if (VAR_13 != 2) {
   VAR_14 = VAR_3;
   VAR_6->errNo = VAR_3;
  }
 }
 FUNC_0(&VAR_10);
 return (VAR_14);
}
