
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct update_info {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct update_info*,char*,long*) ;
 char* FUNC_2 (char const*,char const*) ;

__attribute__((used)) static inline bool FUNC_3(struct update_info *VAR_0,
         const char *VAR_1, const char *VAR_2)
{
 long VAR_3;
 char *VAR_4 = FUNC_2(VAR_1, VAR_2);
 bool VAR_5 = FUNC_1(VAR_0, VAR_4, &VAR_3);
 FUNC_0(VAR_4);
 return VAR_5 && VAR_3 == 200;
}
