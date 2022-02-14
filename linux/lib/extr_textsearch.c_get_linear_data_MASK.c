
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ts_state {scalar_t__ cb; } ;
struct ts_linear_state {unsigned int len; int * data; } ;
struct ts_config {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static unsigned int FUNC_1(unsigned int VAR_0, const u8 **VAR_1,
        struct ts_config *VAR_2,
        struct ts_state *VAR_3)
{
 struct ts_linear_state *VAR_4 = (struct ts_linear_state *) VAR_3->cb;

 if (FUNC_0(VAR_0 < VAR_4->len)) {
  *VAR_1 = VAR_4->data + VAR_0;
  return VAR_4->len - VAR_0;
 }

 return 0;
}
