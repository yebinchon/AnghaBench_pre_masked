
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* undo_text; scalar_t__ undo_insert_count; } ;
typedef TYPE_1__ EDITSTATE ;



__attribute__((used)) static inline void FUNC_0(EDITSTATE *VAR_0)
{
 VAR_0->undo_insert_count = 0;
 *VAR_0->undo_text = '\0';
}
