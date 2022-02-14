
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_net_hdr {int flags; int hdr_len; int csum_offset; int csum_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,size_t) ;
 size_t FUNC_1 (int ,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct virtio_net_hdr *VAR_2, size_t VAR_3)
{
 if ((VAR_2->flags & VAR_1) &&
     (FUNC_1(FUNC_2(), VAR_2->csum_start) +
      FUNC_1(FUNC_2(), VAR_2->csum_offset) + 2 >
       FUNC_1(FUNC_2(), VAR_2->hdr_len)))
  VAR_2->hdr_len = FUNC_0(FUNC_2(),
    FUNC_1(FUNC_2(), VAR_2->csum_start) +
   FUNC_1(FUNC_2(), VAR_2->csum_offset) + 2);

 if (FUNC_1(FUNC_2(), VAR_2->hdr_len) > VAR_3)
  return -VAR_0;

 return 0;
}
