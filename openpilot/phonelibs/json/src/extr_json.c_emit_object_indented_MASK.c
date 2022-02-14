
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* head; } ;
struct TYPE_6__ {struct TYPE_6__* next; int key; TYPE_1__ children; } ;
typedef int SB ;
typedef TYPE_2__ JsonNode ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,TYPE_2__ const*,char const*,int) ;
 int FUNC_2 (int *,char) ;
 int FUNC_3 (int *,char const*) ;

__attribute__((used)) static void FUNC_4(SB *VAR_0, const JsonNode *VAR_1, const char *VAR_2, int VAR_3)
{
 const JsonNode *VAR_4 = VAR_1->children.head;
 int VAR_5;

 if (VAR_4 == ((void*)0)) {
  FUNC_3(VAR_0, "{}");
  return;
 }

 FUNC_3(VAR_0, "{\n");
 while (VAR_4 != ((void*)0)) {
  for (VAR_5 = 0; VAR_5 < VAR_3 + 1; VAR_5++)
   FUNC_3(VAR_0, VAR_2);
  FUNC_0(VAR_0, VAR_4->key);
  FUNC_3(VAR_0, ": ");
  FUNC_1(VAR_0, VAR_4, VAR_2, VAR_3 + 1);

  VAR_4 = VAR_4->next;
  FUNC_3(VAR_0, VAR_4 != ((void*)0) ? ",\n" : "\n");
 }
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  FUNC_3(VAR_0, VAR_2);
 FUNC_2(VAR_0, '}');
}
