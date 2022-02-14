
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vncBuffer ;
typedef int uint8 ;
typedef scalar_t__ HBITMAP ;





 int FUNC_0 (int ) ;

 int VAR_0 ;
 int FUNC_1 (char*,int ,int,int,int,int) ;
 int FUNC_2 (int ,int,int,int,int,int *,int,int) ;
 int FUNC_3 (int ,int,int,int,int,int *,int,int) ;
 int FUNC_4 (int ,int,int,int,int,int *,int,int,int) ;
 int FUNC_5 (int ,int,int,int,int,int *,int,int) ;
 scalar_t__ FUNC_6 (int*,int*,int*,int*) ;

void
FUNC_7(uint8 VAR_1,
              int VAR_2, int VAR_3, int VAR_4, int VAR_5,
             HBITMAP VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9, VAR_10;
 VAR_9 = VAR_2;
 VAR_10 = VAR_3;

 if (FUNC_6(&VAR_2, &VAR_3, &VAR_4, &VAR_5))
 {

  VAR_7 += VAR_2 - VAR_9;
  VAR_8 += VAR_3 - VAR_10;
  switch (FUNC_0(VAR_1))
  {
   case 129:
    FUNC_4(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5, (vncBuffer *) VAR_6, VAR_7,
       VAR_8, 0x0);
    break;
   case 128:
    FUNC_5(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5, (vncBuffer *) VAR_6, VAR_7, VAR_8);
    break;
   case 131:
    FUNC_2(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5, (vncBuffer *) VAR_6, VAR_7, VAR_8);
    break;
   case 130:
    FUNC_3(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5, (vncBuffer *) VAR_6, VAR_7,
      VAR_8);
    break;
   default:
    FUNC_1("ui_memblt: op%d %d,%d %dx%d\n", VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
    FUNC_3(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5, (vncBuffer *) VAR_6, VAR_7,
      VAR_8);
    break;
  }
 }
}
