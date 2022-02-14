
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct files_callback_info {int copy_flags; scalar_t__ layout; int src_root; int queue; } ;
typedef char* PCWSTR ;
typedef scalar_t__ HINF ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,scalar_t__,scalar_t__,char*,int ) ;
 int FUNC_1 (int ,scalar_t__,int ,int *,char*,int ) ;
 int VAR_0 ;

__attribute__((used)) static BOOL FUNC_2( HINF VAR_1, PCWSTR VAR_2, void *VAR_3 )
{
    struct files_callback_info *VAR_4 = VAR_3;

    if (VAR_2[0] == '@')
        FUNC_1( VAR_4->queue, VAR_4->layout ? VAR_4->layout : VAR_1, VAR_4->src_root, ((void*)0), VAR_2+1, VAR_4->copy_flags );
    else
        FUNC_0( VAR_4->queue, VAR_4->src_root, VAR_4->layout ? VAR_4->layout : VAR_1, VAR_1, VAR_2, VAR_4->copy_flags );
    return VAR_0;
}
