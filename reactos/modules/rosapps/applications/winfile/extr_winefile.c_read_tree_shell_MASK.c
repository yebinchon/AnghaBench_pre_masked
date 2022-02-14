
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_16__ ;


typedef int USHORT ;
struct TYPE_21__ {int expanded; scalar_t__ down; int * folder; TYPE_3__* pidl; int etype; } ;
struct TYPE_18__ {scalar_t__ cb; } ;
struct TYPE_20__ {TYPE_1__ mkid; } ;
struct TYPE_19__ {TYPE_4__ entry; } ;
struct TYPE_17__ {int iMalloc; int * iDesktop; } ;
typedef int SORT_ORDER ;
typedef TYPE_2__ Root ;
typedef TYPE_3__* LPITEMIDLIST ;
typedef int LPCWSTR ;
typedef scalar_t__ LPBYTE ;
typedef int IShellFolder ;
typedef int HWND ;
typedef int HRESULT ;
typedef int HCURSOR ;
typedef TYPE_4__ Entry ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_16__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *,TYPE_3__*,int ,int *,void**) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 TYPE_4__* FUNC_5 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_3__*,scalar_t__) ;
 int FUNC_7 (TYPE_4__*,int *,int ,int ) ;

__attribute__((used)) static Entry* FUNC_8(Root* VAR_5, LPITEMIDLIST VAR_6, SORT_ORDER VAR_7, HWND VAR_8)
{
 Entry* VAR_9 = &VAR_5->entry;
 Entry* VAR_10;
 LPITEMIDLIST VAR_11 = VAR_6;
 IShellFolder* VAR_12;
 IShellFolder* VAR_13 = ((void*)0);
 HRESULT VAR_14;

 HCURSOR VAR_15 = FUNC_4(FUNC_3(0, (LPCWSTR)VAR_2));

 VAR_9->etype = VAR_0;
 VAR_12 = VAR_1.iDesktop;

 while(VAR_9) {
  VAR_9->pidl = VAR_11;
  VAR_9->folder = VAR_12;

  if (!VAR_6->mkid.cb)
   break;


  VAR_11 = FUNC_1(VAR_1.iMalloc, VAR_6->mkid.cb+sizeof(USHORT));
  FUNC_6(VAR_11, VAR_6, VAR_6->mkid.cb);
  ((LPITEMIDLIST)((LPBYTE)VAR_11+VAR_6->mkid.cb))->mkid.cb = 0;

  VAR_14 = FUNC_2(VAR_12, VAR_11, 0, &VAR_3, (void**)&VAR_13);
  if (FUNC_0(VAR_14))
   break;

  FUNC_7(VAR_9, ((void*)0), VAR_7, VAR_8);

  if (VAR_9->down)
   VAR_9->expanded = VAR_4;

  VAR_10 = FUNC_5(VAR_9, VAR_11);
  if (!VAR_10)
   break;

  VAR_12 = VAR_13;
  VAR_9 = VAR_10;


  VAR_6 = (LPITEMIDLIST) ((LPBYTE)VAR_6+VAR_6->mkid.cb);
 }

 FUNC_4(VAR_15);

 return VAR_9;
}
