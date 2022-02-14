
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int LowPart; } ;
struct TYPE_6__ {TYPE_1__ u; } ;
struct TYPE_7__ {TYPE_2__ EndOfFile; } ;
typedef int NTSTATUS ;
typedef int IO_STATUS_BLOCK ;
typedef int HANDLE ;
typedef TYPE_3__ FILE_STANDARD_INFORMATION ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,TYPE_3__*,int,int ) ;

size_t FUNC_3( HANDLE VAR_1 )
{
 FILE_STANDARD_INFORMATION VAR_2;
 IO_STATUS_BLOCK VAR_3;
 NTSTATUS VAR_4;

   VAR_4 = FUNC_2( VAR_1, &VAR_3, &VAR_2, sizeof VAR_2, VAR_0 );
 if( !FUNC_1( VAR_4 ) ){
  FUNC_0((0,"PICE_len: ZwQueryInformationFile error: %x\n", VAR_4));
  return 0;
 }

 return (size_t)VAR_2.EndOfFile.u.LowPart;
}
