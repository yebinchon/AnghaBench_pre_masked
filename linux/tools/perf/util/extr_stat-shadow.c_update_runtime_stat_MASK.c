
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct saved_value {int stats; } ;
struct runtime_stat {int dummy; } ;
typedef enum stat_type { ____Placeholder_stat_type } stat_type ;


 struct saved_value* FUNC_0 (int *,int,int,int,int,struct runtime_stat*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct runtime_stat *VAR_0,
    enum stat_type VAR_1,
    int VAR_2, int VAR_3, u64 VAR_4)
{
 struct saved_value *VAR_5 = FUNC_0(((void*)0), VAR_3, 1,
         VAR_1, VAR_2, VAR_0);

 if (VAR_5)
  FUNC_1(&VAR_5->stats, VAR_4);
}
