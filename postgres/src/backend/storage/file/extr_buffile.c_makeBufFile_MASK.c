
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int readOnly; int * name; int * fileset; int * files; } ;
typedef int File ;
typedef TYPE_1__ BufFile ;


 TYPE_1__* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static BufFile *
FUNC_2(File VAR_0)
{
 BufFile *VAR_1 = FUNC_0(1);

 VAR_1->files = (File *) FUNC_1(sizeof(File));
 VAR_1->files[0] = VAR_0;
 VAR_1->readOnly = 0;
 VAR_1->fileset = ((void*)0);
 VAR_1->name = ((void*)0);

 return VAR_1;
}
