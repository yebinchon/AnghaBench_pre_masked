
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsk_umem_config {int flags; int frame_headroom; int frame_size; int comp_size; int fill_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct xsk_umem_config *VAR_5,
    const struct xsk_umem_config *VAR_6)
{
 if (!VAR_6) {
  VAR_5->fill_size = VAR_1;
  VAR_5->comp_size = VAR_0;
  VAR_5->frame_size = VAR_4;
  VAR_5->frame_headroom = VAR_3;
  VAR_5->flags = VAR_2;
  return;
 }

 VAR_5->fill_size = VAR_6->fill_size;
 VAR_5->comp_size = VAR_6->comp_size;
 VAR_5->frame_size = VAR_6->frame_size;
 VAR_5->frame_headroom = VAR_6->frame_headroom;
 VAR_5->flags = VAR_6->flags;
}
