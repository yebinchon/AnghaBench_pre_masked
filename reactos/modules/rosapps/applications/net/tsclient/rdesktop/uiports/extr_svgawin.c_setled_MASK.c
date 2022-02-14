
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,...) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3(int VAR_3, int VAR_4)
{
  int VAR_5;
  long int VAR_6;

  if (( VAR_5=FUNC_2("/dev/console", VAR_2)) != -1 )
  {
    if (FUNC_1 (VAR_5, VAR_0, &VAR_6) != -1)
    {
      VAR_6 &= 7;
      if (VAR_4)
        VAR_6 |= VAR_3;
      else
        VAR_6 &= ~VAR_3;
      FUNC_1 (VAR_5, VAR_1, VAR_6);
    }
    FUNC_0(VAR_5);
  }
}
