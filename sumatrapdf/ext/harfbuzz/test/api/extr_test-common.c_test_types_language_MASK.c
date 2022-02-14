
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * hb_language_t ;


 int * VAR_0 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (char*,int) ;
 int * FUNC_2 () ;
 int * FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4 (void)
{
  hb_language_t VAR_1 = FUNC_1 ("fa", -1);
  hb_language_t VAR_2 = FUNC_1 ("fa_IR", -1);
  hb_language_t VAR_3 = FUNC_1 ("fa-ir", -1);
  hb_language_t VAR_4 = FUNC_1 ("en", -1);

  FUNC_0 (VAR_0 == ((void*)0));

  FUNC_0 (VAR_1 != ((void*)0));
  FUNC_0 (VAR_2 != ((void*)0));
  FUNC_0 (VAR_2 == VAR_3);

  FUNC_0 (VAR_4 != ((void*)0));
  FUNC_0 (VAR_4 != VAR_1);


  FUNC_0 (VAR_4 == FUNC_1 ("en", -1));
  FUNC_0 (VAR_4 == FUNC_1 ("eN", -1));
  FUNC_0 (VAR_4 == FUNC_1 ("Enx", 2));

  FUNC_0 (VAR_0 == FUNC_1 (((void*)0), -1));
  FUNC_0 (VAR_0 == FUNC_1 ("", -1));
  FUNC_0 (VAR_0 == FUNC_1 ("en", 0));
  FUNC_0 (VAR_0 != FUNC_1 ("en", 1));
  FUNC_0 (((void*)0) == FUNC_3 (VAR_0));




  FUNC_0 (VAR_0 != FUNC_2 ());
}
