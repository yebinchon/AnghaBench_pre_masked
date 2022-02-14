
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_8__ {int data; } ;
typedef TYPE_1__ ginxlogVacuumDataLeafPage ;
struct TYPE_9__ {int flags; } ;
typedef TYPE_2__ ginxlogSplit ;
typedef int ginxlogRecompressDataLeaf ;
struct TYPE_10__ {int isDelete; } ;
typedef TYPE_3__ ginxlogInsertEntry ;
struct TYPE_14__ {int key; } ;
struct TYPE_11__ {TYPE_7__ newitem; } ;
typedef TYPE_4__ ginxlogInsertDataInternal ;
struct TYPE_12__ {int flags; } ;
typedef TYPE_5__ ginxlogInsert ;
struct TYPE_13__ {char ndeleted; } ;
typedef TYPE_6__ ginxlogDeleteListPages ;
typedef int XLogReaderState ;
typedef int StringInfo ;
typedef int BlockNumber ;
typedef int BlockIdData ;
typedef int BlockId ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_7__*) ;
 int VAR_3 ;
 int FUNC_4 (int *,int ) ;
 char* FUNC_5 (int *,int ,int *) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ,char*,char,...) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int ,int *) ;

void
FUNC_12(StringInfo VAR_4, XLogReaderState *VAR_5)
{
 char *VAR_6 = FUNC_6(VAR_5);
 uint8 VAR_7 = FUNC_7(VAR_5) & ~VAR_3;

 switch (VAR_7)
 {
  case 136:

   break;
  case 133:
   {
    ginxlogInsert *VAR_8 = (ginxlogInsert *) VAR_6;

    FUNC_9(VAR_4, "isdata: %c isleaf: %c",
         (VAR_8->flags & VAR_0) ? 'T' : 'F',
         (VAR_8->flags & VAR_1) ? 'T' : 'F');
    if (!(VAR_8->flags & VAR_1))
    {
     char *VAR_9 = VAR_6 + sizeof(ginxlogInsert);
     BlockNumber VAR_10;
     BlockNumber VAR_11;

     VAR_10 = FUNC_0((BlockId) VAR_9);
     VAR_9 += sizeof(BlockIdData);
     VAR_11 = FUNC_0((BlockId) VAR_9);
     VAR_9 += sizeof(BlockNumber);
     FUNC_9(VAR_4, " children: %u/%u",
          VAR_10, VAR_11);
    }
    if (FUNC_8(VAR_5, 0))
    {
     if (FUNC_4(VAR_5, 0))
      FUNC_10(VAR_4, " (full page image)");
     else
      FUNC_10(VAR_4, " (full page image, for WAL verification)");
    }
    else
    {
     char *VAR_12 = FUNC_5(VAR_5, 0, ((void*)0));

     if (!(VAR_8->flags & VAR_0))
      FUNC_9(VAR_4, " isdelete: %c",
           (((ginxlogInsertEntry *) VAR_12)->isDelete) ? 'T' : 'F');
     else if (VAR_8->flags & VAR_1)
      FUNC_11(VAR_4, (ginxlogRecompressDataLeaf *) VAR_12);
     else
     {
      ginxlogInsertDataInternal *VAR_13 =
      (ginxlogInsertDataInternal *) VAR_12;

      FUNC_9(VAR_4, " pitem: %u-%u/%u",
           FUNC_3(&VAR_13->newitem),
           FUNC_1(&VAR_13->newitem.key),
           FUNC_2(&VAR_13->newitem.key));
     }
    }
   }
   break;
  case 131:
   {
    ginxlogSplit *VAR_14 = (ginxlogSplit *) VAR_6;

    FUNC_9(VAR_4, "isrootsplit: %c",
         (((ginxlogSplit *) VAR_6)->flags & VAR_2) ? 'T' : 'F');
    FUNC_9(VAR_4, " isdata: %c isleaf: %c",
         (VAR_14->flags & VAR_0) ? 'T' : 'F',
         (VAR_14->flags & VAR_1) ? 'T' : 'F');
   }
   break;
  case 128:

   break;
  case 129:
   {
    if (FUNC_8(VAR_5, 0))
    {
     if (FUNC_4(VAR_5, 0))
      FUNC_10(VAR_4, " (full page image)");
     else
      FUNC_10(VAR_4, " (full page image, for WAL verification)");
    }
    else
    {
     ginxlogVacuumDataLeafPage *VAR_15 =
     (ginxlogVacuumDataLeafPage *) FUNC_5(VAR_5, 0, ((void*)0));

     FUNC_11(VAR_4, &VAR_15->data);
    }
   }
   break;
  case 134:

   break;
  case 130:

   break;
  case 132:

   break;
  case 135:
   FUNC_9(VAR_4, "ndeleted: %d",
        ((ginxlogDeleteListPages *) VAR_6)->ndeleted);
   break;
 }
}
