
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__** vec; } ;
struct TYPE_5__ {char* relname; scalar_t__ type; } ;
typedef TYPE_1__** FileInfoVec ;
typedef TYPE_1__* FileInfoPtr ;
typedef TYPE_3__* FileInfoListPtr ;
typedef int FILE ;


 int FUNC_0 (int ,char*,char*,char*) ;
 int FUNC_1 (int *,char*,char*,char*) ;

void
FUNC_2(FileInfoListPtr VAR_0, int VAR_1, FILE *VAR_2)
{
 char VAR_3[2];
 int VAR_4;
 int VAR_5;
 FileInfoVec VAR_6;
 FileInfoPtr VAR_7;

 VAR_3[0] = '\0';
 VAR_3[1] = '\0';
 VAR_6 = VAR_0->vec;

 for (VAR_4=0; ; VAR_4++) {
  VAR_7 = VAR_6[VAR_4];
  if (VAR_7 == ((void*)0))
   break;

  VAR_5 = (int) VAR_7->type;
  if (VAR_1 != 0) {
   if (VAR_5 == 'd')
    VAR_3[0] = '/';
   else
    VAR_3[0] = '\0';
  }

  (void) FUNC_1(VAR_2, "%s%s\n",
   VAR_7->relname,
   VAR_3
  );

  FUNC_0(0, "%s%s\n",
   VAR_7->relname,
   VAR_3
  );
 }
}
