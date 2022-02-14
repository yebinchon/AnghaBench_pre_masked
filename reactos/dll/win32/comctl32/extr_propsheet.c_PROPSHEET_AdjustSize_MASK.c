
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int x; int y; } ;
struct TYPE_12__ {void* width; void* height; } ;
struct TYPE_11__ {int bottom; int left; int right; int top; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ PropSheetInfo ;
typedef TYPE_3__ PADDING_INFO ;
typedef int LPARAM ;
typedef int LONG ;
typedef int HWND ;
typedef int BOOL ;


 int FUNC_0 (TYPE_1__*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,TYPE_1__*) ;
 void* FUNC_5 (int,int,int) ;
 TYPE_3__ FUNC_6 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (TYPE_1__*,int ,int ,void*,void*) ;
 int FUNC_9 (int ,int ,int ,int ,int,int,int) ;
 int VAR_7 ;
 int FUNC_10 (char*,int ,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static BOOL FUNC_12(HWND VAR_10, PropSheetInfo* VAR_11)
{
  HWND VAR_12 = FUNC_2(VAR_10, VAR_2);
  HWND VAR_13 = FUNC_2(VAR_10, VAR_3);
  RECT VAR_14,VAR_15;
  int VAR_16;
  PADDING_INFO VAR_17 = FUNC_6(VAR_10);
  RECT VAR_18;
  LONG VAR_19;


  FUNC_1(VAR_13, &VAR_14);
  VAR_16 = VAR_14.bottom;




  FUNC_8(&VAR_14, 0, 0, VAR_11->width, VAR_11->height);
  FUNC_4(VAR_10, &VAR_14);


  VAR_18.left = VAR_18.right = 4;
  VAR_18.top = VAR_18.bottom = 8;
  FUNC_4(VAR_10, &VAR_18);




  FUNC_1(VAR_12,&VAR_15);

  FUNC_7(VAR_12, VAR_7, VAR_0, (LPARAM)&VAR_15);

  if ((VAR_14.bottom - VAR_14.top) < (VAR_15.bottom - VAR_15.top))
  {
      VAR_14.bottom = VAR_14.top + VAR_15.bottom - VAR_15.top;
      VAR_11->height = FUNC_5((VAR_14.bottom - VAR_14.top),8,VAR_18.top);
  }

  if ((VAR_14.right - VAR_14.left) < (VAR_15.right - VAR_15.left))
  {
      VAR_14.right = VAR_14.left + VAR_15.right - VAR_15.left;
      VAR_11->width = FUNC_5((VAR_14.right - VAR_14.left),4,VAR_18.left);
  }

  FUNC_7(VAR_12, VAR_7, VAR_8, (LPARAM)&VAR_14);

  VAR_14.right -= VAR_14.left;
  VAR_14.bottom -= VAR_14.top;
  FUNC_10("setting tab %p, rc (0,0)-(%d,%d)\n",
        VAR_12, VAR_14.right, VAR_14.bottom);
  FUNC_9(VAR_12, 0, 0, 0, VAR_14.right, VAR_14.bottom,
               VAR_5 | VAR_6 | VAR_4);

  FUNC_1(VAR_12, &VAR_14);

  FUNC_10("tab client rc %s\n", FUNC_11(&VAR_14));

  VAR_14.right += (VAR_17.x * 2);
  VAR_14.bottom += VAR_16 + (3 * VAR_17.y);

  VAR_19 = FUNC_3(VAR_10, VAR_1);
  if (!(VAR_19 & VAR_9))
    FUNC_0(&VAR_14, VAR_19, VAR_0);

  VAR_14.right -= VAR_14.left;
  VAR_14.bottom -= VAR_14.top;




  FUNC_10("setting dialog %p, rc (0,0)-(%d,%d)\n",
        VAR_10, VAR_14.right, VAR_14.bottom);
  FUNC_9(VAR_10, 0, 0, 0, VAR_14.right, VAR_14.bottom,
               VAR_5 | VAR_6 | VAR_4);
  return VAR_8;
}
