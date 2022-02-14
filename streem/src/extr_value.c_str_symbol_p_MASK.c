
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_string ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(strm_string VAR_2)
{
  const char* VAR_3 = FUNC_3(VAR_2);
  const char* VAR_4 = VAR_3 + FUNC_2(VAR_2);

  if (!FUNC_1((int)*VAR_3) && *VAR_3 != '_')
    return VAR_0;
  VAR_3++;
  while (VAR_3<VAR_4) {
    if (!FUNC_0((int)*VAR_3) && *VAR_3 != '_')
      return VAR_0;
    VAR_3++;
  }
  return VAR_1;
}
