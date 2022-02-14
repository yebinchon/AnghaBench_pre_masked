
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct exit_reasons_table {char const* reason; scalar_t__ exit_code; } ;


 struct exit_reasons_table* VAR_0 ;
 int FUNC_0 (char*,unsigned long long) ;

__attribute__((used)) static const char *FUNC_1(u64 VAR_1)
{
 struct exit_reasons_table *VAR_2 = VAR_0;

 while (VAR_2->reason != ((void*)0)) {
  if (VAR_2->exit_code == VAR_1)
   return VAR_2->reason;
  VAR_2++;
 }

 FUNC_0("Unknown hcall code: %lld\n",
        (unsigned long long)VAR_1);
 return "UNKNOWN";
}
