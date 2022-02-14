
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8 ;
typedef scalar_t__ uint32 ;
typedef int uint16 ;
typedef int sint16 ;
struct TYPE_3__ {scalar_t__ stamp; int key; } ;
typedef int HASH_KEY ;
typedef TYPE_1__ CELLHEADER ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (size_t) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (size_t,int*,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int* VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (size_t,int) ;
 int FUNC_6 (int,int) ;
 scalar_t__ FUNC_7 (int,TYPE_1__*,int) ;
 int VAR_10 ;

int
FUNC_8(uint8 VAR_11, HASH_KEY * VAR_12)
{
 int VAR_13, VAR_14;
 uint16 VAR_15;
 sint16 VAR_16[0xa00];
 uint32 VAR_17[0xa00];
 CELLHEADER VAR_18;

 if (!(VAR_3 && VAR_4 && FUNC_1(VAR_11)))
  return 0;


 if (VAR_7)
  return 0;

 FUNC_0(("Persistent bitmap cache enumeration... "));
 for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++)
 {
  VAR_13 = VAR_8[VAR_11];
  FUNC_6(VAR_13, VAR_15 * (VAR_6 * VAR_1 + sizeof(CELLHEADER)));
  if (FUNC_7(VAR_13, &VAR_18, sizeof(CELLHEADER)) <= 0)
   break;

  if (FUNC_3(VAR_18.key, VAR_10, sizeof(HASH_KEY)) != 0)
  {
   FUNC_4(VAR_12[VAR_15], VAR_18.key, sizeof(HASH_KEY));


   if (VAR_5 && VAR_18.stamp && VAR_9 > 8)
    FUNC_5(VAR_11, VAR_15);


   for (VAR_14 = VAR_15; VAR_14 > 0 && VAR_18.stamp < VAR_17[VAR_14 - 1]; VAR_14--)
   {
    VAR_16[VAR_14] = VAR_16[VAR_14 - 1];
    VAR_17[VAR_14] = VAR_17[VAR_14 - 1];
   }

   VAR_16[VAR_14] = VAR_15;
   VAR_17[VAR_14] = VAR_18.stamp;
  }
  else
  {
   break;
  }
 }

 FUNC_0(("%d cached bitmaps.\n", VAR_15));

 FUNC_2(VAR_11, VAR_16, VAR_15);
 VAR_7 = VAR_2;
 return VAR_15;
}
