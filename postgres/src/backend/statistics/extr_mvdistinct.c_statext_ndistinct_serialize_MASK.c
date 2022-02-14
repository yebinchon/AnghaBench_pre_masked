
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
typedef int bytea ;
struct TYPE_5__ {int magic; int type; int nitems; TYPE_1__* items; } ;
struct TYPE_4__ {int ndistinct; int attrs; } ;
typedef int Size ;
typedef TYPE_1__ MVNDistinctItem ;
typedef TYPE_2__ MVNDistinct ;
typedef int AttrNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 char* FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int*,int) ;
 scalar_t__ FUNC_7 (int) ;

bytea *
FUNC_8(MVNDistinct *VAR_4)
{
 int VAR_5;
 bytea *VAR_6;
 char *VAR_7;
 Size VAR_8;

 FUNC_0(VAR_4->magic == VAR_0);
 FUNC_0(VAR_4->type == VAR_1);





 VAR_8 = VAR_3 + VAR_2;


 for (VAR_5 = 0; VAR_5 < VAR_4->nitems; VAR_5++)
 {
  int VAR_9;

  VAR_9 = FUNC_5(VAR_4->items[VAR_5].attrs);
  FUNC_0(VAR_9 >= 2);

  VAR_8 += FUNC_2(VAR_9);
 }

 VAR_6 = (bytea *) FUNC_7(VAR_8);
 FUNC_1(VAR_6, VAR_8);

 VAR_7 = FUNC_3(VAR_6);


 FUNC_6(VAR_7, &VAR_4->magic, sizeof(uint32));
 VAR_7 += sizeof(uint32);
 FUNC_6(VAR_7, &VAR_4->type, sizeof(uint32));
 VAR_7 += sizeof(uint32);
 FUNC_6(VAR_7, &VAR_4->nitems, sizeof(uint32));
 VAR_7 += sizeof(uint32);




 for (VAR_5 = 0; VAR_5 < VAR_4->nitems; VAR_5++)
 {
  MVNDistinctItem VAR_10 = VAR_4->items[VAR_5];
  int VAR_11 = FUNC_5(VAR_10.attrs);
  int VAR_12;

  FUNC_6(VAR_7, &VAR_10.ndistinct, sizeof(double));
  VAR_7 += sizeof(double);
  FUNC_6(VAR_7, &VAR_11, sizeof(int));
  VAR_7 += sizeof(int);

  VAR_12 = -1;
  while ((VAR_12 = FUNC_4(VAR_10.attrs, VAR_12)) >= 0)
  {
   AttrNumber VAR_13 = (AttrNumber) VAR_12;

   FUNC_6(VAR_7, &VAR_13, sizeof(AttrNumber));
   VAR_7 += sizeof(AttrNumber);
  }


  FUNC_0(VAR_7 <= ((char *) VAR_6 + VAR_8));
 }


 FUNC_0(VAR_7 == ((char *) VAR_6 + VAR_8));

 return VAR_6;
}
