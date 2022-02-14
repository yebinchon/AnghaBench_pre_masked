
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_entry {scalar_t__ dummy; } ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hist_entry*,struct hist_entry*,int) ;
 int * VAR_2 ;
 struct hist_entry* FUNC_1 (struct hist_entry*,int *) ;

__attribute__((used)) static int64_t
FUNC_2(struct hist_entry *VAR_3, struct hist_entry *VAR_4,
       int VAR_5, int VAR_6)
{
 struct hist_entry *VAR_7, *VAR_8;

 VAR_8 = FUNC_1(VAR_3, &VAR_2[VAR_6]);
 VAR_7 = FUNC_1(VAR_4, &VAR_2[VAR_6]);

 if (!VAR_8 && !VAR_7)
  return 0;

 if (!VAR_8 || !VAR_7)
  return VAR_8 ? -1 : 1;

 if (VAR_5 != VAR_0 && VAR_5 != VAR_1) {





  if (VAR_3->dummy && VAR_4->dummy)
   return 0;

  if (VAR_3->dummy || VAR_4->dummy)
   return VAR_3->dummy ? 1 : -1;
 }

 return FUNC_0(VAR_8, VAR_7, VAR_5);
}
