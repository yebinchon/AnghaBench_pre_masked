
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct regsvr_filter {int category; int name; scalar_t__ clsid; TYPE_4__* pins; int merit; } ;
struct TYPE_11__ {int cPins2; TYPE_5__* rgPins2; } ;
struct TYPE_12__ {TYPE_1__ s2; } ;
struct TYPE_16__ {int dwVersion; TYPE_2__ u; int dwMerit; } ;
struct TYPE_15__ {int dwFlags; int nMediaTypes; struct TYPE_15__* lpMediaType; int * clsPinCategory; int * lpMedium; scalar_t__ nMediums; scalar_t__ cInstances; int * clsMinorType; int * clsMajorType; } ;
struct TYPE_14__ {int flags; TYPE_3__* mediatypes; } ;
struct TYPE_13__ {int fourcc; scalar_t__ majortype; scalar_t__ subtype; } ;
typedef TYPE_5__ REGPINTYPES ;
typedef TYPE_5__ REGFILTERPINS2 ;
typedef TYPE_7__ REGFILTER2 ;
typedef int LPVOID ;
typedef int IFilterMapper2 ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int CLSID ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int *,int *) ;
 int FUNC_1 (int *) ;
 TYPE_5__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,scalar_t__,int ,int *,int ,int *,TYPE_7__*) ;
 int FUNC_8 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int *,scalar_t__,int) ;

__attribute__((used)) static HRESULT FUNC_11(struct regsvr_filter const *VAR_4)
{
    HRESULT VAR_5;
    IFilterMapper2* VAR_6 = ((void*)0);

    FUNC_1(((void*)0));
    VAR_5 = FUNC_0(&VAR_1, ((void*)0), VAR_0, &VAR_3, (LPVOID*)&VAR_6);

    if (FUNC_9(VAR_5)) {
 for (; FUNC_9(VAR_5) && VAR_4->clsid; ++VAR_4) {
     REGFILTER2 VAR_7;
     REGFILTERPINS2* VAR_8;
     int VAR_9;

     for (VAR_9 = 0; VAR_4->pins[VAR_9].flags != 0xFFFFFFFF; VAR_9++) ;
     VAR_7 = 2;
     VAR_7 = VAR_4->merit;
     VAR_7 = VAR_9;
     VAR_7 = VAR_8 = FUNC_2(VAR_9*sizeof(REGFILTERPINS2));
     if (!VAR_8) {
  VAR_5 = VAR_2;
  break;
     }
     for (VAR_9 = 0; VAR_4->pins[VAR_9].flags != 0xFFFFFFFF; VAR_9++) {
  REGPINTYPES* VAR_10;
  CLSID* VAR_11;
  int VAR_12, VAR_13;

  for (VAR_13 = 0; VAR_4->pins[VAR_9].mediatypes[VAR_13].majortype; VAR_13++) ;

  VAR_10 = FUNC_2(VAR_13*(sizeof(REGPINTYPES) + 2*sizeof(CLSID)));
  if (!VAR_10) {
      VAR_5 = VAR_2;
      break;
  }
  VAR_11 = (CLSID*) (VAR_10 + VAR_13);
  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
      (VAR_10 + VAR_12)->clsMajorType = VAR_11 + VAR_12*2;
      FUNC_10(VAR_11 + VAR_12*2, VAR_4->pins[VAR_9].mediatypes[VAR_12].majortype, sizeof(CLSID));
      (VAR_10 + VAR_12)->clsMinorType = VAR_11 + VAR_12*2 + 1;
      if (VAR_4->pins[VAR_9].mediatypes[VAR_12].subtype)
   FUNC_10(VAR_11 + VAR_12*2 + 1, VAR_4->pins[VAR_9].mediatypes[VAR_12].subtype, sizeof(CLSID));
      else {

   FUNC_10(VAR_11 + VAR_12*2 + 1, VAR_4->pins[VAR_9].mediatypes[VAR_12].majortype, sizeof(CLSID));
   *(DWORD*)(VAR_11 + VAR_12*2 + 1) = VAR_4->pins[VAR_9].mediatypes[VAR_12].fourcc;
      }
  }
  VAR_8[VAR_9].dwFlags = VAR_4->pins[VAR_9].flags;
  VAR_8[VAR_9].cInstances = 0;
  VAR_8[VAR_9].nMediaTypes = VAR_12;
  VAR_8[VAR_9].lpMediaType = VAR_10;
  VAR_8[VAR_9].nMediums = 0;
  VAR_8[VAR_9].lpMedium = ((void*)0);
  VAR_8[VAR_9].clsPinCategory = ((void*)0);
     }

     if (FUNC_6(VAR_5)) {
  FUNC_5("failed to register with hresult 0x%x\n", VAR_5);
  FUNC_3(VAR_8);
  break;
     }

     VAR_5 = FUNC_7(VAR_6, VAR_4->clsid, VAR_4->name, ((void*)0), VAR_4->category, ((void*)0), &VAR_7);

     while (VAR_9) {
  FUNC_3((REGPINTYPES*)VAR_8[VAR_9-1].lpMediaType);
  VAR_9--;
     }
     FUNC_3(VAR_8);
 }
    }

    if (VAR_6)
 FUNC_8(VAR_6);

    FUNC_4();

    return VAR_5;
}
