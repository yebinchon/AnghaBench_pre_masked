
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_4__ {void* ring_first_pfn; void* ring_offset; void* ring_size; void* num_pages; void* ring_pt_address; } ;
struct TYPE_3__ {TYPE_2__ ringinfo; } ;
struct sst_hsw_stream {TYPE_1__ request; scalar_t__ commited; } ;
struct sst_hsw {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sst_hsw_stream*) ;

int FUNC_2(struct sst_hsw *VAR_1, struct sst_hsw_stream *VAR_2,
 u32 VAR_3, u32 VAR_4,
 u32 VAR_5, u32 VAR_6, u32 VAR_7)
{
 if (VAR_2->commited) {
  FUNC_0(VAR_1->dev, "error: stream committed for buffer\n");
  return -VAR_0;
 }

 VAR_2->request.ringinfo.ring_pt_address = VAR_3;
 VAR_2->request.ringinfo.num_pages = VAR_4;
 VAR_2->request.ringinfo.ring_size = VAR_5;
 VAR_2->request.ringinfo.ring_offset = VAR_6;
 VAR_2->request.ringinfo.ring_first_pfn = VAR_7;

 FUNC_1(VAR_2);

 return 0;
}
