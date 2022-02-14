
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct soc_tplg {TYPE_1__* fw; int * hdr_pos; } ;
struct TYPE_2__ {int size; int const* data; } ;



__attribute__((used)) static inline int FUNC_0(struct soc_tplg *VAR_0)
{
 const u8 *VAR_1 = VAR_0->hdr_pos;

 if (VAR_1 >= VAR_0->fw->data + VAR_0->fw->size)
  return 1;
 return 0;
}
