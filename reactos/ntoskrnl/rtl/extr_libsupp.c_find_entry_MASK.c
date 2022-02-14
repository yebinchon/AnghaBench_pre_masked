
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {scalar_t__ Name; scalar_t__ Type; } ;
typedef int PVOID ;
typedef int NTSTATUS ;
typedef int LPCWSTR ;
typedef TYPE_1__ LDR_RESOURCE_INFO ;
typedef void IMAGE_RESOURCE_DIRECTORY ;


 int VAR_0 ;
 void* FUNC_0 (int ,int ,int ,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (void*,int ,void*,int) ;
 void* FUNC_2 (void*,void*,int) ;

NTSTATUS FUNC_3( PVOID VAR_7, LDR_RESOURCE_INFO *VAR_8,
                     ULONG VAR_9, void **VAR_10, int VAR_11 )
{
    ULONG VAR_12;
    void *VAR_13;
    IMAGE_RESOURCE_DIRECTORY *VAR_14;

    VAR_13 = FUNC_0( VAR_7, VAR_6, VAR_0, &VAR_12 );
    if (!VAR_13) return VAR_2;
    if (VAR_12 < sizeof(*VAR_14)) return VAR_2;
    VAR_14 = VAR_13;

    if (!VAR_9--) goto done;
    if (!(*VAR_10 = FUNC_1( VAR_14, (LPCWSTR)VAR_8->Type, VAR_13, VAR_11 || VAR_9 )))
        return VAR_4;
    if (!VAR_9--) return VAR_5;

    VAR_14 = *VAR_10;
    if (!(*VAR_10 = FUNC_1( VAR_14, (LPCWSTR)VAR_8->Name, VAR_13, VAR_11 || VAR_9 )))
        return VAR_3;
    if (!VAR_9--) return VAR_5;
    if (VAR_9) return VAR_1;

    VAR_14 = *VAR_10;

    if ((*VAR_10 = FUNC_2( VAR_14, VAR_13, VAR_11 ))) return VAR_5;

    return VAR_2;

done:
    *VAR_10 = VAR_14;
    return VAR_5;
}
