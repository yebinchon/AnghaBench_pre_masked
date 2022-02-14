
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varlena {int dummy; } ;
typedef int Size ;


 scalar_t__ FUNC_0 (struct varlena*) ;
 int FUNC_1 (struct varlena*) ;
 struct varlena* FUNC_2 (struct varlena*) ;
 int FUNC_3 (struct varlena*,struct varlena*,int ) ;
 scalar_t__ FUNC_4 (int ) ;

struct varlena *
FUNC_5(struct varlena *VAR_0)
{
 if (FUNC_0(VAR_0))
  return FUNC_2(VAR_0);
 else
 {

  Size VAR_1 = FUNC_1(VAR_0);
  struct varlena *VAR_2 = (struct varlena *) FUNC_4(VAR_1);

  FUNC_3(VAR_2, VAR_0, VAR_1);
  return VAR_2;
 }
}
