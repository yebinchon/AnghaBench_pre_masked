
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* current; TYPE_2__* input_options; scalar_t__ needs_enc_conversion; } ;
typedef TYPE_3__ xml_elem_data ;
struct TYPE_5__ {scalar_t__ encoding; } ;
struct TYPE_4__ {int text; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char const*,int) ;
 char* FUNC_2 (char const*,int,int*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(void *VAR_0,
                        const char *VAR_1,
                        int VAR_2)
{
   xml_elem_data* VAR_3 = (xml_elem_data*)VAR_0;
   if(VAR_3 && VAR_3->current) {


      if(VAR_3->needs_enc_conversion && VAR_3->input_options->encoding) {
         int VAR_4 = 0;
         char* VAR_5 = FUNC_2(VAR_1, VAR_2, &VAR_4, VAR_3->input_options->encoding);
         if(VAR_5) {
            VAR_2 = VAR_4;
            FUNC_1(&VAR_3->current->text, VAR_5, VAR_2);
            FUNC_0(VAR_5);
            return;
         }
      }
      FUNC_1(&VAR_3->current->text, VAR_1, VAR_2);
   }
}
