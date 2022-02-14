
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char type; int mdtm; int size; } ;
typedef TYPE_1__* FileInfoPtr ;
typedef int FileInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

void
FUNC_1(FileInfoPtr VAR_2)
{
 (void) FUNC_0(VAR_2, 0, sizeof(FileInfo));
 VAR_2->type = '-';
 VAR_2->size = VAR_1;
 VAR_2->mdtm = VAR_0;
}
