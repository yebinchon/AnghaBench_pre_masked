
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* png_structp ;
typedef int png_infop ;
struct TYPE_10__ {int process_mode; int buffer_size; } ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;

void
FUNC_7(png_structp VAR_0, png_infop VAR_1)
{
   if(VAR_0 == ((void*)0)) return;
   switch (VAR_0->process_mode)
   {
      case 132:
      {
         FUNC_4(VAR_0, VAR_1);
         break;
      }
      case 134:
      {
         FUNC_2(VAR_0, VAR_1);
         break;
      }
      case 133:
      {
         FUNC_1(VAR_0);
         break;
      }
      case 128:
      {
         FUNC_0(VAR_0);
         break;
      }
      default:
      {
         VAR_0->buffer_size = 0;
         break;
      }
   }
}
