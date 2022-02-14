
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int cwd ;
struct TYPE_6__ {int serverType; } ;
typedef int LineList ;
typedef int FileInfoListPtr ;
typedef int FileInfoList ;
typedef TYPE_1__* FTPCIPtr ;


 int FUNC_0 (int *,char* const,int,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,char* const) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,char* const) ;
 int FUNC_6 (TYPE_1__*,char*,int) ;
 int FUNC_7 (TYPE_1__*,char*,int *,char*,int,int*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int *,int ) ;
 int VAR_0 ;

int
FUNC_10(FTPCIPtr VAR_1, char *const VAR_2, FileInfoListPtr VAR_3)
{
 LineList VAR_4;
 FileInfoList VAR_5;
 char VAR_6[512];
 int VAR_7;

 if ((VAR_7 = FUNC_6(VAR_1, VAR_6, sizeof(VAR_6))) < 0)
  return (VAR_7);

 FUNC_8(VAR_3);

 if (VAR_2 == ((void*)0))
  return (-1);

 if (FUNC_5(VAR_1, VAR_2) < 0) {




  (void) FUNC_2(VAR_3, VAR_2);
  return (VAR_0);
 }


 if ((VAR_7 = FUNC_7(VAR_1, "", &VAR_4, "-lRa", 1, (int *) 0)) < 0) {
  if ((VAR_7 = FUNC_5(VAR_1, VAR_6)) < 0) {
   return (VAR_7);
  }
 }

 (void) FUNC_9(&VAR_5, &VAR_4, VAR_1->serverType);
 FUNC_4(&VAR_4);


 (void) FUNC_0(&VAR_5, VAR_2, 1, 1);
 (void) FUNC_1(VAR_3, &VAR_5);
 FUNC_3(&VAR_5);

 if ((VAR_7 = FUNC_5(VAR_1, VAR_6)) < 0) {
  return (VAR_7);
 }
 return (VAR_0);
}
