
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int data; } ;
struct TYPE_3__ {int (* get_sei_data ) (int ,int **,size_t*) ;} ;
struct obs_encoder {TYPE_2__ context; TYPE_1__ info; } ;


 int FUNC_0 (int ,int **,size_t*) ;

__attribute__((used)) static inline bool FUNC_1(const struct obs_encoder *VAR_0, uint8_t **VAR_1,
      size_t *VAR_2)
{
 if (VAR_0->info.get_sei_data)
  return VAR_0->info.get_sei_data(VAR_0->context.data, VAR_1,
        VAR_2);
 return 0;
}
