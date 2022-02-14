
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int cwd ;
struct TYPE_11__ {int serverType; } ;
struct TYPE_10__ {TYPE_1__* first; } ;
struct TYPE_9__ {char* line; struct TYPE_9__* next; } ;
typedef TYPE_1__* LinePtr ;
typedef TYPE_2__* LineListPtr ;
typedef int LineList ;
typedef int FileInfoListPtr ;
typedef int FileInfoList ;
typedef TYPE_3__* FTPCIPtr ;


 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 int FUNC_6 (TYPE_3__*,char*,int) ;
 int FUNC_7 (TYPE_3__*,char*,int *,char*,int,int*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int *,int ) ;
 int VAR_0 ;

int
FUNC_10(FTPCIPtr VAR_1, LineListPtr VAR_2, FileInfoListPtr VAR_3)
{
 LinePtr VAR_4, VAR_5;
 LineList VAR_6;
 FileInfoList VAR_7;
 char VAR_8[512];
 int VAR_9;
 char *VAR_10;

 if ((VAR_9 = FUNC_6(VAR_1, VAR_8, sizeof(VAR_8))) < 0)
  return (VAR_9);

 FUNC_8(VAR_3);

 for (VAR_4 = VAR_2->first;
  VAR_4 != ((void*)0);
  VAR_4 = VAR_5)
 {
  VAR_5 = VAR_4->next;

  VAR_10 = VAR_4->line;
  if (VAR_10 == ((void*)0))
   continue;

  if (FUNC_5(VAR_1, VAR_10) < 0) {




   (void) FUNC_2(VAR_3, VAR_10);
   continue;
  }


  if ((VAR_9 = FUNC_7(VAR_1, "", &VAR_6, "-lRa", 1, (int *) 0)) < 0) {
   goto goback;
  }

  (void) FUNC_9(&VAR_7, &VAR_6, VAR_1->serverType);
  FUNC_4(&VAR_6);
  (void) FUNC_0(&VAR_7, VAR_10, 1, 1);
  (void) FUNC_1(VAR_3, &VAR_7);
  FUNC_3(&VAR_7);

goback:
  if ((VAR_9 = FUNC_5(VAR_1, VAR_8)) < 0) {
   return (VAR_9);
  }
 }
 return (VAR_0);
}
