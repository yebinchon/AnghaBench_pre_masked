
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef int ULONG ;
typedef int NTSTATUS ;
typedef int IO_STATUS_BLOCK ;
typedef int HANDLE ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int *,int *,int *,int ,int *,int,int *,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int) ;

NTSTATUS FUNC_6( ULONG VAR_3 )
{
  HANDLE VAR_4;
  NTSTATUS VAR_5 = FUNC_5( &VAR_4, VAR_0 | VAR_1 );
  IO_STATUS_BLOCK VAR_6;

  FUNC_3("Called.\n");

  if( !FUNC_1(VAR_5) ) return VAR_5;

  VAR_5 = FUNC_2( VAR_4,
                                  ((void*)0),
                                  ((void*)0),
                                  ((void*)0),
                                  &VAR_6,
                                  VAR_2,
                                  &VAR_3,
                                  sizeof(USHORT),
                                  ((void*)0),
                                  0 );

  FUNC_4( VAR_4 );

  if (!FUNC_1(VAR_5)) {
      FUNC_0("deleteIpAddress(%lu) returning 0x%lx\n", VAR_3, VAR_5);
  }

  return VAR_5;
}
