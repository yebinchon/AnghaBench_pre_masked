
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint16 ;
struct TYPE_3__ {int nactions; } ;
typedef TYPE_1__ ginxlogRecompressDataLeaf ;
typedef int StringInfo ;
typedef int ItemPointerData ;
typedef int GinPostingList ;






 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (int*,char*,int) ;

__attribute__((used)) static void
FUNC_4(StringInfo VAR_0, ginxlogRecompressDataLeaf *VAR_1)
{
 int VAR_2;
 char *VAR_3 = ((char *) VAR_1) + sizeof(ginxlogRecompressDataLeaf);

 FUNC_2(VAR_0, " %d segments:", (int) VAR_1->nactions);

 for (VAR_2 = 0; VAR_2 < VAR_1->nactions; VAR_2++)
 {
  uint8 VAR_4 = *((uint8 *) (VAR_3++));
  uint8 VAR_5 = *((uint8 *) (VAR_3++));
  uint16 VAR_6 = 0;
  int VAR_7 = 0;

  if (VAR_5 == 129 ||
   VAR_5 == 128)
  {
   VAR_7 = FUNC_1((GinPostingList *) VAR_3);
   VAR_3 += FUNC_0(VAR_7);
  }

  if (VAR_5 == 131)
  {
   FUNC_3(&VAR_6, VAR_3, sizeof(uint16));
   VAR_3 += sizeof(uint16);
   VAR_3 += VAR_6 * sizeof(ItemPointerData);
  }

  switch (VAR_5)
  {
   case 131:
    FUNC_2(VAR_0, " %d (add %d items)", VAR_4, VAR_6);
    break;
   case 130:
    FUNC_2(VAR_0, " %d (delete)", VAR_4);
    break;
   case 129:
    FUNC_2(VAR_0, " %d (insert)", VAR_4);
    break;
   case 128:
    FUNC_2(VAR_0, " %d (replace)", VAR_4);
    break;
   default:
    FUNC_2(VAR_0, " %d unknown action %d ???", VAR_4, VAR_5);

    return;
  }
 }
}
