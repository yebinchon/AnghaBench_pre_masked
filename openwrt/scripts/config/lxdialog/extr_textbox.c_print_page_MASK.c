
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* update_text_fn ) (int,char*,char*,void*) ;
typedef int WINDOW ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(WINDOW *VAR_4, int VAR_5, int VAR_6, update_text_fn
         VAR_7, void *VAR_8)
{
 int VAR_9, VAR_10 = 0;

 if (VAR_7) {
  char *VAR_11;

  for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
   FUNC_1();
  VAR_11 = VAR_2;
  FUNC_0(VAR_5);
  VAR_7(VAR_0, VAR_2 - VAR_0, VAR_11 - VAR_0, VAR_8);
 }

 VAR_3 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  FUNC_2(VAR_4, VAR_9, VAR_6);
  if (!VAR_10)
   VAR_3++;
  if (VAR_1 && !VAR_10)
   VAR_10 = 1;
 }
 FUNC_3(VAR_4);
}
