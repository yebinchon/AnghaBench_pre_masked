
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char const*,size_t) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(char VAR_4, const char *VAR_5, size_t VAR_6)
{
 if (VAR_0 || VAR_3)
  return 0;
 VAR_3 = 1;
 if (VAR_4)
  if (FUNC_1(&VAR_4, 1))
   goto fail;
 if (FUNC_0(VAR_2) >= 3)
 {
  uint32 VAR_7;

  VAR_7 = FUNC_2((uint32) (VAR_6 + 4));
  if (FUNC_1((char *) &VAR_7, 4))
   goto fail;
 }
 if (FUNC_1(VAR_5, VAR_6))
  goto fail;
 VAR_3 = 0;
 return 0;

fail:
 VAR_3 = 0;
 return VAR_1;
}
