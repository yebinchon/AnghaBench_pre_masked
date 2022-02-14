
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_14__ {int dwFileAttributes; int nFileSizeHigh; int nFileSizeLow; int ftLastWriteTime; int ftLastAccessTime; int ftCreationTime; } ;
typedef TYPE_2__ WIN32_FIND_DATAW ;
struct TYPE_15__ {int dwFileAttributes; int nFileSizeHigh; int nFileSizeLow; int ftLastWriteTime; int ftLastAccessTime; int ftCreationTime; } ;
typedef TYPE_3__ WIN32_FILE_ATTRIBUTE_DATA ;
typedef int UINT ;
struct TYPE_17__ {int member_3; int member_4; int member_2; int member_1; int member_0; } ;
struct TYPE_13__ {int member_0; } ;
struct TYPE_16__ {int (* UNION_MEMBER ) (int ) ;int member_2; TYPE_1__ member_1; int member_0; } ;
struct TYPE_12__ {int cfStrFName; } ;
typedef TYPE_4__ STGMEDIUM ;
typedef int SFGAOF ;
typedef int LPVOID ;
typedef int LPCWSTR ;
typedef int LPCITEMIDLIST ;
typedef int IShellFolder ;
typedef int IDataObject ;
typedef int HRESULT ;
typedef TYPE_5__ FORMATETC ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_3__*) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_10__ VAR_5 ;
 int FUNC_5 (int *,TYPE_5__*,TYPE_4__*) ;
 int FUNC_6 (int *) ;
 int VAR_6 ;
 int FUNC_7 (int *,int ,int,int *,int *,int ,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (int *,int ,int ,TYPE_2__*,int) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(IShellFolder* VAR_16, LPCITEMIDLIST VAR_17, SFGAOF VAR_18, WIN32_FIND_DATAW* VAR_19)
{
 if (!(VAR_18 & VAR_9) ||
   FUNC_0(FUNC_8(VAR_16, VAR_17, VAR_13, VAR_19, sizeof(WIN32_FIND_DATAW)))) {
  WIN32_FILE_ATTRIBUTE_DATA VAR_20;
  IDataObject* VAR_21;

  STGMEDIUM VAR_22 = {0, 0, 0};
  FORMATETC VAR_23 = {VAR_5.cfStrFName, 0, VAR_0, -1, VAR_14};

  HRESULT VAR_24 = FUNC_7(VAR_16, 0, 1, &VAR_17, &VAR_6, 0, (LPVOID*)&VAR_21);

  if (FUNC_9(VAR_24)) {
   VAR_24 = FUNC_5(VAR_21, &VAR_23, &VAR_22);

   FUNC_6(VAR_21);

   if (FUNC_9(VAR_24)) {
    LPCWSTR VAR_25 = FUNC_3(VAR_22.UNION_MEMBER(VAR_15));
    UINT VAR_26 = FUNC_10(VAR_7);

    if (FUNC_1(VAR_25, VAR_4, &VAR_20)) {
     VAR_19->dwFileAttributes = VAR_20.dwFileAttributes;
     VAR_19->ftCreationTime = VAR_20.ftCreationTime;
     VAR_19->ftLastAccessTime = VAR_20.ftLastAccessTime;
     VAR_19->ftLastWriteTime = VAR_20.ftLastWriteTime;

     if (!(VAR_20.dwFileAttributes & VAR_2)) {
      VAR_19->nFileSizeLow = VAR_20.nFileSizeLow;
      VAR_19->nFileSizeHigh = VAR_20.nFileSizeHigh;
     }
    }

    FUNC_10(VAR_26);

    FUNC_4(VAR_22.UNION_MEMBER(VAR_15));
    FUNC_2(VAR_22.UNION_MEMBER(VAR_15));
   }
  }
 }

 if (VAR_18 & (VAR_10|VAR_11))
  VAR_19->dwFileAttributes |= VAR_2;

 if (VAR_18 & VAR_12)
  VAR_19->dwFileAttributes |= VAR_3;

 if (VAR_18 & VAR_8)
  VAR_19->dwFileAttributes |= VAR_1;
}
