
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double u64 ;
struct branch_type_stat {int dummy; } ;


 int FUNC_0 (struct branch_type_stat*,char*,int) ;
 scalar_t__ FUNC_1 (int ,char*,double,char*,int,double) ;
 scalar_t__ FUNC_2 (char*,int,char*) ;

__attribute__((used)) static int FUNC_3(char *VAR_0, int VAR_1,
    u64 VAR_2, u64 VAR_3,
    u64 VAR_4,
    struct branch_type_stat *VAR_5)
{
 int VAR_6, VAR_7 = 0;

 VAR_6 = FUNC_0(VAR_5, VAR_0, VAR_1);
 if (VAR_6)
  VAR_7++;

 if (VAR_3 < VAR_2) {
  VAR_6 += FUNC_1(VAR_7++, "predicted",
    VAR_3 * 100.0 / VAR_2,
    VAR_0 + VAR_6, VAR_1 - VAR_6, 0.0);
 }

 if (VAR_4) {
  VAR_6 += FUNC_1(VAR_7++, "abort",
    VAR_4 * 100.0 / VAR_2,
    VAR_0 + VAR_6, VAR_1 - VAR_6, 0.1);
 }

 if (VAR_7)
  VAR_6 += FUNC_2(VAR_0 + VAR_6, VAR_1 - VAR_6, ")");

 return VAR_6;
}
