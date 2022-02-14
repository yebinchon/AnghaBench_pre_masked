
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct vertex_buffer {scalar_t__ Count; scalar_t__ Start; } ;
struct pixel_buffer {scalar_t__ count; scalar_t__ primitive; } ;
struct TYPE_8__ {int (* End ) (TYPE_2__*) ;} ;
struct TYPE_9__ {scalar_t__ Primitive; int BeginEndCount; int BeginEndTime; TYPE_1__ Driver; struct vertex_buffer* VB; struct pixel_buffer* PB; } ;
typedef TYPE_2__ GLcontext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5( GLcontext *VAR_4 )
{
   struct pixel_buffer *VAR_5 = VAR_4->PB;
   struct vertex_buffer *VAR_6 = VAR_4->VB;

   if (VAR_4->Primitive==VAR_0) {

      FUNC_0( VAR_4, VAR_1, "glEnd" );
      return;
   }

   if (VAR_6->Count > VAR_6->Start) {
      FUNC_3( VAR_4, VAR_2 );
   }
   if (VAR_5->count>0) {
      FUNC_1(VAR_4);
   }

   if (VAR_4->Driver.End) {
      (*VAR_4->Driver.End)(VAR_4);
   }

   VAR_5->primitive = VAR_4->Primitive = VAR_0;





}
