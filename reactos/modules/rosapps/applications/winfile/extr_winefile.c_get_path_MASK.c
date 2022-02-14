
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_7__ {int * iDesktop; } ;
struct TYPE_5__ {char* cFileName; } ;
struct TYPE_6__ {scalar_t__ etype; struct TYPE_6__* up; TYPE_1__ data; int pidl; int * folder; } ;
typedef int SFGAOF ;
typedef char* PWSTR ;
typedef char* LPCWSTR ;
typedef int LPCITEMIDLIST ;
typedef int IShellFolder ;
typedef int HRESULT ;
typedef TYPE_2__ Entry ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_0 (int *,int,int *,int*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int *,int ,char*,int ) ;

__attribute__((used)) static void FUNC_5(Entry* VAR_6, PWSTR VAR_7)
{
 Entry* VAR_8;
 int VAR_9 = 0;
 int VAR_10 = 0;

 if (VAR_6->etype == VAR_0)
 {
  SFGAOF VAR_11;
  HRESULT VAR_12 = VAR_5;

  VAR_7[0] = '\0';

  VAR_11 = 0;

  if (VAR_6->folder)
   VAR_12 = FUNC_0(VAR_6->folder, 1, (LPCITEMIDLIST*)&VAR_6->pidl, &VAR_11);

  if (FUNC_1(VAR_12) && (VAR_11&VAR_4)) {
   IShellFolder* VAR_13 = VAR_6->up? VAR_6->up->folder: VAR_2.iDesktop;

   VAR_12 = FUNC_4(VAR_13, VAR_6->pidl, VAR_7, VAR_3);
  }
 }
 else
 {
  for(VAR_8=VAR_6; VAR_8; VAR_10++) {
   LPCWSTR VAR_14;
   int VAR_15;

   {
    LPCWSTR VAR_16;
    VAR_14 = VAR_8->data.cFileName;
    VAR_16 = VAR_14;

    for(VAR_15=0; *VAR_16 && *VAR_16 != '/' && *VAR_16 != '\\'; VAR_16++)
     VAR_15++;
   }

   if (VAR_8->up) {
    if (VAR_15 > 0) {
     FUNC_3(VAR_7+VAR_15+1, VAR_7, VAR_9*sizeof(WCHAR));
     FUNC_2(VAR_7+1, VAR_14, VAR_15*sizeof(WCHAR));
     VAR_9 += VAR_15+1;

     if (VAR_8->etype == VAR_1)
      VAR_7[0] = '/';
     else
                                                VAR_7[0] = '\\';
    }

    VAR_8 = VAR_8->up;
   } else {
    FUNC_3(VAR_7+VAR_15, VAR_7, VAR_9*sizeof(WCHAR));
    FUNC_2(VAR_7, VAR_14, VAR_15*sizeof(WCHAR));
    VAR_9 += VAR_15;
    break;
   }
  }

  if (!VAR_10) {
   if (VAR_8->etype == VAR_1)
    VAR_7[VAR_9++] = '/';
   else
    VAR_7[VAR_9++] = '\\';
  }

  VAR_7[VAR_9] = '\0';
 }
}
