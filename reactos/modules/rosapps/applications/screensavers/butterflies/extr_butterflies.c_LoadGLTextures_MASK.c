
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int byte ;
typedef int Texture ;
struct TYPE_3__ {int bmBits; int bmHeight; int bmWidth; } ;
typedef scalar_t__ HBITMAP ;
typedef int BMP ;
typedef TYPE_1__ BITMAP ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,int,TYPE_1__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int,int ,int ,int ,int ,int ) ;
 int * VAR_13 ;

void FUNC_9()
{
 HBITMAP VAR_14;
 BITMAP VAR_15;
    int VAR_16;


 byte VAR_17[]={ VAR_8, VAR_9, VAR_10 };

 FUNC_5(sizeof(VAR_17), &VAR_13[0]);
 for (VAR_16=0; VAR_16<sizeof(VAR_17); VAR_16++)
 {
  VAR_14=(HBITMAP)FUNC_2(FUNC_0(((void*)0)),FUNC_3(VAR_17[VAR_16]), VAR_11, 0, 0, VAR_12);
  if (VAR_14)
  {
   FUNC_1(VAR_14,sizeof(VAR_15), &VAR_15);



   FUNC_6(VAR_6,4);
   FUNC_4(VAR_3, VAR_13[VAR_16]);
   FUNC_7(VAR_3,VAR_4,VAR_1);
   FUNC_7(VAR_3,VAR_5,VAR_2);


   FUNC_8(VAR_3, 3, VAR_15.bmWidth, VAR_15.bmHeight, VAR_0, VAR_7, VAR_15.bmBits);
  }
 }
}
