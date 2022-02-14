
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UNICODE_STRING ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef int LPCWSTR ;
typedef int IO_STATUS_BLOCK ;
typedef int HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int *,int ,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int,int *,int *,int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int *,int ) ;

HANDLE FUNC_5 (LPCWSTR VAR_14, int VAR_15)
{
 DWORD VAR_16 = 0;
 DWORD VAR_17 = 0;
 UNICODE_STRING VAR_18;
 OBJECT_ATTRIBUTES VAR_19;
 IO_STATUS_BLOCK VAR_20;
 HANDLE VAR_21;
 NTSTATUS VAR_22;


 FUNC_0((0,"PICE_open: %S\n", VAR_14));

 if ( (VAR_15 & VAR_7 ) == VAR_7 )
  VAR_16 = VAR_4 | VAR_5;
 else if ( (VAR_15 & VAR_6 ) == VAR_6 )
  VAR_16 = VAR_4;
 else if ( (VAR_15 & VAR_13 ) == VAR_13 )
  VAR_16 = VAR_5;

 if ((VAR_15 & VAR_8) == VAR_8 )
  VAR_17 = VAR_3 | VAR_2 | VAR_1;
 else if ((VAR_15 & VAR_9) == VAR_9)
  VAR_17 = VAR_3 | VAR_2 | VAR_1;
 else if ((VAR_15 & VAR_10) == VAR_10)
  VAR_17 = VAR_3 | VAR_1;
 else if ((VAR_15 & VAR_11) == VAR_11 )
  VAR_17 = VAR_2 | VAR_1;
 else if ((VAR_15 & VAR_12) == VAR_12)
  VAR_17 = 0;

 FUNC_4 (&VAR_18, VAR_14);
   FUNC_1(&VAR_19,
                             &VAR_18,
                             0,
                             ((void*)0),
                             ((void*)0));

 VAR_22 = FUNC_3( &VAR_21,
                      VAR_16,
                      &VAR_19,
                      &VAR_20, VAR_17, VAR_0);

 if( !FUNC_2( VAR_22 ) ){
  FUNC_0((0,"PICE_open: NtOpenFile error: %x\n", VAR_22));
  return 0;
 }
 return VAR_21;
}
