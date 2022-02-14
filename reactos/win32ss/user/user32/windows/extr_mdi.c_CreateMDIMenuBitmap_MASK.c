
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HDC ;
typedef int HBITMAP ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,scalar_t__,scalar_t__,int ,scalar_t__,int ,int ) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__,scalar_t__) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,scalar_t__,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static HBITMAP FUNC_12(void)
{
 HDC VAR_5 = FUNC_2(0);
 HDC VAR_6 = FUNC_2(VAR_5);
 HBITMAP VAR_7 = FUNC_8(0, FUNC_9(VAR_1) );
 HBITMAP VAR_8;
 HBITMAP VAR_9, VAR_10;

 VAR_9 = FUNC_11(VAR_5, VAR_7);
 VAR_8 = FUNC_1(VAR_5,FUNC_6(VAR_2),FUNC_6(VAR_3));
 VAR_10 = FUNC_11(VAR_6, VAR_8);

 FUNC_0(VAR_6, 0, 0, FUNC_6(VAR_2), FUNC_6(VAR_3),
          VAR_5, FUNC_6(VAR_2), 0, VAR_4);

 FUNC_11(VAR_5, VAR_9);
 FUNC_4(VAR_7);
 FUNC_3(VAR_5);

 VAR_9 = FUNC_11( VAR_6, FUNC_5(VAR_0) );

 FUNC_10( VAR_6, FUNC_6(VAR_2) - 1, 0, ((void*)0) );
 FUNC_7( VAR_6, FUNC_6(VAR_2) - 1, FUNC_6(VAR_3) - 1);

 FUNC_11(VAR_6, VAR_9 );
 FUNC_11(VAR_6, VAR_10);
 FUNC_3(VAR_6);

 return VAR_8;
}
