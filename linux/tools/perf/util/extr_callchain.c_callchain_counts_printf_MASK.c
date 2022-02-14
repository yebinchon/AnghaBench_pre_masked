
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct branch_type_stat {int dummy; } ;
typedef int str ;
typedef int FILE ;


 int FUNC_0 (char*,int,int ,int ,int ,int ,int ,int ,int ,struct branch_type_stat*) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_3(FILE *VAR_0, char *VAR_1, int VAR_2,
       u64 VAR_3, u64 VAR_4,
       u64 VAR_5, u64 VAR_6,
       u64 VAR_7, u64 VAR_8,
       u64 VAR_9,
       struct branch_type_stat *VAR_10)
{
 char VAR_11[256];

 FUNC_0(VAR_11, sizeof(VAR_11), VAR_3,
    VAR_4, VAR_5, VAR_6,
    VAR_7, VAR_8, VAR_9, VAR_10);

 if (VAR_0)
  return FUNC_1(VAR_0, "%s", VAR_11);

 return FUNC_2(VAR_1, VAR_2, "%s", VAR_11);
}
