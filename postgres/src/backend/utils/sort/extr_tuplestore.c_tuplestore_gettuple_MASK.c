
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t activeptr; int status; void** memtuples; int myfile; int truncated; int writepos_offset; int writepos_file; int memtupdeleted; int memtupcount; TYPE_2__* readptrs; } ;
typedef TYPE_1__ Tuplestorestate ;
struct TYPE_7__ {int eflags; int eof_reached; long offset; int file; int current; } ;
typedef TYPE_2__ TSReadPointer ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,long,int ) ;
 int FUNC_2 (int ,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_3 (TYPE_1__*,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 unsigned int FUNC_8 (TYPE_1__*,int) ;

__attribute__((used)) static void *
FUNC_9(Tuplestorestate *VAR_4, bool VAR_5,
     bool *VAR_6)
{
 TSReadPointer *VAR_7 = &VAR_4->readptrs[VAR_4->activeptr];
 unsigned int VAR_8;
 void *VAR_9;

 FUNC_0(VAR_5 || (VAR_7->eflags & VAR_1));

 switch (VAR_4->status)
 {
  case 130:
   *VAR_6 = 0;
   if (VAR_5)
   {
    if (VAR_7->eof_reached)
     return ((void*)0);
    if (VAR_7->current < VAR_4->memtupcount)
    {

     return VAR_4->memtuples[VAR_7->current++];
    }
    VAR_7->eof_reached = 1;
    return ((void*)0);
   }
   else
   {




    if (VAR_7->eof_reached)
    {
     VAR_7->current = VAR_4->memtupcount;
     VAR_7->eof_reached = 0;
    }
    else
    {
     if (VAR_7->current <= VAR_4->memtupdeleted)
     {
      FUNC_0(!VAR_4->truncated);
      return ((void*)0);
     }
     VAR_7->current--;
    }
    if (VAR_7->current <= VAR_4->memtupdeleted)
    {
     FUNC_0(!VAR_4->truncated);
     return ((void*)0);
    }
    return VAR_4->memtuples[VAR_7->current - 1];
   }
   break;

  case 128:

   if (VAR_7->eof_reached && VAR_5)
    return ((void*)0);




   FUNC_2(VAR_4->myfile,
      &VAR_4->writepos_file, &VAR_4->writepos_offset);
   if (!VAR_7->eof_reached)
    if (FUNC_1(VAR_4->myfile,
        VAR_7->file, VAR_7->offset,
        VAR_3) != 0)
     FUNC_5(VAR_0,
       (FUNC_6(),
        FUNC_7("could not seek in tuplestore temporary file: %m")));
   VAR_4->status = 129;


  case 129:
   *VAR_6 = 1;
   if (VAR_5)
   {
    if ((VAR_8 = FUNC_8(VAR_4, 1)) != 0)
    {
     VAR_9 = FUNC_3(VAR_4, VAR_8);
     return VAR_9;
    }
    else
    {
     VAR_7->eof_reached = 1;
     return ((void*)0);
    }
   }
   if (FUNC_1(VAR_4->myfile, 0, -(long) sizeof(unsigned int),
       VAR_2) != 0)
   {

    VAR_7->eof_reached = 0;
    FUNC_0(!VAR_4->truncated);
    return ((void*)0);
   }
   VAR_8 = FUNC_8(VAR_4, 0);

   if (VAR_7->eof_reached)
   {
    VAR_7->eof_reached = 0;

   }
   else
   {



    if (FUNC_1(VAR_4->myfile, 0,
        -(long) (VAR_8 + 2 * sizeof(unsigned int)),
        VAR_2) != 0)
    {






     if (FUNC_1(VAR_4->myfile, 0,
         -(long) (VAR_8 + sizeof(unsigned int)),
         VAR_2) != 0)
      FUNC_5(VAR_0,
        (FUNC_6(),
         FUNC_7("could not seek in tuplestore temporary file: %m")));
     FUNC_0(!VAR_4->truncated);
     return ((void*)0);
    }
    VAR_8 = FUNC_8(VAR_4, 0);
   }






   if (FUNC_1(VAR_4->myfile, 0,
       -(long) VAR_8,
       VAR_2) != 0)
    FUNC_5(VAR_0,
      (FUNC_6(),
       FUNC_7("could not seek in tuplestore temporary file: %m")));
   VAR_9 = FUNC_3(VAR_4, VAR_8);
   return VAR_9;

  default:
   FUNC_4(VAR_0, "invalid tuplestore state");
   return ((void*)0);
 }
}
