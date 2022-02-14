
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WPARAM ;
typedef int UINT ;
struct TYPE_7__ {int hInstance; } ;
struct TYPE_6__ {int mask; int fmt; int cxy; int pszText; } ;
struct TYPE_5__ {int * widths; } ;
typedef TYPE_1__ Pane ;
typedef int LPARAM ;
typedef int HWND ;
typedef int HMENU ;
typedef TYPE_2__ HDITEMW ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_4__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,int ,int,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int* VAR_15 ;
 int * VAR_16 ;

__attribute__((used)) static HWND FUNC_4(HWND VAR_17, Pane* VAR_18, UINT VAR_19)
{
 HDITEMW VAR_20;
 int VAR_21;

 HWND VAR_22 = FUNC_0(VAR_11, 0, VAR_13|VAR_14|VAR_10|VAR_9 ,
                                 0, 0, 0, 0, VAR_17, (HMENU)FUNC_3(VAR_19), VAR_3.hInstance, 0);
 if (!VAR_22)
  return 0;

 FUNC_2(VAR_22, VAR_12, (WPARAM)FUNC_1(VAR_1), VAR_2);

 VAR_20.mask = VAR_6|VAR_7|VAR_5;

 for(VAR_21=0; VAR_21<VAR_0; VAR_21++) {
  VAR_20.pszText = VAR_16[VAR_21];
  VAR_20.fmt = VAR_4 | VAR_15[VAR_21];
  VAR_20.cxy = VAR_18->widths[VAR_21];
  FUNC_2(VAR_22, VAR_8, VAR_21, (LPARAM)&VAR_20);
 }

 return VAR_22;
}
