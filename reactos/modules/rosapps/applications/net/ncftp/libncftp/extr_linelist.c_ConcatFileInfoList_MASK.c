
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* first; } ;
struct TYPE_8__ {void* plug; void* rlinkto; void* rname; void* lname; void* relname; struct TYPE_8__* next; } ;
typedef TYPE_1__* FileInfoPtr ;
typedef TYPE_2__* FileInfoListPtr ;
typedef TYPE_1__ FileInfo ;


 int * FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 void* FUNC_1 (void*) ;

int
FUNC_2(FileInfoListPtr VAR_0, FileInfoListPtr VAR_1)
{
 FileInfoPtr VAR_2, VAR_3;
 FileInfo VAR_4;

 for (VAR_2 = VAR_1->first; VAR_2 != ((void*)0); VAR_2 = VAR_3) {
  VAR_3 = VAR_2->next;
  VAR_4 = *VAR_2;
  VAR_4.relname = FUNC_1(VAR_2->relname);
  VAR_4.lname = FUNC_1(VAR_2->lname);
  VAR_4.rname = FUNC_1(VAR_2->rname);
  VAR_4.rlinkto = FUNC_1(VAR_2->rlinkto);
  VAR_4.plug = FUNC_1(VAR_2->plug);
  if (FUNC_0(VAR_0, &VAR_4) == ((void*)0))
   return (-1);
 }
 return (0);
}
