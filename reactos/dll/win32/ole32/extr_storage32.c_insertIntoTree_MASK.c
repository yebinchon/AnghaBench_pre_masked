
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dirRootEntry; scalar_t__ leftChild; scalar_t__ rightChild; int name; } ;
typedef int StorageBaseImpl ;
typedef scalar_t__ LONG ;
typedef int HRESULT ;
typedef scalar_t__ DirRef ;
typedef TYPE_1__ DirEntry ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,scalar_t__,TYPE_1__*) ;
 int FUNC_1 (int *,scalar_t__,TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static HRESULT FUNC_3(
  StorageBaseImpl *VAR_5,
  DirRef VAR_6,
  DirRef VAR_7)
{
  DirEntry VAR_8;
  DirEntry VAR_9;




  FUNC_0(VAR_5,
                               VAR_7,
                               &VAR_9);




  FUNC_0(VAR_5,
                               VAR_6,
                               &VAR_8);

  if (VAR_8.dirRootEntry != VAR_0)
  {




    BOOL VAR_10 = VAR_1;
    DirRef VAR_11, VAR_12, VAR_13, VAR_14;




    VAR_14 = VAR_8.dirRootEntry;




    FUNC_0(VAR_5,
                                 VAR_8.dirRootEntry,
                                 &VAR_8);

    VAR_13 = VAR_8.leftChild;
    VAR_12 = VAR_8.rightChild;
    VAR_11 = VAR_14;

    while (!VAR_10)
    {
      LONG VAR_15 = FUNC_2( VAR_9.name, VAR_8.name);

      if (VAR_15 < 0)
      {
        if (VAR_13 != VAR_0)
        {
          FUNC_0(VAR_5,
                                       VAR_13,
                                       &VAR_8);
          VAR_11 = VAR_13;
        }
        else
        {
          VAR_8.leftChild = VAR_7;
          FUNC_1(VAR_5,
                                        VAR_11,
                                        &VAR_8);
          VAR_10 = VAR_4;
        }
      }
      else if (VAR_15 > 0)
      {
        if (VAR_12 != VAR_0)
        {
          FUNC_0(VAR_5,
                                       VAR_12,
                                       &VAR_8);
          VAR_11 = VAR_12;
        }
        else
        {
          VAR_8.rightChild = VAR_7;
          FUNC_1(VAR_5,
                                        VAR_11,
                                        &VAR_8);
          VAR_10 = VAR_4;
        }
      }
      else
      {




 return VAR_2;
      }

      VAR_13 = VAR_8.leftChild;
      VAR_12 = VAR_8.rightChild;
    }
  }
  else
  {



    VAR_8.dirRootEntry = VAR_7;
    FUNC_1(VAR_5,
                                  VAR_6,
                                  &VAR_8);
  }

  return VAR_3;
}
