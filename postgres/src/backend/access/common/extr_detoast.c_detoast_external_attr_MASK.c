
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varlena {int dummy; } ;
struct varatt_indirect {scalar_t__ pointer; } ;
typedef int Size ;
typedef int ExpandedObjectHeader ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,void*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct varlena*) ;
 int FUNC_5 (struct varatt_indirect,struct varlena*) ;
 scalar_t__ FUNC_6 (struct varlena*) ;
 scalar_t__ FUNC_7 (struct varlena*) ;
 scalar_t__ FUNC_8 (struct varlena*) ;
 scalar_t__ FUNC_9 (struct varlena*) ;
 int FUNC_10 (struct varlena*) ;
 int FUNC_11 (struct varlena*,struct varlena*,int ) ;
 scalar_t__ FUNC_12 (int ) ;
 struct varlena* FUNC_13 (struct varlena*) ;

struct varlena *
FUNC_14(struct varlena *VAR_0)
{
 struct varlena *VAR_1;

 if (FUNC_9(VAR_0))
 {



  VAR_1 = FUNC_13(VAR_0);
 }
 else if (FUNC_8(VAR_0))
 {



  struct varatt_indirect VAR_2;

  FUNC_5(VAR_2, VAR_0);
  VAR_0 = (struct varlena *) VAR_2.pointer;


  FUNC_0(!FUNC_8(VAR_0));


  if (FUNC_6(VAR_0))
   return FUNC_14(VAR_0);





  VAR_1 = (struct varlena *) FUNC_12(FUNC_10(VAR_0));
  FUNC_11(VAR_1, VAR_0, FUNC_10(VAR_0));
 }
 else if (FUNC_7(VAR_0))
 {



  ExpandedObjectHeader *VAR_3;
  Size VAR_4;

  VAR_3 = FUNC_1(FUNC_4(VAR_0));
  VAR_4 = FUNC_3(VAR_3);
  VAR_1 = (struct varlena *) FUNC_12(VAR_4);
  FUNC_2(VAR_3, (void *) VAR_1, VAR_4);
 }
 else
 {



  VAR_1 = VAR_0;
 }

 return VAR_1;
}
