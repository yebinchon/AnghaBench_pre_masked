
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int attr ;
typedef char WCHAR ;
typedef int UNICODE_STRING ;
struct TYPE_3__ {int Length; void* RootDirectory; int * SecurityQualityOfService; int * SecurityDescriptor; scalar_t__ Attributes; int * ObjectName; } ;
typedef TYPE_1__ OBJECT_ATTRIBUTES ;
typedef void* HANDLE ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void**,int ,TYPE_1__*,int ,int *,int ,int *) ;
 int FUNC_2 (int *,char const*) ;
 scalar_t__ FUNC_3 (int ,void**) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline HANDLE FUNC_4(void)
{
    static const WCHAR VAR_2[] = {'C','o','n','t','r','o','l',' ','P','a','n','e','l',0};
    static const WCHAR VAR_3[] = {'I','n','t','e','r','n','a','t','i','o','n','a','l',0};
    OBJECT_ATTRIBUTES VAR_4;
    UNICODE_STRING VAR_5;
    HANDLE VAR_6, VAR_7 = 0;

    if (FUNC_3( VAR_0, &VAR_7 ) != VAR_1) return 0;

    VAR_4.Length = sizeof(VAR_4);
    VAR_4.RootDirectory = VAR_7;
    VAR_4.ObjectName = &VAR_5;
    VAR_4.Attributes = 0;
    VAR_4.SecurityDescriptor = ((void*)0);
    VAR_4.SecurityQualityOfService = ((void*)0);
    FUNC_2( &VAR_5, VAR_2 );

    if (!FUNC_1( &VAR_6, VAR_0, &VAR_4, 0, ((void*)0), 0, ((void*)0) ))
    {
        FUNC_0( VAR_4.RootDirectory );
        VAR_4.RootDirectory = VAR_6;
        FUNC_2( &VAR_5, VAR_3 );
        if (FUNC_1( &VAR_7, VAR_0, &VAR_4, 0, ((void*)0), 0, ((void*)0) )) VAR_7 = 0;
    }
    FUNC_0( VAR_4.RootDirectory );
    return VAR_7;
}
