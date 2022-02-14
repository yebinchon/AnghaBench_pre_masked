
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * next_result; int * result; int errorMessage; } ;
typedef int PGresult ;
typedef TYPE_1__ PGconn ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

PGresult *
FUNC_4(PGconn *VAR_1)
{
 PGresult *VAR_2;






 VAR_2 = VAR_1->result;
 if (!VAR_2)
  VAR_2 = FUNC_0(VAR_1, VAR_0);
 else
 {




  FUNC_3(&VAR_1->errorMessage);
  FUNC_2(&VAR_1->errorMessage,
        FUNC_1(VAR_2));
 }







 VAR_1->result = VAR_1->next_result;
 VAR_1->next_result = ((void*)0);

 return VAR_2;
}
