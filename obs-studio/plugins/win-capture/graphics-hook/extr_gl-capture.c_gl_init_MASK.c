
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int base_cx; int base_cy; int using_shtex; int cx; int cy; scalar_t__ using_scale; int shmem_fallback; int format; int hdc; } ;
struct TYPE_6__ {int cx; int cy; int force_shmem; scalar_t__ use_scale; } ;
struct TYPE_5__ {int right; int bottom; int member_0; } ;
typedef TYPE_1__ RECT ;
typedef int HWND ;
typedef int HDC ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 TYPE_3__ VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_2__* VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_5(HDC VAR_8)
{
 HWND VAR_9 = FUNC_1(VAR_8);
 int VAR_10 = VAR_1;
 bool VAR_11 = 0;
 RECT VAR_12 = {0};

 if (VAR_4) {
  VAR_5.base_cx = 1920;
  VAR_5.base_cy = 1080;
 } else {
  FUNC_0(VAR_9, &VAR_12);
  VAR_5.base_cx = VAR_12.right;
  VAR_5.base_cy = VAR_12.bottom;
 }

 VAR_5.hdc = VAR_8;
 VAR_5.format = VAR_0;
 VAR_5.using_scale = VAR_6->use_scale;
 VAR_5.using_shtex = VAR_7 &&
      !VAR_6->force_shmem &&
      !VAR_5.shmem_fallback;

 if (VAR_5.using_scale) {
  VAR_5.cx = VAR_6->cx;
  VAR_5.cy = VAR_6->cy;
 } else {
  VAR_5.cx = VAR_5.base_cx;
  VAR_5.cy = VAR_5.base_cy;
 }

 if (VAR_5.using_shtex) {
  VAR_11 = FUNC_4(VAR_9);
  if (!VAR_11)
   VAR_10 = VAR_2;
 } else {
  VAR_11 = FUNC_3(VAR_9);
 }

 if (!VAR_11)
  FUNC_2();
 else
  VAR_10 = VAR_3;

 return VAR_10;
}
