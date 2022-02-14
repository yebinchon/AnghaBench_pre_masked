
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct obs_qsv {size_t sei_size; int * sei; int context; } ;


 int FUNC_0 (size_t*) ;

__attribute__((used)) static bool FUNC_1(void *VAR_0, uint8_t **VAR_1, size_t *VAR_2)
{
 struct obs_qsv *VAR_3 = VAR_0;

 if (!VAR_3->context)
  return 0;


 FUNC_0(VAR_1);
 FUNC_0(VAR_2);

 *VAR_1 = VAR_3->sei;
 *VAR_2 = VAR_3->sei_size;
 return 1;
}
