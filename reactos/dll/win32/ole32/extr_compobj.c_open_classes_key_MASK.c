
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int attr ;
typedef int WCHAR ;
typedef int UNICODE_STRING ;
struct TYPE_3__ {int Length; int * SecurityQualityOfService; int * SecurityDescriptor; scalar_t__ Attributes; int * ObjectName; int RootDirectory; } ;
typedef int REGSAM ;
typedef TYPE_1__ OBJECT_ATTRIBUTES ;
typedef int LSTATUS ;
typedef int HKEY ;
typedef int HANDLE ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,TYPE_1__*) ;
 int FUNC_1 (int *,int const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

LSTATUS FUNC_4( HKEY VAR_1, const WCHAR *VAR_2, REGSAM VAR_3, HKEY *VAR_4 )
{
    OBJECT_ATTRIBUTES VAR_5;
    UNICODE_STRING VAR_6;

    if (!(VAR_1 = FUNC_3( VAR_1, VAR_3 ))) return VAR_0;

    VAR_5.Length = sizeof(VAR_5);
    VAR_5.RootDirectory = VAR_1;
    VAR_5.ObjectName = &VAR_6;
    VAR_5.Attributes = 0;
    VAR_5.SecurityDescriptor = ((void*)0);
    VAR_5.SecurityQualityOfService = ((void*)0);
    FUNC_1( &VAR_6, VAR_2 );

    return FUNC_2( FUNC_0( (HANDLE *)VAR_4, VAR_3, &VAR_5 ) );
}
