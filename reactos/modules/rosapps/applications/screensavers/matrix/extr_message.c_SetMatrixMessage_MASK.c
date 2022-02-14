
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int width; int height; int** message; } ;
struct TYPE_8__ {int right; int left; int bottom; int top; } ;
typedef int TCHAR ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ MATRIX_MESSAGE ;
typedef int HFONT ;
typedef int HDC ;
typedef int HBITMAP ;
typedef int HANDLE ;


 int FUNC_0 (int ,int ,int,int,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int,TYPE_1__*,int) ;
 int FUNC_5 (int ,TYPE_1__*,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int,int) ;
 int FUNC_8 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (TYPE_1__*,int,int) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (TYPE_1__*,int ,int ,int,int ) ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_13(MATRIX_MESSAGE *VAR_8, HFONT VAR_9, TCHAR *VAR_10)
{
 HDC VAR_11;
 RECT VAR_12;
 int VAR_13, VAR_14;

 HDC VAR_15;
 HBITMAP VAR_16;

 HANDLE VAR_17, VAR_18;




 VAR_11 = FUNC_6(((void*)0));

 VAR_15 = FUNC_1(VAR_11);
 VAR_16 = FUNC_0(VAR_5, VAR_4, 1, 1, 0);
 VAR_18 = FUNC_11(VAR_15, VAR_16);

 FUNC_10(((void*)0), VAR_11);




 FUNC_12(&VAR_12, 0, 0, VAR_8->width, VAR_4);
 FUNC_5(VAR_15, &VAR_12, FUNC_8(VAR_6));

 VAR_17 = FUNC_11(VAR_15, VAR_7);
 FUNC_4(VAR_15, VAR_10, -1, &VAR_12, VAR_1|VAR_2|VAR_3|VAR_0);

 FUNC_9(&VAR_12, (VAR_8->width-(VAR_12.right-VAR_12.left))/2, (VAR_8->height-(VAR_12.bottom-VAR_12.top))/2);
 FUNC_4(VAR_15, VAR_10, -1, &VAR_12, VAR_1|VAR_2|VAR_3);




 for(VAR_14 = 0; VAR_14 < VAR_8->height; VAR_14++)
 {
  for(VAR_13 = 0; VAR_13 < VAR_8->width; VAR_13++)
  {
   VAR_8->message[VAR_13][VAR_14] = FUNC_7(VAR_15, VAR_13, VAR_14) ? 0 : 1;
  }
 }




 FUNC_11(VAR_15, VAR_17);
 FUNC_11(VAR_15, VAR_18);

 FUNC_2(VAR_15);
 FUNC_3(VAR_16);
}
