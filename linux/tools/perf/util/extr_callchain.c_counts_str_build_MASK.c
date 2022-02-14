
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct branch_type_stat {scalar_t__ branch_to; } ;


 int FUNC_0 (char*,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,int,scalar_t__,scalar_t__,scalar_t__,struct branch_type_stat*) ;
 int FUNC_2 (char*,int,char*) ;

__attribute__((used)) static int FUNC_3(char *VAR_0, int VAR_1,
        u64 VAR_2, u64 VAR_3,
        u64 VAR_4, u64 VAR_5,
        u64 VAR_6, u64 VAR_7,
        u64 VAR_8,
        struct branch_type_stat *VAR_9)
{
 int VAR_10;

 if (VAR_2 == 0)
  return FUNC_2(VAR_0, VAR_1, " (calltrace)");

 if (VAR_9->branch_to) {
  VAR_10 = FUNC_1(VAR_0, VAR_1, VAR_2,
    VAR_3, VAR_4, VAR_9);
 } else {
  VAR_10 = FUNC_0(VAR_0, VAR_1, VAR_2,
    VAR_5, VAR_6, VAR_7,
    VAR_8);
 }

 if (!VAR_10)
  VAR_0[0] = 0;

 return VAR_10;
}
