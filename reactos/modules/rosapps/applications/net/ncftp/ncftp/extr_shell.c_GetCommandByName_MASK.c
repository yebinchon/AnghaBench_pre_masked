
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bsearch_proc_t ;
typedef int * CommandPtr ;
typedef int Command ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char const* const,int *) ;
 scalar_t__ FUNC_1 (char const* const,int *,int,int,int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;

CommandPtr
FUNC_2(const char *const VAR_5, int VAR_6)
{
 CommandPtr VAR_7, VAR_8;





 VAR_7 = (CommandPtr) FUNC_1(VAR_5, VAR_1, VAR_2, sizeof(Command), (bsearch_proc_t) VAR_0);

 if (VAR_7 == VAR_4 && !VAR_6) {



  VAR_7 = (CommandPtr) FUNC_1(VAR_5, VAR_1, VAR_2, sizeof(Command), (bsearch_proc_t) FUNC_0);

  if (VAR_7 != VAR_4) {



   if (VAR_7 != &VAR_1[0]) {
    VAR_8 = VAR_7 - 1;
    if (FUNC_0(VAR_5, VAR_8) == 0)
     return VAR_3;
   }



   if (VAR_7 != &VAR_1[VAR_2 - 1]) {
    VAR_8 = VAR_7 + 1;
    if (FUNC_0(VAR_5, VAR_8) == 0)
     return VAR_3;
   }
  }
 }
 return VAR_7;
}
