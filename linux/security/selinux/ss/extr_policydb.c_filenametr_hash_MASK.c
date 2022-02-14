
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct hashtab {int size; } ;
struct filename_trans {unsigned long stype; unsigned long ttype; unsigned long tclass; unsigned char* name; } ;


 unsigned long FUNC_0 (unsigned char,unsigned long) ;

__attribute__((used)) static u32 FUNC_1(struct hashtab *VAR_0, const void *VAR_1)
{
 const struct filename_trans *VAR_2 = VAR_1;
 unsigned long VAR_3;
 unsigned int VAR_4;
 unsigned char VAR_5;

 VAR_3 = VAR_2->stype ^ VAR_2->ttype ^ VAR_2->tclass;

 VAR_4 = 0;
 while ((VAR_5 = VAR_2->name[VAR_4++]))
  VAR_3 = FUNC_0(VAR_5, VAR_3);
 return VAR_3 & (VAR_0->size - 1);
}
