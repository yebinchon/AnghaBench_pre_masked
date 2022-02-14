
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int32 ;
typedef int TypeCat ;
struct TYPE_5__ {int domain; int composite; int array; } ;
struct TYPE_6__ {scalar_t__ typid; scalar_t__ typmod; int typcat; TYPE_1__ io; int scalar_io; } ;
typedef scalar_t__ Oid ;
typedef int MemoryContext ;
typedef int JsValue ;
typedef int Datum ;
typedef TYPE_2__ ColumnIOData ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;





 int FUNC_4 () ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int *,char const*,int ,int *) ;
 int FUNC_7 (int *,scalar_t__,char const*,int ,int *,int *,int) ;
 int FUNC_8 (int *,scalar_t__,char const*,int ,int *,int) ;
 int FUNC_9 (int *,scalar_t__,scalar_t__,int *) ;
 int FUNC_10 (TYPE_2__*,scalar_t__,scalar_t__,int ,int) ;

__attribute__((used)) static Datum
FUNC_11(ColumnIOData *VAR_1,
       Oid VAR_2,
       int32 VAR_3,
       const char *VAR_4,
       MemoryContext VAR_5,
       Datum VAR_6,
       JsValue *VAR_7,
       bool *VAR_8)
{
 TypeCat VAR_9;

 FUNC_4();





 if (VAR_1->typid != VAR_2 || VAR_1->typmod != VAR_3)
  FUNC_10(VAR_1, VAR_2, VAR_3, VAR_5, 1);

 *VAR_8 = FUNC_2(VAR_7);

 VAR_9 = VAR_1->typcat;


 if (FUNC_3(VAR_7) &&
  (VAR_9 == 132 ||
   VAR_9 == 131 ||
   VAR_9 == 130))
  VAR_9 = 128;


 if (*VAR_8 &&
  VAR_9 != 129 &&
  VAR_9 != 130)
  return (Datum) 0;

 switch (VAR_9)
 {
  case 128:
   return FUNC_9(&VAR_1->scalar_io, VAR_2, VAR_3, VAR_7);

  case 132:
   return FUNC_6(&VAR_1->io.array, VAR_4, VAR_5, VAR_7);

  case 131:
  case 130:
   return FUNC_7(&VAR_1->io.composite, VAR_2,
           VAR_4, VAR_5,
           FUNC_1(VAR_6)
           ? FUNC_0(VAR_6)
           : ((void*)0),
           VAR_7, *VAR_8);

  case 129:
   return FUNC_8(&VAR_1->io.domain, VAR_2, VAR_4, VAR_5,
           VAR_7, *VAR_8);

  default:
   FUNC_5(VAR_0, "unrecognized type category '%c'", VAR_9);
   return (Datum) 0;
 }
}
