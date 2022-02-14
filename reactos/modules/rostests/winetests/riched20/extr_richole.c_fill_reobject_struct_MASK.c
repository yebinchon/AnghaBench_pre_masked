
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* cy; void* cx; } ;
struct TYPE_5__ {int cbStruct; void* dwUser; void* dwFlags; void* dvaspect; TYPE_1__ sizel; int polesite; int pstg; int poleobj; void* cp; int clsid; } ;
typedef TYPE_2__ REOBJECT ;
typedef int LPSTORAGE ;
typedef int LPOLEOBJECT ;
typedef int LPOLECLIENTSITE ;
typedef void* LONG ;
typedef void* DWORD ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(REOBJECT *VAR_1, LONG VAR_2, LPOLEOBJECT VAR_3,
                                 LPSTORAGE VAR_4, LPOLECLIENTSITE VAR_5, LONG VAR_6,
                                 LONG VAR_7, DWORD VAR_8, DWORD VAR_9, DWORD VAR_10)
{
  VAR_1->cbStruct = sizeof(*VAR_1);
  VAR_1->clsid = VAR_0;
  VAR_1->cp = VAR_2;
  VAR_1->poleobj = VAR_3;
  VAR_1->pstg = VAR_4;
  VAR_1->polesite = VAR_5;
  VAR_1->sizel.cx = VAR_6;
  VAR_1->sizel.cy = VAR_7;
  VAR_1->dvaspect = VAR_8;
  VAR_1->dwFlags = VAR_9;
  VAR_1->dwUser = VAR_10;
}
