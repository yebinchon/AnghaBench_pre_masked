
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_11__ {int * ctx; } ;
struct TYPE_10__ {TYPE_3__* doc; } ;
struct TYPE_9__ {float zoom; int area_valid; int thread; void* cookie; int * progress; int area; int const* bitmap; TYPE_2__* page; } ;
typedef int MuOfficeRenderProgressFn ;
typedef int MuOfficeRenderArea ;
typedef TYPE_1__ MuOfficeRender ;
typedef TYPE_2__ MuOfficePage ;
typedef TYPE_3__ MuOfficeDoc ;
typedef int MuOfficeBitmap ;
typedef int MuError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,int ,TYPE_1__*) ;
 int VAR_3 ;

MuError FUNC_3( MuOfficePage *VAR_4,
    float VAR_5,
   const MuOfficeBitmap *VAR_6,
   const MuOfficeRenderArea *VAR_7,
    MuOfficeRenderProgressFn *VAR_8,
    void *VAR_9,
    MuOfficeRender **VAR_10)
{
 MuOfficeRender *VAR_11;
 MuOfficeDoc *VAR_12;
 fz_context *VAR_13;

 if (!VAR_10)
  return VAR_0;
 *VAR_10 = ((void*)0);
 if (!VAR_4)
  return VAR_0;
 VAR_12 = VAR_4->doc;
 VAR_13 = VAR_12->ctx;

 VAR_11 = FUNC_0(1, sizeof(*VAR_11));
 if (VAR_11 == ((void*)0))
  return VAR_2;

 VAR_11->page = VAR_4;
 VAR_11->zoom = VAR_5;
 VAR_11->bitmap = VAR_6;
 if (VAR_7)
 {
  VAR_11->area = *VAR_7;
  VAR_11->area_valid = 1;
 }
 else
 {
  VAR_11->area_valid = 0;
 }
 VAR_11->progress = VAR_8;
 VAR_11->cookie = VAR_9;

 if (FUNC_2(&VAR_11->thread, VAR_3, VAR_11))
 {
  FUNC_1(VAR_11);
  return VAR_2;
 }

 *VAR_10 = VAR_11;

 return VAR_1;
}
