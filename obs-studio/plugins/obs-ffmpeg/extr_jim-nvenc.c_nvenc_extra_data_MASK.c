
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nvenc_data {size_t header_size; int * header; } ;



__attribute__((used)) static bool FUNC_0(void *VAR_0, uint8_t **VAR_1, size_t *VAR_2)
{
 struct nvenc_data *VAR_3 = VAR_0;

 if (!VAR_3->header) {
  return 0;
 }

 *VAR_1 = VAR_3->header;
 *VAR_2 = VAR_3->header_size;
 return 1;
}
