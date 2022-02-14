
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_netobj {int dummy; } ;
struct svc_rqst {int dummy; } ;
struct rsc {int h; int mechctx; } ;
struct cache_detail {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct cache_detail*) ;
 struct rsc* FUNC_1 (struct cache_detail*,struct xdr_netobj*) ;
 int FUNC_2 (struct svc_rqst*) ;
 int FUNC_3 (struct svc_rqst*,int ,int ) ;

__attribute__((used)) static inline int
FUNC_4(struct cache_detail *VAR_3, struct svc_rqst *VAR_4,
  struct xdr_netobj *VAR_5, int *VAR_6)
{
 struct rsc *VAR_7;
 int VAR_8;

 if (*VAR_6 != VAR_1)
  return FUNC_2(VAR_4);
 VAR_7 = FUNC_1(VAR_3, VAR_5);
 if (VAR_7 == ((void*)0)) {
  *VAR_6 = VAR_2;
  return FUNC_2(VAR_4);
 }
 VAR_8 = FUNC_3(VAR_4, VAR_7->mechctx, VAR_0);
 FUNC_0(&VAR_7->h, VAR_3);
 return VAR_8;
}
