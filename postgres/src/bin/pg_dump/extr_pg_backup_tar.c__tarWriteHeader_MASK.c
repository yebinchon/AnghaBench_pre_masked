
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tarFH; int fileLen; int targetFile; } ;
typedef TYPE_1__ TAR_MEMBER ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,int ) ;
 int FUNC_1 (char*,int ,int *,int ,int,int,int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(TAR_MEMBER *VAR_1)
{
 char VAR_2[512];

 FUNC_1(VAR_2, VAR_1->targetFile, ((void*)0), VAR_1->fileLen,
     0600, 04000, 02000, FUNC_2(((void*)0)));


 if (FUNC_0(VAR_2, 1, 512, VAR_1->tarFH) != 512)
  VAR_0;
}
