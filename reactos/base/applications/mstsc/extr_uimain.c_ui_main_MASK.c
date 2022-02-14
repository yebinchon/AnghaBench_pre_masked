
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,scalar_t__*,int ,int ,int ) ;

int
FUNC_4(void)
{
  uint32 VAR_11;


  VAR_11 = VAR_2;
  if (VAR_6[0] != 0)
  {
    VAR_11 |= VAR_1;
  }
  if (!FUNC_3(VAR_8, VAR_11, VAR_4, VAR_6,
                   VAR_9, VAR_3, VAR_0))
  {
    return 0;
  }

  FUNC_0(VAR_10, VAR_5, VAR_7);

  if (!FUNC_1())
  {
    return 0;
  }

  return FUNC_2();
}
