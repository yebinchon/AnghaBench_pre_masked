
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONGLONG ;
typedef int ULONG ;
typedef scalar_t__ PVOID ;
typedef scalar_t__ PCHAR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__,int) ;
 int FUNC_1 (int *,scalar_t__,int ) ;

BOOLEAN FUNC_2
( ULONG VAR_2, ULONGLONG VAR_3,
  ULONG VAR_4, PVOID VAR_5 ) {
    int VAR_6;

    for(VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
    {
    FUNC_1(&VAR_1, VAR_3 + VAR_6, 0);
    FUNC_0(&VAR_1, ((PCHAR)VAR_5) + VAR_6 * 512, 512);
    }

    return VAR_0;
}
