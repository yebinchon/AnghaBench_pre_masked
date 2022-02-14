
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 () ;
 int VAR_6 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static int FUNC_11(void *VAR_7)
{
 while (!FUNC_1()) {
  FUNC_4(VAR_4);

  if (VAR_5) {
   FUNC_10(VAR_5);
   FUNC_8(&VAR_6);
  }

  FUNC_3();
  if (FUNC_1())
   goto out_kill;

  FUNC_7("Sleeping for 10 secs\n");
  FUNC_6(VAR_2);
  if (FUNC_1())
   goto out_kill;
  FUNC_5(VAR_0 * VAR_1);
 }

out_kill:
 FUNC_0(VAR_3);
 if (!FUNC_2())
  FUNC_9();

 return 0;
}
