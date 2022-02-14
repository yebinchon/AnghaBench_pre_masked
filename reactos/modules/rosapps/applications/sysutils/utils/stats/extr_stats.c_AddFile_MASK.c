
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* StatInfoList; } ;
struct TYPE_7__ {struct TYPE_7__* Next; struct TYPE_7__* StatInfoListNext; TYPE_2__* ExtInfo; int FileName; } ;
typedef TYPE_1__* PFILE_INFO ;
typedef TYPE_2__* PEXTENSION_INFO ;
typedef int LPTSTR ;
typedef int FILE_INFO ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ,int ) ;

PFILE_INFO
FUNC_4(LPTSTR VAR_1,
  PEXTENSION_INFO VAR_2)
{
  PFILE_INFO VAR_3;
  PFILE_INFO VAR_4;

  VAR_3 = (PFILE_INFO) FUNC_1 (FUNC_0(), 0, sizeof (FILE_INFO));
  if (!VAR_3)
    return ((void*)0);
  FUNC_2 (VAR_3, sizeof (FILE_INFO));
  FUNC_3 (VAR_3->FileName, VAR_1);
  VAR_3->ExtInfo = VAR_2;

  if (VAR_2->StatInfoList)
  {
    VAR_4 = VAR_2->StatInfoList;
    while (VAR_4->StatInfoListNext != ((void*)0))
    {
      VAR_4 = VAR_4->StatInfoListNext;
    }
    VAR_4->StatInfoListNext = VAR_3;
  }
  else
  {
    VAR_2->StatInfoList = VAR_3;
  }

  if (VAR_0)
  {
    VAR_4 = VAR_0;
    while (VAR_4->Next != ((void*)0))
    {
      VAR_4 = VAR_4->Next;
    }
    VAR_4->Next = VAR_3;
  }
  else
  {
    VAR_0 = VAR_3;
  }

  return VAR_3;
}
