
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const track_t ;
typedef int CdIo_t ;


 scalar_t__ const VAR_0 ;
 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 int FUNC_2 (char*) ;

track_t
FUNC_3 (const CdIo_t *VAR_1)
{
  if (((void*)0) == VAR_1) {
    FUNC_2("Null CdIo object passed\n");
    return VAR_0;
  }

  {
    const track_t VAR_2 = FUNC_0(VAR_1);
    if ( VAR_0 != VAR_2 ) {
      const track_t VAR_3 = FUNC_1(VAR_1);
      if ( VAR_0 != VAR_3 )
 return VAR_2 + VAR_3 - 1;
    }
    return VAR_0;
  }
}
