
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Bitmapset ;
typedef scalar_t__ AttrNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;

AttrNumber *
FUNC_5(Bitmapset *VAR_1, int *VAR_2)
{
 int VAR_3,
    VAR_4;
 AttrNumber *VAR_5;
 int VAR_6 = FUNC_3(VAR_1);

 if (VAR_2)
  *VAR_2 = VAR_6;


 VAR_5 = (AttrNumber *) FUNC_4(sizeof(AttrNumber) * VAR_6);
 VAR_3 = 0;
 VAR_4 = -1;
 while ((VAR_4 = FUNC_2(VAR_1, VAR_4)) >= 0)
 {






  FUNC_0(FUNC_1(VAR_4));
  FUNC_0(VAR_4 <= VAR_0);

  VAR_5[VAR_3++] = (AttrNumber) VAR_4;


  FUNC_0(VAR_3 <= VAR_6);
 }

 return VAR_5;
}
