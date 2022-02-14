
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct xsk_umem_info {void* buffer; int cq; int fq; int umem; } ;
struct xsk_umem_config {int flags; int frame_headroom; int frame_size; int comp_size; int fill_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct xsk_umem_info* FUNC_0 (int,int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,void*,int ,int *,int *,struct xsk_umem_config*) ;

__attribute__((used)) static struct xsk_umem_info *FUNC_3(void *VAR_6, u64 VAR_7)
{
 struct xsk_umem_info *VAR_8;
 struct xsk_umem_config VAR_9 = {
  .fill_size = VAR_1,
  .comp_size = VAR_0,
  .frame_size = VAR_5,
  .frame_headroom = VAR_2,
  .flags = VAR_4
 };

 int VAR_10;

 VAR_8 = FUNC_0(1, sizeof(*VAR_8));
 if (!VAR_8)
  FUNC_1(VAR_3);

 VAR_10 = FUNC_2(&VAR_8->umem, VAR_6, VAR_7, &VAR_8->fq, &VAR_8->cq,
          &VAR_9);

 if (VAR_10)
  FUNC_1(-VAR_10);

 VAR_8->buffer = VAR_6;
 return VAR_8;
}
