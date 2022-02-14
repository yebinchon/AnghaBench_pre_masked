
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {void* Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef int ULONG ;
typedef scalar_t__ NTSTATUS ;
typedef char* LPCWSTR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int,int *) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_7 (int ) ;

__attribute__((used)) static NTSTATUS FUNC_8( LPCWSTR VAR_3, UNICODE_STRING *VAR_4 )
{
    if (FUNC_1(VAR_3))
    {
        VAR_4->Buffer = FUNC_7(FUNC_2(VAR_3));
        return VAR_2;
    }
    if (VAR_3[0] == '#')
    {
        ULONG VAR_5;
        FUNC_4( VAR_4, VAR_3 + 1 );
        if (FUNC_5( VAR_4, 10, &VAR_5 ) != VAR_2 || FUNC_0(VAR_5))
            return VAR_1;
        VAR_4->Buffer = FUNC_7(VAR_5);
        return VAR_2;
    }
    FUNC_3( VAR_4, VAR_3 );
    FUNC_6( VAR_4, VAR_4, VAR_0 );
    return VAR_2;
}
