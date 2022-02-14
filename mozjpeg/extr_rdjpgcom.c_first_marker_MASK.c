
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(void)
{
  int VAR_1, VAR_2;

  VAR_1 = FUNC_1();
  VAR_2 = FUNC_1();
  if (VAR_1 != 0xFF || VAR_2 != VAR_0)
    FUNC_0("Not a JPEG file");
  return VAR_2;
}
