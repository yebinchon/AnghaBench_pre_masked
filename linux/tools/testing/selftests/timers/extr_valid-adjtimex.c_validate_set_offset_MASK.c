
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int,int) ;
 scalar_t__ FUNC_3 (int,int) ;
 int VAR_2 ;

int FUNC_4(void)
{
 FUNC_1("Testing ADJ_SETOFFSET... ");
 FUNC_0(VAR_2);


 if (FUNC_3(VAR_0 - 1, 1))
  return -1;

 if (FUNC_3(-VAR_0 + 1, 1))
  return -1;

 if (FUNC_3(-VAR_0 - 1, 1))
  return -1;

 if (FUNC_3(5 * VAR_0, 1))
  return -1;

 if (FUNC_3(-5 * VAR_0, 1))
  return -1;

 if (FUNC_3(5 * VAR_0 + VAR_0 / 2, 1))
  return -1;

 if (FUNC_3(-5 * VAR_0 - VAR_0 / 2, 1))
  return -1;

 if (FUNC_3(VAR_1 - 1, 0))
  return -1;

 if (FUNC_3(-VAR_1 + 1, 0))
  return -1;

 if (FUNC_3(-VAR_1 - 1, 0))
  return -1;

 if (FUNC_3(5 * VAR_1, 0))
  return -1;

 if (FUNC_3(-5 * VAR_1, 0))
  return -1;

 if (FUNC_3(5 * VAR_1 + VAR_1 / 2, 0))
  return -1;

 if (FUNC_3(-5 * VAR_1 - VAR_1 / 2, 0))
  return -1;


 if (FUNC_2(0, -1, 1))
  return -1;
 if (FUNC_2(0, -1, 0))
  return -1;
 if (FUNC_2(0, 2 * VAR_0, 1))
  return -1;
 if (FUNC_2(0, 2 * VAR_1, 0))
  return -1;
 if (FUNC_2(0, VAR_0, 1))
  return -1;
 if (FUNC_2(0, VAR_1, 0))
  return -1;
 if (FUNC_2(0, -VAR_0, 1))
  return -1;
 if (FUNC_2(0, -VAR_1, 0))
  return -1;

 FUNC_1("[OK]\n");
 return 0;
}
