
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_9__ {int typlen; int typbyval; char typalign; int cmp_proc_finfo; } ;
typedef TYPE_2__ TypeCacheEntry ;
struct TYPE_10__ {TYPE_1__* args; } ;
struct TYPE_8__ {int isnull; int value; } ;
typedef int Oid ;
typedef int Datum ;
typedef int ArrayType ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__,int *,int,int ,int *,int *) ;
 int FUNC_7 (TYPE_4__*,int) ;
 char* FUNC_8 (char*,int,char*) ;
 scalar_t__ FUNC_9 (char*,char) ;
 int FUNC_10 (char*,int,int) ;
 TYPE_4__* VAR_0 ;

__attribute__((used)) static int
FUNC_11(Datum VAR_1,
       ArrayType *VAR_2,
       Oid VAR_3,
       TypeCacheEntry *VAR_4)
{
 FUNC_7(VAR_0, 2);
 char *VAR_5;
 int VAR_6 = VAR_4->typlen;
 bool VAR_7 = VAR_4->typbyval;
 char VAR_8 = VAR_4->typalign;
 int VAR_9;
 int VAR_10;

 VAR_5 = (char *) FUNC_0(VAR_2);

 FUNC_6(*VAR_0, &VAR_4->cmp_proc_finfo, 2,
        VAR_3, ((void*)0), ((void*)0));


 VAR_9 = 0;
 VAR_10 = FUNC_3(FUNC_2(VAR_2), FUNC_1(VAR_2));
 while (VAR_9 < VAR_10)
 {
  int VAR_11 = (VAR_9 + VAR_10) / 2;
  char *VAR_12;
  int VAR_13;
  int32 VAR_14;


  VAR_12 = VAR_5;
  for (VAR_13 = VAR_9; VAR_13 < VAR_11; VAR_13++)
  {
   VAR_12 = FUNC_8(VAR_12, VAR_6, VAR_12);
   VAR_12 = (char *) FUNC_9(VAR_12, VAR_8);
  }

  VAR_0->args[0].value = VAR_1;
  VAR_0->args[0].isnull = 0;
  VAR_0->args[1].value = FUNC_10(VAR_12, VAR_7, VAR_6);
  VAR_0->args[1].isnull = 0;

  VAR_14 = FUNC_4(FUNC_5(VAR_0));

  if (VAR_14 < 0)
   VAR_10 = VAR_11;
  else
  {
   VAR_9 = VAR_11 + 1;






   VAR_12 = FUNC_8(VAR_12, VAR_6, VAR_12);
   VAR_5 = (char *) FUNC_9(VAR_12, VAR_8);
  }
 }

 return VAR_9;
}
