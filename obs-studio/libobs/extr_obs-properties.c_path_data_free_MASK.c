
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path_data {scalar_t__ type; int filter; int default_path; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct path_data *VAR_1)
{
 FUNC_0(VAR_1->default_path);
 if (VAR_1->type == VAR_0)
  FUNC_0(VAR_1->filter);
}
