
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int fill_size; int comp_size; } ;
struct xsk_umem {int fd; TYPE_5__ config; TYPE_3__* comp; TYPE_1__* fill; scalar_t__ refcount; } ;
struct TYPE_9__ {scalar_t__ desc; } ;
struct TYPE_7__ {scalar_t__ desc; } ;
struct xdp_mmap_offsets {TYPE_4__ cr; TYPE_2__ fr; } ;
typedef int socklen_t ;
typedef int off ;
typedef int __u64 ;
struct TYPE_8__ {scalar_t__ ring; } ;
struct TYPE_6__ {scalar_t__ ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct xsk_umem*) ;
 int FUNC_2 (int ,int ,int ,struct xdp_mmap_offsets*,int*) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

int FUNC_4(struct xsk_umem *VAR_3)
{
 struct xdp_mmap_offsets VAR_4;
 socklen_t VAR_5;
 int VAR_6;

 if (!VAR_3)
  return 0;

 if (VAR_3->refcount)
  return -VAR_0;

 VAR_5 = sizeof(VAR_4);
 VAR_6 = FUNC_2(VAR_3->fd, VAR_1, VAR_2, &VAR_4, &VAR_5);
 if (!VAR_6) {
  FUNC_3(VAR_3->fill->ring - VAR_4.fr.desc,
         VAR_4.fr.desc + VAR_3->config.fill_size * sizeof(__u64));
  FUNC_3(VAR_3->comp->ring - VAR_4.cr.desc,
         VAR_4.cr.desc + VAR_3->config.comp_size * sizeof(__u64));
 }

 FUNC_0(VAR_3->fd);
 FUNC_1(VAR_3);

 return 0;
}
