
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UNICODE_STRING ;
typedef int OBJECT_ATTRIBUTES ;
typedef scalar_t__ NTSTATUS ;
typedef scalar_t__ HANDLE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,scalar_t__,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__*,int ,int *,int ) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static BOOL FUNC_5( HANDLE VAR_4, const char *VAR_5 )
{
    NTSTATUS VAR_6;
    UNICODE_STRING VAR_7;
    OBJECT_ATTRIBUTES VAR_8;
    HANDLE VAR_9 = 0;

    FUNC_3(&VAR_7, VAR_5);
    FUNC_0(&VAR_8, &VAR_7, VAR_2, VAR_4, ((void*)0));
    VAR_6 = FUNC_2(&VAR_9, VAR_1, &VAR_8, VAR_0);
    FUNC_4(&VAR_7);
    if (VAR_9) FUNC_1( VAR_9 );
    return (VAR_6 == VAR_3);
}
