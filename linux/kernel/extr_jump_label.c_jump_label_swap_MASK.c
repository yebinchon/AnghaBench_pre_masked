
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jump_entry {scalar_t__ key; scalar_t__ target; scalar_t__ code; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0, void *VAR_1, int VAR_2)
{
 long VAR_3 = (unsigned long)VAR_0 - (unsigned long)VAR_1;
 struct jump_entry *VAR_4 = VAR_0;
 struct jump_entry *VAR_5 = VAR_1;
 struct jump_entry VAR_6 = *VAR_4;

 VAR_4->code = VAR_5->code - VAR_3;
 VAR_4->target = VAR_5->target - VAR_3;
 VAR_4->key = VAR_5->key - VAR_3;

 VAR_5->code = VAR_6.code + VAR_3;
 VAR_5->target = VAR_6.target + VAR_3;
 VAR_5->key = VAR_6.key + VAR_3;
}
