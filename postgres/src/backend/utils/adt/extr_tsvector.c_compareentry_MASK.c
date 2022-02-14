
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t pos; int len; } ;
struct TYPE_4__ {TYPE_1__ entry; } ;
typedef TYPE_2__ WordEntryIN ;


 int FUNC_0 (char*,int ,char*,int ,int) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1, void *VAR_2)
{
 const WordEntryIN *VAR_3 = (const WordEntryIN *) VAR_0;
 const WordEntryIN *VAR_4 = (const WordEntryIN *) VAR_1;
 char *VAR_5 = (char *) VAR_2;

 return FUNC_0(&VAR_5[VAR_3->entry.pos], VAR_3->entry.len,
         &VAR_5[VAR_4->entry.pos], VAR_4->entry.len,
         0);
}
