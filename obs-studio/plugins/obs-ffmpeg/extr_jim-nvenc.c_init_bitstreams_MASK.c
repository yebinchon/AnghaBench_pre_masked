
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvenc_data {size_t buf_count; int bitstreams; } ;
struct nv_bitstream {int dummy; } ;


 int FUNC_0 (int ,struct nv_bitstream*) ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (struct nvenc_data*,struct nv_bitstream*) ;

__attribute__((used)) static bool FUNC_3(struct nvenc_data *VAR_0)
{
 FUNC_1(VAR_0->bitstreams, VAR_0->buf_count);
 for (size_t VAR_1 = 0; VAR_1 < VAR_0->buf_count; VAR_1++) {
  struct nv_bitstream VAR_2;
  if (!FUNC_2(VAR_0, &VAR_2)) {
   return 0;
  }

  FUNC_0(VAR_0->bitstreams, &VAR_2);
 }

 return 1;
}
