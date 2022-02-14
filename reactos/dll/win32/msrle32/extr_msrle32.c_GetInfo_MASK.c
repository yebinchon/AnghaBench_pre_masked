
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int fccHandler; } ;
struct TYPE_5__ {int dwSize; int dwFlags; int szDescription; int szName; void* dwVersionICM; void* dwVersion; int fccHandler; int fccType; } ;
typedef int LRESULT ;
typedef TYPE_1__ ICINFO ;
typedef int DWORD ;
typedef TYPE_2__ CodecInfo ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static LRESULT FUNC_3(const CodecInfo *VAR_10, ICINFO *VAR_11, DWORD VAR_12)
{

  FUNC_2(VAR_10 != ((void*)0));


  if (VAR_11 == ((void*)0))
    return sizeof(ICINFO);
  if (VAR_12 < sizeof(ICINFO))
    return 0;

  VAR_11->dwSize = sizeof(ICINFO);
  VAR_11->fccType = VAR_1;
  VAR_11->fccHandler = (VAR_10 != ((void*)0) ? VAR_10->fccHandler : VAR_0);
  VAR_11->dwFlags = VAR_8 | VAR_9 | VAR_6 | VAR_7;
  VAR_11->dwVersion = VAR_2;
  VAR_11->dwVersionICM = VAR_2;

  FUNC_1(VAR_5, VAR_4, VAR_11->szName, FUNC_0(VAR_11->szName));
  FUNC_1(VAR_5, VAR_3, VAR_11->szDescription, FUNC_0(VAR_11->szDescription));

  return sizeof(ICINFO);
}
