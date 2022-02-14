
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* face_buffer; void* build_buffer; } ;
struct TYPE_3__ {scalar_t__ state; int request_cx; int request_cy; int *** chunks; TYPE_2__ rm; void* face_buffer; void* build_buffer; int request_received; } ;
typedef TYPE_1__ mesh_worker ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int,int ***,TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int,int) ;
 void* FUNC_7 (int ) ;

int FUNC_8(void *VAR_6)
{
   mesh_worker *VAR_7 = VAR_6;
   VAR_7->face_buffer = FUNC_7(VAR_1);
   VAR_7->build_buffer = FUNC_7(VAR_0);




   for(;;) {
      int VAR_8,VAR_9;
      int VAR_10,VAR_11;


      FUNC_1(VAR_7->request_received);


      FUNC_3(VAR_7->state == VAR_3);
      VAR_10 = VAR_7->request_cx;
      VAR_11 = VAR_7->request_cy;


      VAR_7->state = VAR_4;


      for (VAR_9=0; VAR_9 < 4; ++VAR_9)
         for (VAR_8=0; VAR_8 < 4; ++VAR_8)
            VAR_7->chunks[VAR_9][VAR_8] = FUNC_6(VAR_10-1 + VAR_8, VAR_11-1 + VAR_9);


      VAR_7->rm.build_buffer = VAR_7->build_buffer;
      VAR_7->rm.face_buffer = VAR_7->face_buffer;
      FUNC_4(VAR_10, VAR_11, VAR_7->chunks, &VAR_7->rm);
      VAR_7->state = VAR_2;






      FUNC_0(VAR_5);
      for (VAR_9=0; VAR_9 < 4; ++VAR_9)
         for (VAR_8=0; VAR_8 < 4; ++VAR_8) {
            FUNC_5(VAR_7->chunks[VAR_9][VAR_8]);
            VAR_7->chunks[VAR_9][VAR_8] = ((void*)0);
         }
      FUNC_2(VAR_5);
   }
   return 0;
}
