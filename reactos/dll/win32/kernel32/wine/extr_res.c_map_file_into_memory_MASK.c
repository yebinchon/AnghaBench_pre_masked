
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapping_info {int * base; int size; int file; scalar_t__ read_write; } ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (int ,int,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static BOOL FUNC_3( struct mapping_info *VAR_5 )
{
    DWORD VAR_6, VAR_7;
    HANDLE VAR_8;

    if (VAR_5->read_write)
    {
        VAR_6 = VAR_4;
        VAR_7 = VAR_2 | VAR_1;
    }
    else
    {
        VAR_6 = VAR_3;
        VAR_7 = VAR_1;
    }

    VAR_8 = FUNC_1( VAR_5->file, ((void*)0), VAR_6, 0, 0, ((void*)0) );
    if (!VAR_8) return VAR_0;

    VAR_5->base = FUNC_2( VAR_8, VAR_7, 0, 0, VAR_5->size );
    FUNC_0( VAR_8 );

    return VAR_5->base != ((void*)0);
}
