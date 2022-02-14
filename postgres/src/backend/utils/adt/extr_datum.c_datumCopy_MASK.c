
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varlena {int dummy; } ;
typedef scalar_t__ Size ;
typedef int ExpandedObjectHeader ;
typedef int Datum ;


 int * FUNC_0 (int ) ;
 struct varlena* FUNC_1 (int ) ;
 int FUNC_2 (int *,void*,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (struct varlena*) ;
 scalar_t__ FUNC_6 (struct varlena*) ;
 scalar_t__ FUNC_7 (int ,int,int) ;
 int FUNC_8 (char*,struct varlena*,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;

Datum
FUNC_10(Datum VAR_0, bool VAR_1, int VAR_2)
{
 Datum VAR_3;

 if (VAR_1)
  VAR_3 = VAR_0;
 else if (VAR_2 == -1)
 {

  struct varlena *VAR_4 = (struct varlena *) FUNC_1(VAR_0);

  if (FUNC_5(VAR_4))
  {

   ExpandedObjectHeader *VAR_5 = FUNC_0(VAR_0);
   Size VAR_6;
   char *VAR_7;

   VAR_6 = FUNC_3(VAR_5);
   VAR_7 = (char *) FUNC_9(VAR_6);
   FUNC_2(VAR_5, (void *) VAR_7, VAR_6);
   VAR_3 = FUNC_4(VAR_7);
  }
  else
  {

   Size VAR_8;
   char *VAR_9;

   VAR_8 = (Size) FUNC_6(VAR_4);
   VAR_9 = (char *) FUNC_9(VAR_8);
   FUNC_8(VAR_9, VAR_4, VAR_8);
   VAR_3 = FUNC_4(VAR_9);
  }
 }
 else
 {

  Size VAR_10;
  char *VAR_11;

  VAR_10 = FUNC_7(VAR_0, VAR_1, VAR_2);

  VAR_11 = (char *) FUNC_9(VAR_10);
  FUNC_8(VAR_11, FUNC_1(VAR_0), VAR_10);
  VAR_3 = FUNC_4(VAR_11);
 }
 return VAR_3;
}
