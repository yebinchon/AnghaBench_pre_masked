
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Size ;
typedef int Oid ;


 int FUNC_0 (unsigned char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int VAR_7 ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int,char const*,int,int) ;
 scalar_t__ FUNC_14 (unsigned char*,int) ;
 int FUNC_15 (char*) ;

unsigned char *
FUNC_16(unsigned char *VAR_8, int VAR_9,
        int VAR_10, int VAR_11)
{
 unsigned char *VAR_12;
 Oid VAR_13;

 if (VAR_9 <= 0)
  return VAR_8;

 if (VAR_10 == VAR_11)
  return VAR_8;

 if (VAR_11 == VAR_7)
  return VAR_8;

 if (VAR_10 == VAR_7)
 {

  (void) FUNC_13(VAR_11, (const char *) VAR_8, VAR_9, 0);
  return VAR_8;
 }

 if (!FUNC_3())
  FUNC_7(VAR_3, "cannot perform encoding conversion outside a transaction");

 VAR_13 = FUNC_1(VAR_10, VAR_11);
 if (!FUNC_6(VAR_13))
  FUNC_8(VAR_3,
    (FUNC_9(VAR_2),
     FUNC_11("default conversion function for encoding \"%s\" to \"%s\" does not exist",
      FUNC_12(VAR_10),
      FUNC_12(VAR_11))));
 if ((Size) VAR_9 >= (VAR_5 / (Size) VAR_4))
  FUNC_8(VAR_3,
    (FUNC_9(VAR_1),
     FUNC_11("out of memory"),
     FUNC_10("String of %d bytes is too long for encoding conversion.",
         VAR_9)));

 VAR_12 = (unsigned char *)
  FUNC_4(VAR_0,
          (Size) VAR_9 * VAR_4 + 1);

 FUNC_5(VAR_13,
      FUNC_2(VAR_10),
      FUNC_2(VAR_11),
      FUNC_0(VAR_8),
      FUNC_0(VAR_12),
      FUNC_2(VAR_9));






 if (VAR_9 > 1000000)
 {
  Size VAR_14 = FUNC_15((char *) VAR_12);

  if (VAR_14 >= VAR_6)
   FUNC_8(VAR_3,
     (FUNC_9(VAR_1),
      FUNC_11("out of memory"),
      FUNC_10("String of %d bytes is too long for encoding conversion.",
          VAR_9)));

  VAR_12 = (unsigned char *) FUNC_14(VAR_12, VAR_14 + 1);
 }

 return VAR_12;
}
