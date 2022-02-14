
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {int bi_size; } ;
struct TYPE_6__ {TYPE_2__ iter; } ;
struct ceph_osd_data {int type; TYPE_3__ bvec_pos; int bio_length; TYPE_1__* pagelist; int length; } ;
struct TYPE_4__ {int length; } ;







 int FUNC_0 (int,char*,int) ;

__attribute__((used)) static u64 FUNC_1(struct ceph_osd_data *VAR_0)
{
 switch (VAR_0->type) {
 case 130:
  return 0;
 case 128:
  return VAR_0->length;
 case 129:
  return (u64)VAR_0->pagelist->length;




 case 131:
  return VAR_0->bvec_pos.iter.bi_size;
 default:
  FUNC_0(1, "unrecognized data type %d\n", (int)VAR_0->type);
  return 0;
 }
}
