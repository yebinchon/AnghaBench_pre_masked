
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_6__ {scalar_t__ leftChild; scalar_t__ rightChild; int name; } ;
typedef int StorageBaseImpl ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ DirRef ;
typedef TYPE_1__ DirEntry ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *,scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,scalar_t__,int ,TYPE_1__*,scalar_t__*,int *) ;
 int FUNC_4 (TYPE_1__*,int ,scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_5(
  StorageBaseImpl *VAR_2,
  DirRef VAR_3,
  DirRef VAR_4)
{
  DirEntry VAR_5;
  DirEntry VAR_6;
  DirRef VAR_7;
  ULONG VAR_8;
  HRESULT VAR_9;

  VAR_9 = FUNC_1(VAR_2, VAR_4, &VAR_5);

  if (VAR_9 != VAR_1)
    return VAR_9;




  VAR_9 = FUNC_3(VAR_2, VAR_3, VAR_5.name,
    &VAR_6, &VAR_7, &VAR_8);

  if (VAR_9 != VAR_1)
    return VAR_9;

  if (VAR_5.leftChild != VAR_0)
  {



    FUNC_4(&VAR_6, VAR_8, VAR_5.leftChild);

    VAR_9 = FUNC_2(
            VAR_2,
            VAR_7,
            &VAR_6);
    if(FUNC_0(VAR_9))
    {
      return VAR_9;
    }

    if (VAR_5.rightChild != VAR_0)
    {





      DirRef VAR_10 = VAR_5.leftChild;
      DirEntry VAR_11;

      do
      {
        VAR_9 = FUNC_1(
                VAR_2,
                VAR_10,
                &VAR_11);
        if (FUNC_0(VAR_9))
        {
          return VAR_9;
        }

        if (VAR_11.rightChild != VAR_0)
          VAR_10 = VAR_11.rightChild;
      } while (VAR_11.rightChild != VAR_0);

      VAR_11.rightChild = VAR_5.rightChild;

      VAR_9 = FUNC_2(
              VAR_2,
              VAR_10,
              &VAR_11);
      if (FUNC_0(VAR_9))
      {
        return VAR_9;
      }
    }
  }
  else
  {



    FUNC_4(&VAR_6, VAR_8, VAR_5.rightChild);

    VAR_9 = FUNC_2(
            VAR_2,
            VAR_7,
            &VAR_6);
    if(FUNC_0(VAR_9))
    {
      return VAR_9;
    }
  }

  return VAR_9;
}
