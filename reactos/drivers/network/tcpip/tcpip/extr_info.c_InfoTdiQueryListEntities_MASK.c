
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int TDI_STATUS ;
typedef int TDIEntityID ;
typedef int* PUINT ;
typedef int PNDIS_BUFFER ;
typedef int PCHAR ;
typedef int KIRQL ;


 int FUNC_0 (int ,int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;

TDI_STATUS FUNC_4(PNDIS_BUFFER VAR_5,
        PUINT VAR_6)
{
    UINT VAR_7, VAR_8, VAR_9 = *VAR_6;
    KIRQL VAR_10;

    FUNC_1(VAR_0,("About to copy %d TDIEntityIDs to user\n",
      VAR_1));

    FUNC_2(&VAR_3, &VAR_10);

    VAR_8 = VAR_1 * sizeof(TDIEntityID);
    *VAR_6 = VAR_8;

    FUNC_1(VAR_0,("BufSize: %d, NeededSize: %d\n", VAR_9, VAR_8));

    if (VAR_9 < VAR_8 || !VAR_5)
    {
 FUNC_3( &VAR_3, VAR_10 );


 return VAR_4;
    }


    for( VAR_7 = 0; VAR_7 < VAR_1; VAR_7++ ) {
 FUNC_0(VAR_5,
    VAR_7 * sizeof(TDIEntityID),
    (PCHAR)&VAR_2[VAR_7],
    sizeof(TDIEntityID));
    }

    FUNC_3(&VAR_3, VAR_10);

    return VAR_4;
}
