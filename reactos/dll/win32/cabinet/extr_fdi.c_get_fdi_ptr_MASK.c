
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ magic; } ;
typedef scalar_t__ HFDI ;
typedef TYPE_1__ FDI_Int ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static FDI_Int *FUNC_1( HFDI VAR_2 )
{
    FDI_Int *VAR_3= (FDI_Int *)VAR_2;

    if (!VAR_3 || VAR_3->magic != VAR_1)
    {
        FUNC_0( VAR_0 );
        return ((void*)0);
    }
    return VAR_3;
}
