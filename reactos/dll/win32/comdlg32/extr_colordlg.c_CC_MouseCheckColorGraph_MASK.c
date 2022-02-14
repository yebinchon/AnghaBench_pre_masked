
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {long y; scalar_t__ x; } ;
struct TYPE_10__ {long right; long bottom; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ POINT ;
typedef int LPARAM ;
typedef int HWND ;
typedef int BOOL ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 long VAR_1 ;
 long VAR_2 ;
 int FUNC_5 (TYPE_1__*,TYPE_2__) ;
 int FUNC_6 (int ,TYPE_2__*) ;
 int VAR_3 ;

__attribute__((used)) static BOOL FUNC_7( HWND VAR_4, int VAR_5, int *VAR_6, int *VAR_7, LPARAM VAR_8 )
{
 HWND VAR_9;
 POINT VAR_10;
 RECT VAR_11;
 long VAR_12,VAR_13;

 FUNC_0(VAR_8, &VAR_10);
 FUNC_1(VAR_4, &VAR_10);
 VAR_9 = FUNC_3( VAR_4, VAR_5 );
 FUNC_4(VAR_9, &VAR_11);

 if (!FUNC_5(&VAR_11, VAR_10))
  return VAR_0;

 FUNC_2(VAR_9, &VAR_11);
 FUNC_6(VAR_9, &VAR_10);

 VAR_12 = (long) VAR_10.x * VAR_1;
 VAR_12 /= VAR_11.right;
 VAR_13 = (long) (VAR_11.bottom - VAR_10.y) * VAR_2;
 VAR_13 /= VAR_11.bottom;

 if (VAR_12 < 0) VAR_12 = 0;
 if (VAR_13 < 0) VAR_13 = 0;
 if (VAR_12 > VAR_1) VAR_12 = VAR_1;
 if (VAR_13 > VAR_2) VAR_13 = VAR_2;

 if (VAR_6)
  *VAR_6 = VAR_12;
 if (VAR_7)
  *VAR_7 = VAR_13;

 return VAR_3;
}
