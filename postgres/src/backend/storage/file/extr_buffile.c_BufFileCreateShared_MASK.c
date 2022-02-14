
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int readOnly; int * files; int name; int * fileset; } ;
typedef int SharedFileSet ;
typedef int File ;
typedef TYPE_1__ BufFile ;


 int FUNC_0 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char const*) ;

BufFile *
FUNC_4(SharedFileSet *VAR_0, const char *VAR_1)
{
 BufFile *VAR_2;

 VAR_2 = FUNC_1(1);
 VAR_2->fileset = VAR_0;
 VAR_2->name = FUNC_3(VAR_1);
 VAR_2->files = (File *) FUNC_2(sizeof(File));
 VAR_2->files[0] = FUNC_0(VAR_2, 0);
 VAR_2->readOnly = 0;

 return VAR_2;
}
