
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* chunk_server_done_processing; void* request_received; } ;
typedef TYPE_1__ mesh_worker ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,TYPE_1__*) ;
 int FUNC_2 () ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_3(void)
{
   int VAR_4;
   int VAR_5 = FUNC_2();

   if (VAR_5 > 6)
      VAR_3 = VAR_5/2;
   else if (VAR_5 > 4)
      VAR_3 = 4;
   else
      VAR_3 = VAR_5-1;
   VAR_3 *= 2;

   if (VAR_3 > VAR_0)
      VAR_3 = VAR_0;

   for (VAR_4=0; VAR_4 < VAR_3; ++VAR_4) {
      mesh_worker *VAR_6 = &VAR_1[VAR_4];
      VAR_6->request_received = FUNC_0(0);
      VAR_6->chunk_server_done_processing = FUNC_0(0);
      FUNC_1(VAR_2, "mesh worker", VAR_6);
   }
}
