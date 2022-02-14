
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct error_item {char const* file; int level; int error; void* column; void* row; } ;
struct error_data {int errors; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,struct error_item*) ;

void FUNC_2(struct error_data *VAR_0, const char *VAR_1, uint32_t VAR_2,
      uint32_t VAR_3, const char *VAR_4, int VAR_5)
{
 struct error_item VAR_6;

 if (!VAR_0)
  return;

 VAR_6.file = VAR_1;
 VAR_6.row = VAR_2;
 VAR_6.column = VAR_3;
 VAR_6.level = VAR_5;
 VAR_6.error = FUNC_0(VAR_4);

 FUNC_1(VAR_0->errors, &VAR_6);
}
