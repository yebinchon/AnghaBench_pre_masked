
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sqlca_t {int dummy; } ;
struct descriptor {int count; struct descriptor* name; int result; int * items; int next; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sqlca_t* FUNC_0 () ;
 int FUNC_1 (int *,int ) ;
 struct descriptor* FUNC_2 (int,int) ;
 int FUNC_3 (struct descriptor*) ;
 int FUNC_4 (struct sqlca_t*) ;
 int FUNC_5 (int,int ,int ,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (struct descriptor*) ;
 int FUNC_8 (struct descriptor*,char const*) ;
 int FUNC_9 (char const*) ;

bool
FUNC_10(int VAR_2, const char *VAR_3)
{
 struct descriptor *VAR_4;
 struct sqlca_t *VAR_5 = FUNC_0();

 if (VAR_5 == ((void*)0))
 {
  FUNC_5(VAR_2, VAR_0,
       VAR_1, ((void*)0));
  return 0;
 }

 FUNC_4(VAR_5);
 VAR_4 = (struct descriptor *) FUNC_2(sizeof(struct descriptor), VAR_2);
 if (!VAR_4)
  return 0;
 VAR_4->next = FUNC_6();
 VAR_4->name = FUNC_2(FUNC_9(VAR_3) + 1, VAR_2);
 if (!VAR_4->name)
 {
  FUNC_3(VAR_4);
  return 0;
 }
 VAR_4->count = -1;
 VAR_4->items = ((void*)0);
 VAR_4->result = FUNC_1(((void*)0), 0);
 if (!VAR_4->result)
 {
  FUNC_3(VAR_4->name);
  FUNC_3(VAR_4);
  FUNC_5(VAR_2, VAR_0, VAR_1, ((void*)0));
  return 0;
 }
 FUNC_8(VAR_4->name, VAR_3);
 FUNC_7(VAR_4);
 return 1;
}
