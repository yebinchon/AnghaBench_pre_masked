
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OsiSyncObj_t ;
typedef int OsiReturnVal_e ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ,scalar_t__*) ;

OsiReturnVal_e FUNC_2(OsiSyncObj_t* VAR_4)
{
 VAR_3 = VAR_1;
 if(VAR_2 == FUNC_1( *VAR_4, &VAR_3 ))
 {
  if( VAR_3 )
  {
   FUNC_0 ();
  }
 }
 return VAR_0;
}
