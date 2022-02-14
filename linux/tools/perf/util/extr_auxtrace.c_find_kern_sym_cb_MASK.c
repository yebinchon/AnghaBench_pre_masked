
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct sym_args {int started; void* start; int duplicate; void* size; scalar_t__ selected; } ;


 scalar_t__ FUNC_0 (struct sym_args*,char const*,char) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, const char *VAR_1, char VAR_2, u64 VAR_3)
{
 struct sym_args *VAR_4 = VAR_0;

 if (VAR_4->started) {
  if (!VAR_4->size)
   VAR_4->size = VAR_3 - VAR_4->start;
  if (VAR_4->selected) {
   if (VAR_4->size)
    return 1;
  } else if (FUNC_0(VAR_4, VAR_1, VAR_2)) {
   VAR_4->duplicate = 1;
   return 1;
  }
 } else if (FUNC_0(VAR_4, VAR_1, VAR_2)) {
  VAR_4->started = 1;
  VAR_4->start = VAR_3;
 }

 return 0;
}
