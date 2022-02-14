
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dictionary {size_t end; size_t pos; size_t limit; } ;



__attribute__((used)) static void FUNC_0(struct dictionary *VAR_0, size_t VAR_1)
{
 if (VAR_0->end - VAR_0->pos <= VAR_1)
  VAR_0->limit = VAR_0->end;
 else
  VAR_0->limit = VAR_0->pos + VAR_1;
}
