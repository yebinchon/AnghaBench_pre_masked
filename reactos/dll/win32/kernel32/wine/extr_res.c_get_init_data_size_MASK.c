
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Characteristics; scalar_t__ SizeOfRawData; } ;
typedef TYPE_1__ IMAGE_SECTION_HEADER ;
typedef size_t DWORD ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t) ;
 TYPE_1__* FUNC_1 (void*,size_t,size_t*) ;

__attribute__((used)) static DWORD FUNC_2( void *VAR_1, DWORD VAR_2 )
{
    DWORD VAR_3, VAR_4 = 0, VAR_5 = 0;
    IMAGE_SECTION_HEADER *VAR_6;

    VAR_6 = FUNC_1( VAR_1, VAR_2, &VAR_5 );

    for (VAR_3=0; VAR_3<VAR_5; VAR_3++)
        if (VAR_6[VAR_3].Characteristics & VAR_0)
            VAR_4 += VAR_6[VAR_3].SizeOfRawData;

    FUNC_0("size = %08x\n", VAR_4);

    return VAR_4;
}
