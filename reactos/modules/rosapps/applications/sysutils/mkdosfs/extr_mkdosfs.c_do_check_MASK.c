
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (char*) ;
 long FUNC_3 (int ,char*,int) ;

__attribute__((used)) static long
FUNC_4 (char *VAR_3, int VAR_4, unsigned int VAR_5)
{
  long VAR_6;

  if (FUNC_1 (VAR_2, (loff_t)VAR_5 * VAR_0, VAR_1)
      != (loff_t)VAR_5 * VAR_0)
    FUNC_0 ("seek failed during testing for blocks");

  VAR_6 = FUNC_3 (VAR_2, VAR_3, VAR_4 * VAR_0);
  if (VAR_6 < 0)
    VAR_6 = 0;

  if (VAR_6 & (VAR_0 - 1))
    FUNC_2 ("Unexpected values in do_check: probably bugs\n");
  VAR_6 /= VAR_0;

  return VAR_6;
}
