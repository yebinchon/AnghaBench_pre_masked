
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int public; int (* SetupWorkerPtr ) (int *) ;} ;
struct TYPE_11__ {int pipeRevRead; int pipeRevWrite; } ;
typedef TYPE_1__ ParallelSlot ;
typedef TYPE_2__ ArchiveHandle ;
typedef int Archive ;


 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_3 (TYPE_2__*,int*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(ArchiveHandle *VAR_2, ParallelSlot *VAR_3)
{
 int VAR_4[2];


 VAR_4[VAR_0] = VAR_3->pipeRevRead;
 VAR_4[VAR_1] = VAR_3->pipeRevWrite;
 VAR_2 = FUNC_0(VAR_2);


 FUNC_4(VAR_3, VAR_2);




 (VAR_2->SetupWorkerPtr) ((Archive *) VAR_2);




 FUNC_3(VAR_2, VAR_4);




 FUNC_4(VAR_3, ((void*)0));
 FUNC_2(&(VAR_2->public));
 FUNC_1(VAR_2);
}
