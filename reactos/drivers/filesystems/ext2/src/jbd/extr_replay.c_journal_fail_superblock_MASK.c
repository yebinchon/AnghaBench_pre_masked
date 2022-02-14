
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct buffer_head {int dummy; } ;
struct TYPE_3__ {struct buffer_head* j_sb_buffer; } ;
typedef TYPE_1__ journal_t ;


 int FUNC_0 (struct buffer_head*) ;

__attribute__((used)) static void FUNC_1 (journal_t *VAR_0)
{
    struct buffer_head *VAR_1 = VAR_0->j_sb_buffer;
    FUNC_0(VAR_1);
    VAR_0->j_sb_buffer = ((void*)0);
}
