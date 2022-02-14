
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* typname; void* nspname; scalar_t__ remoteid; } ;
typedef int MemoryContext ;
typedef TYPE_1__ LogicalRepTyp ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *,void*,int ,int*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 void* FUNC_4 (void*) ;

void
FUNC_5(LogicalRepTyp *VAR_3)
{
 MemoryContext VAR_4;
 LogicalRepTyp *VAR_5;
 bool VAR_6;

 if (VAR_2 == ((void*)0))
  FUNC_2();




 VAR_5 = FUNC_1(VAR_2, (void *) &VAR_3->remoteid,
      VAR_0, &VAR_6);

 if (VAR_6)
  FUNC_3(VAR_5);


 VAR_5->remoteid = VAR_3->remoteid;
 VAR_4 = FUNC_0(VAR_1);
 VAR_5->nspname = FUNC_4(VAR_3->nspname);
 VAR_5->typname = FUNC_4(VAR_3->typname);
 FUNC_0(VAR_4);
}
