
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,int,scalar_t__,int *) ;
 int FUNC_4 (int *,int ,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static void
FUNC_8(char *VAR_6)
{
  VAR_3 = FUNC_2(VAR_6, "rb");
  if (VAR_3 == ((void*)0))
    {
      FUNC_7("Can't open %s\n", VAR_6);
      FUNC_0(1);
    }


  FUNC_4(VAR_3, 0, VAR_0);
  VAR_5 = FUNC_5(VAR_3);


  VAR_2 = FUNC_6(VAR_5);
  if (VAR_2 == ((void*)0))
    {
      FUNC_1(VAR_3);
      FUNC_7("Out of memory\n");
      FUNC_0(1);
    }
  FUNC_4(VAR_3, 0, VAR_1);
  if (VAR_5 > 0)
    {
      if (FUNC_3 (VAR_2, 1, VAR_5, VAR_3) < 1)
        {
          FUNC_1(VAR_3);
          FUNC_7("Read error in file %s\n", VAR_6);
          FUNC_0(1);
        }
    }

  VAR_4 = 0;
}
