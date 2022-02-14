
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct varlena {int dummy; } ;
typedef int gbtree_vinfo ;
struct TYPE_6__ {int offset; int page; int rel; int key; scalar_t__ leafkey; } ;
typedef TYPE_1__ GISTENTRY ;
typedef int GBT_VARKEY ;


 struct varlena* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (struct varlena*) ;
 int FUNC_3 (TYPE_1__,int ,int ,int ,int ,int) ;
 TYPE_1__* FUNC_4 (int) ;

GISTENTRY *
FUNC_5(GISTENTRY *VAR_0, const gbtree_vinfo *VAR_1)
{
 GISTENTRY *VAR_2;

 if (VAR_0->leafkey)
 {
  struct varlena *VAR_3 = FUNC_0(VAR_0->key);
  GBT_VARKEY *VAR_4;

  VAR_4 = FUNC_2(VAR_3);

  VAR_2 = FUNC_4(sizeof(GISTENTRY));
  FUNC_3(*VAR_2, FUNC_1(VAR_4),
       VAR_0->rel, VAR_0->page,
       VAR_0->offset, 1);
 }
 else
  VAR_2 = VAR_0;

 return VAR_2;
}
