
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int count_int ;
typedef int code_int ;
struct TYPE_5__ {int clear_flg; scalar_t__ ClearCode; scalar_t__ free_ent; } ;
typedef TYPE_1__ GifCtx ;


 int FUNC_0 (int ,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2 (GifCtx *VAR_1)
{

        FUNC_0 ( (count_int) VAR_0, VAR_1 );
        VAR_1->free_ent = VAR_1->ClearCode + 2;
        VAR_1->clear_flg = 1;

        FUNC_1( (code_int)VAR_1->ClearCode, VAR_1);
}
