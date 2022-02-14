
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct files_callback_info {int queue; } ;
typedef int PCWSTR ;
typedef int HINF ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static BOOL FUNC_1( HINF VAR_1, PCWSTR VAR_2, void *VAR_3 )
{
    struct files_callback_info *VAR_4 = VAR_3;
    FUNC_0( VAR_4->queue, VAR_1, 0, VAR_2 );
    return VAR_0;
}
