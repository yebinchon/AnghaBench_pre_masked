
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {long numFiles; int readOnly; scalar_t__ resowner; int * files; int * fileset; int dirty; } ;
typedef int File ;
typedef TYPE_1__ BufFile ;


 int FUNC_0 (int) ;
 long VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int *,int) ;

long
FUNC_3(BufFile *VAR_2, BufFile *VAR_3)
{
 long VAR_4 = VAR_2->numFiles * VAR_0;
 int VAR_5 = VAR_2->numFiles + VAR_3->numFiles;
 int VAR_6;

 FUNC_0(VAR_2->fileset != ((void*)0));
 FUNC_0(VAR_3->readOnly);
 FUNC_0(!VAR_3->dirty);
 FUNC_0(VAR_3->fileset != ((void*)0));

 if (VAR_2->resowner != VAR_3->resowner)
  FUNC_1(VAR_1, "could not append BufFile with non-matching resource owner");

 VAR_2->files = (File *)
  FUNC_2(VAR_2->files, sizeof(File) * VAR_5);
 for (VAR_6 = VAR_2->numFiles; VAR_6 < VAR_5; VAR_6++)
  VAR_2->files[VAR_6] = VAR_3->files[VAR_6 - VAR_2->numFiles];
 VAR_2->numFiles = VAR_5;

 return VAR_4;
}
