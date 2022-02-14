
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int numFiles; scalar_t__* files; int isInterXact; int * fileset; int resowner; } ;
typedef int ResourceOwner ;
typedef scalar_t__ File ;
typedef TYPE_1__ BufFile ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__*,int) ;

__attribute__((used)) static void
FUNC_4(BufFile *VAR_1)
{
 File VAR_2;
 ResourceOwner VAR_3;


 VAR_3 = VAR_0;
 VAR_0 = VAR_1->resowner;

 if (VAR_1->fileset == ((void*)0))
  VAR_2 = FUNC_2(VAR_1->isInterXact);
 else
  VAR_2 = FUNC_1(VAR_1, VAR_1->numFiles);

 FUNC_0(VAR_2 >= 0);

 VAR_0 = VAR_3;

 VAR_1->files = (File *) FUNC_3(VAR_1->files,
         (VAR_1->numFiles + 1) * sizeof(File));
 VAR_1->files[VAR_1->numFiles] = VAR_2;
 VAR_1->numFiles++;
}
