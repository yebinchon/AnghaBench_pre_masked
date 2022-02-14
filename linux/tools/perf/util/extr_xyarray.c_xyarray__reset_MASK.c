
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xyarray {size_t entries; size_t entry_size; int contents; } ;


 int FUNC_0 (int ,int ,size_t) ;

void FUNC_1(struct xyarray *VAR_0)
{
 size_t VAR_1 = VAR_0->entries * VAR_0->entry_size;

 FUNC_0(VAR_0->contents, 0, VAR_1);
}
