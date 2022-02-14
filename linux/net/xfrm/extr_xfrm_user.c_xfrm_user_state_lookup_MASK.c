
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfrm_address_t ;
typedef int u32 ;
struct xfrm_usersa_id {int family; int proto; int daddr; int spi; } ;
struct xfrm_state {int dummy; } ;
struct xfrm_mark {int dummy; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nlattr**,int ,int **) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct nlattr**,struct xfrm_mark*) ;
 struct xfrm_state* FUNC_3 (struct net*,int ,int *,int ,int ,int ) ;
 struct xfrm_state* FUNC_4 (struct net*,int ,int *,int *,int ,int ) ;

__attribute__((used)) static struct xfrm_state *FUNC_5(struct net *VAR_4,
       struct xfrm_usersa_id *VAR_5,
       struct nlattr **VAR_6,
       int *VAR_7)
{
 struct xfrm_state *VAR_8 = ((void*)0);
 struct xfrm_mark VAR_9;
 int VAR_10;
 u32 VAR_11 = FUNC_2(VAR_6, &VAR_9);

 if (FUNC_1(VAR_5->proto, VAR_2)) {
  VAR_10 = -VAR_1;
  VAR_8 = FUNC_3(VAR_4, VAR_11, &VAR_5->daddr, VAR_5->spi, VAR_5->proto, VAR_5->family);
 } else {
  xfrm_address_t *VAR_12 = ((void*)0);

  FUNC_0(VAR_6, VAR_3, &VAR_12);
  if (!VAR_12) {
   VAR_10 = -VAR_0;
   goto out;
  }

  VAR_10 = -VAR_1;
  VAR_8 = FUNC_4(VAR_4, VAR_11,
          &VAR_5->daddr, VAR_12,
          VAR_5->proto, VAR_5->family);
 }

 out:
 if (!VAR_8 && VAR_7)
  *VAR_7 = VAR_10;
 return VAR_8;
}
