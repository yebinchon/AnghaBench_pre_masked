
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (scalar_t__) ;

uint32_t FUNC_3( uint32_t *VAR_1 )
{

  uint32_t VAR_2, VAR_3, VAR_4;
  FUNC_0("_flash_used_end:%08x\n", (uint32_t)VAR_0);
  if(VAR_0>0){
    VAR_4 = FUNC_1( FUNC_2 ( (uint32_t)VAR_0 - 1), ((void*)0), &VAR_3 );
    if( VAR_1 )
      *VAR_1 = VAR_4 + 1;
    return VAR_3 + 1;
  } else {
    VAR_4 = FUNC_1( 0, &VAR_2, ((void*)0) );
    if( VAR_1 )
      *VAR_1 = VAR_4;
    return VAR_2;
  }
}
