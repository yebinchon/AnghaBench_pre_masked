
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int* Buffer; scalar_t__ FreeSize; scalar_t__ TotalSize; int Status; int * Current; } ;
struct TYPE_11__ {TYPE_1__* FirstSection; } ;
struct TYPE_10__ {int* Data; struct TYPE_10__* Next; } ;
struct TYPE_9__ {char* Key; struct TYPE_9__* Next; TYPE_3__* FirstField; } ;
struct TYPE_8__ {char* Name; struct TYPE_8__* Next; TYPE_2__* FirstLine; } ;
typedef int* PWCHAR ;
typedef scalar_t__* PULONG ;
typedef TYPE_1__* PINFCACHESECTION ;
typedef TYPE_2__* PINFCACHELINE ;
typedef TYPE_3__* PINFCACHEFIELD ;
typedef TYPE_4__* PINFCACHE ;
typedef TYPE_5__ OUTPUTBUFFER ;
typedef int INFSTATUS ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (char*,...) ;
 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*,char*) ;

INFSTATUS
FUNC_4(PINFCACHE VAR_3,
                    PWCHAR *VAR_4,
                    PULONG VAR_5)
{
  OUTPUTBUFFER VAR_6;
  PINFCACHESECTION VAR_7;
  PINFCACHELINE VAR_8;
  PINFCACHEFIELD VAR_9;
  PWCHAR VAR_10;
  BOOLEAN VAR_11;

  VAR_6.Buffer = ((void*)0);
  VAR_6.Current = ((void*)0);
  VAR_6.FreeSize = 0;
  VAR_6.TotalSize = 0;
  VAR_6.Status = VAR_2;


  VAR_7 = VAR_3->FirstSection;
  while (VAR_7 != ((void*)0))
    {
      FUNC_0("Processing section %S\n", VAR_7->Name);
      if (VAR_7 != VAR_3->FirstSection)
        {
          FUNC_3(&VAR_6, VAR_0);
        }
      FUNC_3(&VAR_6, L"[");
      FUNC_3(&VAR_6, VAR_7->Name);
      FUNC_3(&VAR_6, L"]");
      FUNC_3(&VAR_6, VAR_0);


      VAR_8 = VAR_7->FirstLine;
      while (VAR_8 != ((void*)0))
        {
          if (((void*)0) != VAR_8->Key)
            {
              FUNC_0("Line with key %S\n", VAR_8->Key);
              FUNC_3(&VAR_6, VAR_8->Key);
              FUNC_3(&VAR_6, L" = ");
            }
          else
            {
              FUNC_0("Line without key\n");
            }


          VAR_9 = VAR_8->FirstField;
          while (VAR_9 != ((void*)0))
            {
              if (VAR_9 != VAR_8->FirstField)
                {
                  FUNC_3(&VAR_6, L",");
                }
              VAR_10 = VAR_9->Data;
              VAR_11 = VAR_1;
              while (L'\0' != *VAR_10 && ! VAR_11)
                {
                  VAR_11 = (BOOLEAN)(L',' == *VAR_10 || L';' == *VAR_10 ||
                                         L'\\' == *VAR_10);
                  VAR_10++;
                }
              if (VAR_11)
                {
                  FUNC_3(&VAR_6, L"\"");
                  FUNC_3(&VAR_6, VAR_9->Data);
                  FUNC_3(&VAR_6, L"\"");
                }
              else
                {
                  FUNC_3(&VAR_6, VAR_9->Data);
                }


              VAR_9 = VAR_9->Next;
            }

          FUNC_3(&VAR_6, VAR_0);

          VAR_8 = VAR_8->Next;
        }


      VAR_7 = VAR_7->Next;
    }

  if (FUNC_2(VAR_6.Status))
    {
      *VAR_4 = VAR_6.Buffer;
      *VAR_5 = VAR_6.TotalSize - VAR_6.FreeSize;
    }
  else if (((void*)0) != VAR_6.Buffer)
    {
      FUNC_1(VAR_6.Buffer);
    }

  return VAR_2;
}
