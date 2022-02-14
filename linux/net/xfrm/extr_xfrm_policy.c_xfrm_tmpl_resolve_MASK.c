
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_state {int dummy; } ;
struct xfrm_policy {int xfrm_nr; } ;
struct flowi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xfrm_state*) ;
 int FUNC_1 (struct xfrm_state**,struct xfrm_state**,int,unsigned short) ;
 int FUNC_2 (struct xfrm_policy*,struct flowi const*,struct xfrm_state**,unsigned short) ;

__attribute__((used)) static int
FUNC_3(struct xfrm_policy **VAR_2, int VAR_3, const struct flowi *VAR_4,
    struct xfrm_state **VAR_5, unsigned short VAR_6)
{
 struct xfrm_state *VAR_7[VAR_1];
 struct xfrm_state **VAR_8 = (VAR_3 > 1) ? VAR_7 : VAR_5;
 int VAR_9 = 0;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  if (VAR_9 + VAR_2[VAR_12]->xfrm_nr >= VAR_1) {
   VAR_10 = -VAR_0;
   goto fail;
  }

  VAR_11 = FUNC_2(VAR_2[VAR_12], VAR_4, &VAR_8[VAR_9], VAR_6);
  if (VAR_11 < 0) {
   VAR_10 = VAR_11;
   goto fail;
  } else
   VAR_9 += VAR_11;
 }


 if (VAR_3 > 1)
  FUNC_1(VAR_5, VAR_8, VAR_9, VAR_6);

 return VAR_9;

 fail:
 for (VAR_9--; VAR_9 >= 0; VAR_9--)
  FUNC_0(VAR_8[VAR_9]);
 return VAR_10;

}
