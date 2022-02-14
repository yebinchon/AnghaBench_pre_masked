
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapping_info {scalar_t__ file; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,struct mapping_info*) ;
 int FUNC_3 (struct mapping_info*) ;

__attribute__((used)) static void FUNC_4( struct mapping_info *VAR_0 )
{
    if (!VAR_0)
        return;
    FUNC_3( VAR_0 );
    if (VAR_0->file)
        FUNC_0( VAR_0->file );
    FUNC_2( FUNC_1(), 0, VAR_0 );
}
