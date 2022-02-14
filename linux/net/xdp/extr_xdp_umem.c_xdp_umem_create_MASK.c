
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_umem_reg {int dummy; } ;
struct xdp_umem {int id; } ;


 int VAR_0 ;
 struct xdp_umem* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct xdp_umem*) ;
 struct xdp_umem* FUNC_4 (int,int ) ;
 int VAR_2 ;
 int FUNC_5 (struct xdp_umem*,struct xdp_umem_reg*) ;

struct xdp_umem *FUNC_6(struct xdp_umem_reg *VAR_3)
{
 struct xdp_umem *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_4(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_1(&VAR_2, 0, 0, VAR_1);
 if (VAR_5 < 0) {
  FUNC_3(VAR_4);
  return FUNC_0(VAR_5);
 }
 VAR_4->id = VAR_5;

 VAR_5 = FUNC_5(VAR_4, VAR_3);
 if (VAR_5) {
  FUNC_2(&VAR_2, VAR_4->id);
  FUNC_3(VAR_4);
  return FUNC_0(VAR_5);
 }

 return VAR_4;
}
