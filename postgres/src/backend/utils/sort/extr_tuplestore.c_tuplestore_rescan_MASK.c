
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t activeptr; int status; int myfile; int truncated; TYPE_2__* readptrs; } ;
typedef TYPE_1__ Tuplestorestate ;
struct TYPE_5__ {int eflags; int eof_reached; long offset; int file; int current; } ;
typedef TYPE_2__ TSReadPointer ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,long,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;

void
FUNC_6(Tuplestorestate *VAR_3)
{
 TSReadPointer *VAR_4 = &VAR_3->readptrs[VAR_3->activeptr];

 FUNC_0(VAR_4->eflags & VAR_1);
 FUNC_0(!VAR_3->truncated);

 switch (VAR_3->status)
 {
  case 130:
   VAR_4->eof_reached = 0;
   VAR_4->current = 0;
   break;
  case 128:
   VAR_4->eof_reached = 0;
   VAR_4->file = 0;
   VAR_4->offset = 0L;
   break;
  case 129:
   VAR_4->eof_reached = 0;
   if (FUNC_1(VAR_3->myfile, 0, 0L, VAR_2) != 0)
    FUNC_3(VAR_0,
      (FUNC_4(),
       FUNC_5("could not seek in tuplestore temporary file: %m")));
   break;
  default:
   FUNC_2(VAR_0, "invalid tuplestore state");
   break;
 }
}
