
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_1 ()
{
  if (VAR_7 & VAR_0)
    {
      VAR_8 |= VAR_0;
      FUNC_0 (&"%cs:" [ VAR_6]);
    }
  if (VAR_7 & VAR_1)
    {
      VAR_8 |= VAR_1;
      FUNC_0 (&"%ds:" [ VAR_6]);
    }
  if (VAR_7 & VAR_5)
    {
      VAR_8 |= VAR_5;
      FUNC_0 (&"%ss:" [ VAR_6]);
    }
  if (VAR_7 & VAR_2)
    {
      VAR_8 |= VAR_2;
      FUNC_0 (&"%es:" [ VAR_6]);
    }
  if (VAR_7 & VAR_3)
    {
      VAR_8 |= VAR_3;
      FUNC_0 (&"%fs:" [ VAR_6]);
    }
  if (VAR_7 & VAR_4)
    {
      VAR_8 |= VAR_4;
      FUNC_0 (&"%gs:" [ VAR_6]);
    }
}
