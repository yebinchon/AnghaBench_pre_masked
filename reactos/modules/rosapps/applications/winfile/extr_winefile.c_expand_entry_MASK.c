
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int hwnd; } ;
struct TYPE_12__ {void* header_wdths_ok; TYPE_4__ left; } ;
struct TYPE_10__ {char* cFileName; int dwFileAttributes; } ;
struct TYPE_11__ {void* expanded; TYPE_1__ data; struct TYPE_11__* next; struct TYPE_11__* down; } ;
typedef int LPARAM ;
typedef TYPE_2__ Entry ;
typedef TYPE_3__ ChildWnd ;
typedef void* BOOL ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_4__*,void*) ;
 int FUNC_2 (TYPE_4__*,TYPE_2__*,int *,int ,int) ;
 int FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static BOOL FUNC_4(ChildWnd* VAR_5, Entry* VAR_6)
{
 int VAR_7;
 Entry* VAR_8;

 if (!VAR_6 || VAR_6->expanded || !VAR_6->down)
  return VAR_0;

 VAR_8 = VAR_6->down;

 if (VAR_8->data.cFileName[0]=='.' && VAR_8->data.cFileName[1]=='\0' && VAR_8->next) {
  VAR_8 = VAR_8->next;

  if (VAR_8->data.cFileName[0]=='.' && VAR_8->data.cFileName[1]=='.' &&
    VAR_8->data.cFileName[2]=='\0' && VAR_8->next)
   VAR_8 = VAR_8->next;
 }


 if (!(VAR_8->data.dwFileAttributes&VAR_1))
  return VAR_0;

 VAR_7 = FUNC_0(VAR_5->left.hwnd, VAR_2, 0, (LPARAM)VAR_6);

 VAR_6->expanded = VAR_4;


 FUNC_2(&VAR_5->left, VAR_8, ((void*)0), VAR_3, VAR_7);

 if (!VAR_5->header_wdths_ok) {
  if (FUNC_1(&VAR_5->left, VAR_0)) {
   FUNC_3(&VAR_5->left);

   VAR_5->header_wdths_ok = VAR_4;
  }
 }

 return VAR_4;
}
