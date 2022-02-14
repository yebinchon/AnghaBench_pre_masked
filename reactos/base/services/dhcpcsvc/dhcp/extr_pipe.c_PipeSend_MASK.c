
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef int COMM_DHCP_REPLY ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,int,int*,int *) ;

DWORD FUNC_1( COMM_DHCP_REPLY *VAR_1 ) {
    DWORD VAR_2 = 0;
    BOOL VAR_3 =
        FUNC_0( VAR_0,
                   VAR_1,
                   sizeof(*VAR_1),
                   &VAR_2,
                   ((void*)0) );
    return VAR_3 ? VAR_2 : -1;
}
