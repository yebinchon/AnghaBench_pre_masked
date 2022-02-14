
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UNICODE_STRING ;
typedef int * PHANDLE ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef int IO_STATUS_BLOCK ;
typedef int ACCESS_MASK ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int ,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int,int *,int *,int,int ) ;
 int VAR_4 ;
 int FUNC_3 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;

NTSTATUS FUNC_4(PHANDLE VAR_7, ACCESS_MASK VAR_8)
{
    UNICODE_STRING VAR_9;
    OBJECT_ATTRIBUTES VAR_10;
    IO_STATUS_BLOCK VAR_11;
    NTSTATUS VAR_12;

    FUNC_3( &VAR_9, VAR_6 );

    FUNC_0( &VAR_10,
                                &VAR_9,
                                VAR_4,
                                ((void*)0),
                                ((void*)0) );

    VAR_12 = FUNC_2( VAR_7,
                         VAR_8 | VAR_5,
                         &VAR_10,
                         &VAR_11,
                         VAR_0 | VAR_1,
                         VAR_2);




    if (!FUNC_1(VAR_12))
        *VAR_7 = VAR_3;

    return VAR_12;
}
