
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int undo_text; scalar_t__ undo_insert_count; } ;
typedef TYPE_1__ EDITSTATE ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline BOOL FUNC_1(const EDITSTATE *VAR_0)
{
 return (VAR_0->undo_insert_count || FUNC_0(VAR_0->undo_text));
}
