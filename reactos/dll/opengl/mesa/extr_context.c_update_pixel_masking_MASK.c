
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int ColorMask; int IndexMask; void* SWmasking; } ;
struct TYPE_11__ {scalar_t__ (* IndexMask ) (TYPE_4__*,int) ;scalar_t__ (* ColorMask ) (TYPE_4__*,void*,void*,void*,void*) ;} ;
struct TYPE_13__ {TYPE_3__ Color; TYPE_2__ Driver; TYPE_1__* Visual; } ;
struct TYPE_10__ {scalar_t__ RGBAflag; } ;
typedef TYPE_4__ GLcontext ;
typedef void* GLboolean ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_4__*,void*,void*,void*,void*) ;
 scalar_t__ FUNC_1 (TYPE_4__*,void*,void*,void*,void*) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int) ;

__attribute__((used)) static void FUNC_4( GLcontext *VAR_2 )
{
   if (VAR_2->Visual->RGBAflag) {
      if (VAR_2->Color.ColorMask==0xf) {

         if (VAR_2->Driver.ColorMask) {
            (void) (*VAR_2->Driver.ColorMask)( VAR_2, VAR_1, VAR_1, VAR_1, VAR_1 );
         }
         VAR_2->Color.SWmasking = VAR_0;
      }
      else {



         GLboolean VAR_3 = (VAR_2->Color.ColorMask & 8) ? VAR_1 : VAR_0;
         GLboolean VAR_4 = (VAR_2->Color.ColorMask & 4) ? VAR_1 : VAR_0;
         GLboolean VAR_5 = (VAR_2->Color.ColorMask & 2) ? VAR_1 : VAR_0;
         GLboolean VAR_6 = (VAR_2->Color.ColorMask & 1) ? VAR_1 : VAR_0;
         if (VAR_2->Driver.ColorMask
             && (*VAR_2->Driver.ColorMask)( VAR_2, VAR_3, VAR_4, VAR_5, VAR_6 )) {
            VAR_2->Color.SWmasking = VAR_0;
         }
         else {
            VAR_2->Color.SWmasking = VAR_1;
         }
      }
   }
   else {
      if (VAR_2->Color.IndexMask==0xffffffff) {

         if (VAR_2->Driver.IndexMask) {
            (void) (*VAR_2->Driver.IndexMask)( VAR_2, 0xffffffff );
         }
         VAR_2->Color.SWmasking = VAR_0;
      }
      else {



         if (VAR_2->Driver.IndexMask
             && (*VAR_2->Driver.IndexMask)( VAR_2, VAR_2->Color.IndexMask )) {
            VAR_2->Color.SWmasking = VAR_0;
         }
         else {
            VAR_2->Color.SWmasking = VAR_1;
         }
      }
   }
}
