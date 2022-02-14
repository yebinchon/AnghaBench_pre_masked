
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fetch_type {int size; } ;
struct fetch_insn {scalar_t__ op; unsigned long lshift; unsigned long rshift; int basesize; } ;


 unsigned long FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long FUNC_1 (char const*,char**,int ) ;

__attribute__((used)) static int FUNC_2(const char *VAR_3,
          const struct fetch_type *VAR_4,
          struct fetch_insn **VAR_5)
{
 struct fetch_insn *VAR_6 = *VAR_5;
 unsigned long VAR_7, VAR_8;
 char *VAR_9;

 if (*VAR_3 != 'b')
  return 0;

 VAR_7 = FUNC_1(VAR_3 + 1, &VAR_9, 0);

 if (VAR_7 == 0 || *VAR_9 != '@')
  return -VAR_0;

 VAR_3 = VAR_9 + 1;
 VAR_8 = FUNC_1(VAR_3, &VAR_9, 0);

 if (VAR_9 == VAR_3 || *VAR_9 != '/')
  return -VAR_0;
 VAR_6++;
 if (VAR_6->op != VAR_2)
  return -VAR_0;
 *VAR_5 = VAR_6;

 VAR_6->op = VAR_1;
 VAR_6->lshift = FUNC_0(VAR_4->size) - (VAR_7 + VAR_8);
 VAR_6->rshift = FUNC_0(VAR_4->size) - VAR_7;
 VAR_6->basesize = VAR_4->size;

 return (FUNC_0(VAR_4->size) < (VAR_7 + VAR_8)) ? -VAR_0 : 0;
}
