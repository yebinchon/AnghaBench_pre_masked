
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfrm_address_t ;
typedef scalar_t__ u32 ;
struct xfrm6_tunnel_spi {int list_byaddr; int list_byspi; int refcnt; scalar_t__ spi; int addr; } ;
struct xfrm6_tunnel_net {scalar_t__ spi; int * spi_byaddr; int * spi_byspi; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct net*,scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 struct xfrm6_tunnel_spi* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int) ;
 struct xfrm6_tunnel_net* FUNC_5 (struct net*) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;

__attribute__((used)) static u32 FUNC_7(struct net *VAR_4, xfrm_address_t *VAR_5)
{
 struct xfrm6_tunnel_net *VAR_6 = FUNC_5(VAR_4);
 u32 VAR_7;
 struct xfrm6_tunnel_spi *VAR_8;
 int VAR_9;

 if (VAR_6->spi < VAR_2 ||
     VAR_6->spi >= VAR_1)
  VAR_6->spi = VAR_2;
 else
  VAR_6->spi++;

 for (VAR_7 = VAR_6->spi; VAR_7 <= VAR_1; VAR_7++) {
  VAR_9 = FUNC_0(VAR_4, VAR_7);
  if (VAR_9 >= 0)
   goto alloc_spi;

  if (VAR_7 == VAR_1)
   break;
 }
 for (VAR_7 = VAR_2; VAR_7 < VAR_6->spi; VAR_7++) {
  VAR_9 = FUNC_0(VAR_4, VAR_7);
  if (VAR_9 >= 0)
   goto alloc_spi;
 }
 VAR_7 = 0;
 goto out;
alloc_spi:
 VAR_6->spi = VAR_7;
 VAR_8 = FUNC_2(VAR_3, VAR_0);
 if (!VAR_8)
  goto out;

 FUNC_3(&VAR_8->addr, VAR_5, sizeof(VAR_8->addr));
 VAR_8->spi = VAR_7;
 FUNC_4(&VAR_8->refcnt, 1);

 FUNC_1(&VAR_8->list_byspi, &VAR_6->spi_byspi[VAR_9]);

 VAR_9 = FUNC_6(VAR_5);
 FUNC_1(&VAR_8->list_byaddr, &VAR_6->spi_byaddr[VAR_9]);
out:
 return VAR_7;
}
