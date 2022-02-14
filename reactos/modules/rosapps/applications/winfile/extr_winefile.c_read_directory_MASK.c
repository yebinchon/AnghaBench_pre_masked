
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ WCHAR ;
struct TYPE_11__ {scalar_t__ prescan_node; } ;
struct TYPE_9__ {int dwFileAttributes; int cFileName; } ;
struct TYPE_10__ {scalar_t__ etype; TYPE_1__ data; struct TYPE_10__* next; struct TYPE_10__* down; } ;
typedef int SORT_ORDER ;
typedef scalar_t__* PWSTR ;
typedef scalar_t__* LPCWSTR ;
typedef int HWND ;
typedef TYPE_2__ Entry ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_8__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (scalar_t__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,scalar_t__*) ;
 int FUNC_4 (TYPE_2__*,scalar_t__*) ;

__attribute__((used)) static void FUNC_5(Entry* VAR_5, LPCWSTR VAR_6, SORT_ORDER VAR_7, HWND VAR_8)
{
 WCHAR VAR_9[VAR_4];
 Entry* VAR_10;
 LPCWSTR VAR_11;
 PWSTR VAR_12;

 if (VAR_5->etype == VAR_0)
 {
  FUNC_2(VAR_5, VAR_8);

  if (VAR_3.prescan_node) {
   VAR_11 = VAR_6;
   VAR_12 = VAR_9;

   while(*VAR_11)
    *VAR_12++ = *VAR_11++;

   *VAR_12++ = '\\';

   for(VAR_10=VAR_5->down; VAR_10; VAR_10=VAR_10->next)
    if (VAR_10->data.dwFileAttributes & VAR_2) {
     FUNC_2(VAR_10, VAR_8);
     FUNC_0(VAR_10, VAR_7);
    }
  }
 }
 else
 {
  FUNC_4(VAR_5, VAR_6);

  if (VAR_3.prescan_node) {
   VAR_11 = VAR_6;
   VAR_12 = VAR_9;

   while(*VAR_11)
    *VAR_12++ = *VAR_11++;

   *VAR_12++ = '\\';

   for(VAR_10=VAR_5->down; VAR_10; VAR_10=VAR_10->next)
    if (VAR_10->data.dwFileAttributes & VAR_2) {
     FUNC_1(VAR_12, VAR_10->data.cFileName);
     FUNC_4(VAR_10, VAR_9);
     FUNC_0(VAR_10, VAR_7);
    }
  }
 }

 FUNC_0(VAR_5, VAR_7);
}
