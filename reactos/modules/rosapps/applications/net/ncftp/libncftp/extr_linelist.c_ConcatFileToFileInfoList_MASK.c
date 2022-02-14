
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * lname; int * rname; int relname; } ;
typedef int FileInfoListPtr ;
typedef TYPE_1__ FileInfo ;


 int * FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;

int
FUNC_3(FileInfoListPtr VAR_0, char *VAR_1)
{
 FileInfo VAR_2;

 FUNC_1(&VAR_2);
 VAR_2.relname = FUNC_2(VAR_1);
 VAR_2.rname = ((void*)0);
 VAR_2.lname = ((void*)0);

 if (FUNC_0(VAR_0, &VAR_2) == ((void*)0))
  return (-1);
 return (0);
}
