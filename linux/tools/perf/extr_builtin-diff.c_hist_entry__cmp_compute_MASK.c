
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_entry {int dummy; } ;
typedef int int64_t ;


 int FUNC_0 (struct hist_entry*,struct hist_entry*,int) ;
 int * VAR_0 ;
 struct hist_entry* FUNC_1 (struct hist_entry*,int *) ;
 int FUNC_2 (struct hist_entry*) ;

__attribute__((used)) static int64_t
FUNC_3(struct hist_entry *VAR_1, struct hist_entry *VAR_2,
   int VAR_3, int VAR_4)
{
 bool VAR_5 = FUNC_2(VAR_1);
 bool VAR_6 = FUNC_2(VAR_2);
 struct hist_entry *VAR_7, *VAR_8;

 if (!VAR_5 && !VAR_6)
  return 0;

 if (!VAR_5 || !VAR_6)
  return VAR_5 ? -1 : 1;

 VAR_8 = FUNC_1(VAR_1, &VAR_0[VAR_4]);
 VAR_7 = FUNC_1(VAR_2, &VAR_0[VAR_4]);

 if (!VAR_8 && !VAR_7)
  return 0;

 if (!VAR_8 || !VAR_7)
  return VAR_8 ? -1 : 1;





 return FUNC_0(VAR_8, VAR_7, VAR_3);
}
