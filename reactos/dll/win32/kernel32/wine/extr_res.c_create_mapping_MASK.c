
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapping_info {scalar_t__ file; int size; scalar_t__ read_write; } ;
typedef int LPCWSTR ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ,int,int ,int *,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 () ;
 int VAR_2 ;
 struct mapping_info* FUNC_3 (int ,int ,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct mapping_info*) ;
 scalar_t__ FUNC_5 (struct mapping_info*) ;

__attribute__((used)) static struct mapping_info *FUNC_6( LPCWSTR VAR_5, BOOL VAR_6 )
{
    struct mapping_info *VAR_7;

    VAR_7 = FUNC_3( FUNC_2(), VAR_2, sizeof *VAR_7 );
    if (!VAR_7)
        return ((void*)0);

    VAR_7->read_write = VAR_6;

    VAR_7->file = FUNC_0( VAR_5, VAR_0 | (VAR_6 ? VAR_1 : 0),
                            0, ((void*)0), VAR_4, 0, 0 );

    if (VAR_7->file != VAR_3)
    {
        VAR_7->size = FUNC_1( VAR_7->file, ((void*)0) );

        if (FUNC_5( VAR_7 ))
            return VAR_7;
    }
    FUNC_4( VAR_7 );
    return ((void*)0);
}
