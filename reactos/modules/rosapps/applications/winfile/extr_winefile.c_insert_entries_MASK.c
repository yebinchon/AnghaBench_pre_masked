
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dwFileAttributes; char* cFileName; } ;
struct TYPE_8__ {struct TYPE_8__* down; scalar_t__ expanded; TYPE_1__ data; struct TYPE_8__* next; } ;
struct TYPE_7__ {int hwnd; scalar_t__ treePane; } ;
typedef TYPE_2__ Pane ;
typedef int LPCWSTR ;
typedef int LPARAM ;
typedef TYPE_3__ Entry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int FUNC_4(Pane* VAR_11, Entry* VAR_12, LPCWSTR VAR_13, int VAR_14, int VAR_15)
{
 Entry* VAR_16 = VAR_12;

 if (!VAR_16)
  return VAR_15;

 FUNC_1(VAR_11->hwnd, VAR_4);

 for(; VAR_16; VAR_16=VAR_16->next) {
  if (VAR_11->treePane && !(VAR_16->data.dwFileAttributes&VAR_0))
   continue;

  if (VAR_16->data.dwFileAttributes & VAR_0) {

   if (VAR_11->treePane && VAR_16->data.cFileName[0] == '.')
                                if (VAR_16->data.cFileName[1] == '\0' ||
                                    (VAR_16->data.cFileName[1] == '.' &&
                                    VAR_16->data.cFileName[2] == '\0'))
     continue;


   if (!VAR_11->treePane && !(VAR_14&VAR_6))
    continue;
  }


  if (VAR_13)
   if (!FUNC_3(VAR_16->data.cFileName, VAR_13))
    continue;


  if (!(VAR_14&VAR_8) && (VAR_16->data.dwFileAttributes&(VAR_1|VAR_2)))
   continue;


  if ((VAR_14&(VAR_10|VAR_7|VAR_9)) != (VAR_10|VAR_7|VAR_9))
   switch(FUNC_2(VAR_16->data.cFileName)) {
     case 128:
      if (!(VAR_14 & VAR_10))
     continue;
    break;

     case 129:
    if (!(VAR_14 & VAR_7))
     continue;
    break;

     default:
    if (!(VAR_14 & VAR_9))
     continue;
   }

  if (VAR_15 != -1)
   VAR_15++;

  FUNC_0(VAR_11->hwnd, VAR_3, VAR_15, (LPARAM)VAR_16);

  if (VAR_11->treePane && VAR_16->expanded)
   VAR_15 = FUNC_4(VAR_11, VAR_16->down, VAR_13, VAR_14, VAR_15);
 }

 FUNC_1(VAR_11->hwnd, VAR_5);

 return VAR_15;
}
