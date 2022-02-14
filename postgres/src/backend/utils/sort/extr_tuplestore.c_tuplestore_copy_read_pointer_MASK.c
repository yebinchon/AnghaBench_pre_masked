
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int readptrcount; int eflags; int status; int activeptr; int myfile; int writepos_offset; int writepos_file; TYPE_2__* readptrs; } ;
typedef TYPE_1__ Tuplestorestate ;
struct TYPE_5__ {scalar_t__ eflags; int offset; int file; int eof_reached; } ;
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
FUNC_7(Tuplestorestate *VAR_2,
        int VAR_3, int VAR_4)
{
 TSReadPointer *VAR_5 = &VAR_2->readptrs[VAR_3];
 TSReadPointer *VAR_6 = &VAR_2->readptrs[VAR_4];

 FUNC_0(VAR_3 >= 0 && VAR_3 < VAR_2->readptrcount);
 FUNC_0(VAR_4 >= 0 && VAR_4 < VAR_2->readptrcount);


 if (VAR_3 == VAR_4)
  return;

 if (VAR_6->eflags != VAR_5->eflags)
 {

  int VAR_7;
  int VAR_8;

  *VAR_6 = *VAR_5;
  VAR_7 = VAR_2->readptrs[0].eflags;
  for (VAR_8 = 1; VAR_8 < VAR_2->readptrcount; VAR_8++)
   VAR_7 |= VAR_2->readptrs[VAR_8].eflags;
  VAR_2->eflags = VAR_7;
 }
 else
  *VAR_6 = *VAR_5;

 switch (VAR_2->status)
 {
  case 130:
  case 128:

   break;
  case 129:
   if (VAR_4 == VAR_2->activeptr)
   {
    if (VAR_6->eof_reached)
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
         VAR_6->file, VAR_6->offset,
         VAR_1) != 0)
      FUNC_4(VAR_0,
        (FUNC_5(),
         FUNC_6("could not seek in tuplestore temporary file: %m")));
    }
   }
   else if (VAR_3 == VAR_2->activeptr)
   {
    if (!VAR_6->eof_reached)
     FUNC_2(VAR_2->myfile,
        &VAR_6->file,
        &VAR_6->offset);
   }
   break;
  default:
   FUNC_3(VAR_0, "invalid tuplestore state");
   break;
 }
}
