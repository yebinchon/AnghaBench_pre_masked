
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct error_item {int dummy; } ;
struct TYPE_2__ {struct error_item const* array; } ;
struct error_data {TYPE_1__ errors; } ;



__attribute__((used)) static inline const struct error_item *FUNC_0(struct error_data *VAR_0,
             size_t VAR_1)
{
 return VAR_0->errors.array + VAR_1;
}
