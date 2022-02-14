
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int readptrcount; int activeptr; int status; int myfile; int writepos_offset; int writepos_file; TYPE_2__* readptrs; } ;
typedef TYPE_1__ Tuplestorestate ;
struct TYPE_5__ {int offset; int file; int eof_reached; } ;
typedef TYPE_2__ TSReadPointer ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;



 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;

void
FUNC_7(Tuplestorestate *VAR_2, int VAR_3)
{
 TSReadPointer *VAR_4;
 TSReadPointer *VAR_5;

 FUNC_0(VAR_3 >= 0 && VAR_3 < VAR_2->readptrcount);


 if (VAR_3 == VAR_2->activeptr)
  return;

 VAR_4 = &VAR_2->readptrs[VAR_3];
 VAR_5 = &VAR_2->readptrs[VAR_2->activeptr];

 switch (VAR_2->status)
 {
  case 130:
  case 128:

   break;
  case 129:





   if (!VAR_5->eof_reached)
    FUNC_2(VAR_2->myfile,
       &VAR_5->file,
       &VAR_5->offset);







   if (VAR_4->eof_reached)
   {
    if (FUNC_1(VAR_2->myfile,
        VAR_2->writepos_file,
        VAR_2->writepos_offset,
        VAR_1) != 0)
     FUNC_4(VAR_0,
       (FUNC_5(),
        FUNC_6("could not seek in tuplestore temporary file: %m")));
   }
   else
   {
    if (FUNC_1(VAR_2->myfile,
        VAR_4->file,
        VAR_4->offset,
        VAR_1) != 0)
     FUNC_4(VAR_0,
       (FUNC_5(),
        FUNC_6("could not seek in tuplestore temporary file: %m")));
   }
   break;
  default:
   FUNC_3(VAR_0, "invalid tuplestore state");
   break;
 }

 VAR_2->activeptr = VAR_3;
}
