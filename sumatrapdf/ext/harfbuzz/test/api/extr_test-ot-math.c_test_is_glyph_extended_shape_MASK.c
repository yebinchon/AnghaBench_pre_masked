
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hb_codepoint_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,int,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7 (void)
{
  hb_codepoint_t VAR_2;
  FUNC_5();

  FUNC_6("fonts/MathTestFontEmpty.otf");
  FUNC_2(FUNC_3 (VAR_1, "space", -1, &VAR_2));
  FUNC_2(!FUNC_4 (VAR_0, VAR_2));
  FUNC_1();

  FUNC_6("fonts/MathTestFontPartial1.otf");
  FUNC_2(FUNC_3 (VAR_1, "space", -1, &VAR_2));
  FUNC_2(!FUNC_4 (VAR_0, VAR_2));
  FUNC_1();

  FUNC_6("fonts/MathTestFontFull.otf");
  FUNC_2(FUNC_3 (VAR_1, "G", -1, &VAR_2));
  FUNC_2(!FUNC_4 (VAR_0, VAR_2));
  FUNC_2(FUNC_3 (VAR_1, "H", -1, &VAR_2));
  FUNC_2(FUNC_4 (VAR_0, VAR_2));
  FUNC_1();

  FUNC_0();
}
