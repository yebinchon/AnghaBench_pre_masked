
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct svc_rqst {int ** rq_pages; } ;
struct svc_rdma_read_info {scalar_t__ ri_position; TYPE_1__* ri_readctxt; scalar_t__ ri_chunklen; } ;
typedef int __be32 ;
struct TYPE_2__ {unsigned int rc_page_count; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct svc_rdma_read_info*,struct svc_rqst*,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,scalar_t__,int ) ;
 int * FUNC_3 (int *,int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_4(struct svc_rqst *VAR_2,
         struct svc_rdma_read_info *VAR_3,
         __be32 *VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = -VAR_0;
 VAR_3->ri_chunklen = 0;
 while (*VAR_4++ != VAR_1 && FUNC_0(VAR_4++) == VAR_3->ri_position) {
  u32 VAR_7, VAR_8;
  u64 VAR_9;

  VAR_7 = FUNC_0(VAR_4++);
  VAR_8 = FUNC_0(VAR_4++);
  VAR_4 = FUNC_3(VAR_4, &VAR_9);

  VAR_6 = FUNC_1(VAR_3, VAR_2,
        VAR_7, VAR_8,
        VAR_9);
  if (VAR_6 < 0)
   break;

  FUNC_2(VAR_7, VAR_8, VAR_9);
  VAR_3->ri_chunklen += VAR_8;
 }




 for (VAR_5 = 0; VAR_5 < VAR_3->ri_readctxt->rc_page_count; VAR_5++)
  VAR_2->rq_pages[VAR_5] = ((void*)0);

 return VAR_6;
}
