
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct script_callback {struct script_callback* next; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct script_callback* VAR_7 ;
 int FUNC_2 (int *) ;
 int VAR_8 ;
 int FUNC_3 (struct script_callback*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_9 ;

void FUNC_12(void)
{
 if (!VAR_9)
  return;
 FUNC_2(&VAR_8);



 int VAR_10 = 0;

 FUNC_10(&VAR_6);

 struct script_callback *VAR_11 = VAR_7;
 while (VAR_11) {
  struct script_callback *VAR_12 = VAR_11->next;
  FUNC_3(VAR_11);
  VAR_11 = VAR_12;

  ++VAR_10;
 }

 FUNC_11(&VAR_6);
 FUNC_9(&VAR_6);

 FUNC_0(VAR_0, "[Scripting] Total detached callbacks: %d",
      VAR_10);



 FUNC_10(&VAR_2);



 VAR_1 = 1;
 FUNC_1(&VAR_3);

 FUNC_11(&VAR_2);

 FUNC_7(VAR_4);
 FUNC_8(VAR_5, ((void*)0));

 FUNC_9(&VAR_2);
 FUNC_6(VAR_4);

 VAR_9 = 0;
}
