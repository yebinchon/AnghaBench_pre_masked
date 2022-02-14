
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapping_info {int size; int file; } ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (struct mapping_info*) ;
 int FUNC_4 (struct mapping_info*) ;

__attribute__((used)) static BOOL FUNC_5( struct mapping_info *VAR_2, DWORD VAR_3 )
{
    if (!FUNC_4( VAR_2 ))
        return VAR_0;


    FUNC_2( VAR_2->file, VAR_3, ((void*)0), VAR_1 );
    if (!FUNC_1( VAR_2->file ))
    {
        FUNC_0("failed to set file size to %08x\n", VAR_3 );
        return VAR_0;
    }

    VAR_2->size = VAR_3;

    return FUNC_3( VAR_2 );
}
