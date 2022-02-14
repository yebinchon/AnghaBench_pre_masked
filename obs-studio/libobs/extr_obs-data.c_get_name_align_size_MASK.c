
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_data_item {int dummy; } ;


 size_t FUNC_0 () ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static inline size_t FUNC_2(const char *VAR_0)
{
 size_t VAR_1 = FUNC_1(VAR_0) + 1;
 size_t VAR_2 = FUNC_0();
 size_t VAR_3;

 VAR_3 = sizeof(struct obs_data_item) + (VAR_1 + VAR_2 - 1);
 VAR_3 &= ~(VAR_2 - 1);

 return VAR_3 - sizeof(struct obs_data_item);
}
