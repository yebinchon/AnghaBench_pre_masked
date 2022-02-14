
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int text ;
struct debug_expect {scalar_t__ debug; } ;
typedef int PGP_Context ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct debug_expect*,int) ;
 int FUNC_3 (int *,int *,int ,struct debug_expect*) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_8(PGP_Context **VAR_1, int VAR_2,
    text *VAR_3, struct debug_expect *VAR_4)
{
 int VAR_5 = FUNC_4(VAR_1);

 FUNC_2(VAR_4, VAR_2);

 if (VAR_5 == 0 && VAR_3 != ((void*)0))
  VAR_5 = FUNC_3(*VAR_1, (uint8 *) FUNC_0(VAR_3),
       FUNC_1(VAR_3), VAR_4);

 if (VAR_5)
  FUNC_6(VAR_5);

 if (VAR_4->debug)
  FUNC_7(VAR_0);

 FUNC_5(*VAR_1, VAR_2);
}
