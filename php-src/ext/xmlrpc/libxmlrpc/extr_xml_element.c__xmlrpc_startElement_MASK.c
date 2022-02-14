
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void* val; void* key; } ;
typedef TYPE_1__ xml_element_attr ;
struct TYPE_8__ {char* name; int attrs; struct TYPE_8__* parent; } ;
typedef TYPE_2__ xml_element ;
struct TYPE_9__ {TYPE_2__* current; } ;
typedef TYPE_3__ xml_elem_data ;


 int FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 void* FUNC_2 (char const*) ;
 TYPE_2__* FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void *VAR_0, const char *VAR_1, const char **VAR_2)
{
   xml_element *VAR_3;
   xml_elem_data* VAR_4 = (xml_elem_data*)VAR_0;
   const char** VAR_5 = VAR_2;

   if(VAR_4) {
      VAR_3 = VAR_4->current;

      VAR_4->current = FUNC_3();
      VAR_4->current->name = (char*)FUNC_2(VAR_1);
      VAR_4->current->parent = VAR_3;


      while(VAR_5 && *VAR_5) {
         xml_element_attr* VAR_6 = FUNC_1(sizeof(xml_element_attr));
         if(VAR_6) {
            VAR_6->key = FUNC_2(*VAR_5);
            VAR_6->val = FUNC_2(*(VAR_5+1));
            FUNC_0(&VAR_4->current->attrs, VAR_6);

            VAR_5 += 2;
         }
      }
   }
}
