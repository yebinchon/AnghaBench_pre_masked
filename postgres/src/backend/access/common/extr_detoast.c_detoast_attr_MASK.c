
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varlena {int dummy; } ;
struct varatt_indirect {scalar_t__ pointer; } ;
typedef scalar_t__ Size ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct varlena*,scalar_t__) ;
 int FUNC_2 (struct varatt_indirect,struct varlena*) ;
 scalar_t__ FUNC_3 (struct varlena*) ;
 int FUNC_4 (struct varlena*) ;
 scalar_t__ FUNC_5 (struct varlena*) ;
 scalar_t__ FUNC_6 (struct varlena*) ;
 scalar_t__ FUNC_7 (struct varlena*) ;
 scalar_t__ FUNC_8 (struct varlena*) ;
 struct varlena* FUNC_9 (struct varlena*) ;
 struct varlena* FUNC_10 (struct varlena*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_11 (struct varlena*) ;
 scalar_t__ FUNC_12 (struct varlena*) ;
 struct varlena* FUNC_13 (struct varlena*) ;
 int FUNC_14 (struct varlena*,struct varlena*,scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 int FUNC_16 (struct varlena*) ;
 struct varlena* FUNC_17 (struct varlena*) ;
 struct varlena* FUNC_18 (struct varlena*) ;

struct varlena *
FUNC_19(struct varlena *VAR_2)
{
 if (FUNC_7(VAR_2))
 {



  VAR_2 = FUNC_18(VAR_2);

  if (FUNC_3(VAR_2))
  {
   struct varlena *VAR_3 = VAR_2;

   VAR_2 = FUNC_17(VAR_3);
   FUNC_16(VAR_3);
  }
 }
 else if (FUNC_6(VAR_2))
 {



  struct varatt_indirect VAR_4;

  FUNC_2(VAR_4, VAR_2);
  VAR_2 = (struct varlena *) VAR_4.pointer;


  FUNC_0(!FUNC_6(VAR_2));


  VAR_2 = FUNC_19(VAR_2);


  if (VAR_2 == (struct varlena *) VAR_4.pointer)
  {
   struct varlena *VAR_5;

   VAR_5 = (struct varlena *) FUNC_15(FUNC_11(VAR_2));
   FUNC_14(VAR_5, VAR_2, FUNC_11(VAR_2));
   VAR_2 = VAR_5;
  }
 }
 else if (FUNC_5(VAR_2))
 {



  VAR_2 = FUNC_13(VAR_2);

  FUNC_0(!FUNC_4(VAR_2));
 }
 else if (FUNC_3(VAR_2))
 {



  VAR_2 = FUNC_17(VAR_2);
 }
 else if (FUNC_8(VAR_2))
 {



  Size VAR_6 = FUNC_12(VAR_2) - VAR_1;
  Size VAR_7 = VAR_6 + VAR_0;
  struct varlena *VAR_8;

  VAR_8 = (struct varlena *) FUNC_15(VAR_7);
  FUNC_1(VAR_8, VAR_7);
  FUNC_14(FUNC_9(VAR_8), FUNC_10(VAR_2), VAR_6);
  VAR_2 = VAR_8;
 }

 return VAR_2;
}
