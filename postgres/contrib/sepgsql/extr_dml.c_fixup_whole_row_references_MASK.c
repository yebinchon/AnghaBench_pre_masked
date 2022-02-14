
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ attisdropped; } ;
struct TYPE_3__ {int relnatts; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_class ;
typedef TYPE_2__* Form_pg_attribute ;
typedef int Bitmapset ;
typedef int AttrNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int * FUNC_7 (int *,int) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (int *,int) ;
 int FUNC_10 (int,int *) ;
 int FUNC_11 (int ,char*,int ) ;

__attribute__((used)) static Bitmapset *
FUNC_12(Oid VAR_5, Bitmapset *VAR_6)
{
 Bitmapset *VAR_7;
 HeapTuple VAR_8;
 AttrNumber VAR_9;
 AttrNumber VAR_10;
 int VAR_11;


 VAR_11 = VAR_3 - VAR_2;
 if (!FUNC_10(VAR_11, VAR_6))
  return VAR_6;


 VAR_8 = FUNC_5(VAR_4, FUNC_3(VAR_5));
 if (!FUNC_1(VAR_8))
  FUNC_11(VAR_1, "cache lookup failed for relation %u", VAR_5);
 VAR_9 = ((Form_pg_class) FUNC_0(VAR_8))->relnatts;
 FUNC_4(VAR_8);


 VAR_7 = FUNC_8(VAR_6);
 VAR_7 = FUNC_9(VAR_7, VAR_11);

 for (VAR_10 = 1; VAR_10 <= VAR_9; VAR_10++)
 {
  VAR_8 = FUNC_6(VAR_0,
        FUNC_3(VAR_5),
        FUNC_2(VAR_10));
  if (!FUNC_1(VAR_8))
   continue;

  if (((Form_pg_attribute) FUNC_0(VAR_8))->attisdropped)
   continue;

  VAR_11 = VAR_10 - VAR_2;

  VAR_7 = FUNC_7(VAR_7, VAR_11);

  FUNC_4(VAR_8);
 }
 return VAR_7;
}
