
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;
typedef int SlruCtl ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int,int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_4 (int,int ,int ) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;

bool
FUNC_5(SlruCtl VAR_13, int VAR_14)
{
 int VAR_15 = VAR_14 / VAR_8;
 int VAR_16 = VAR_14 % VAR_8;
 int VAR_17 = VAR_16 * VAR_0;
 char VAR_18[VAR_2];
 int VAR_19;
 bool VAR_20;
 off_t VAR_21;

 FUNC_2(VAR_13, VAR_18, VAR_15);

 VAR_19 = FUNC_1(VAR_18, VAR_3 | VAR_4);
 if (VAR_19 < 0)
 {

  if (VAR_10 == VAR_1)
   return 0;


  VAR_11 = VAR_7;
  VAR_12 = VAR_10;
  FUNC_3(VAR_13, VAR_14, 0);
 }

 if ((VAR_21 = FUNC_4(VAR_19, 0, VAR_5)) < 0)
 {
  VAR_11 = VAR_9;
  VAR_12 = VAR_10;
  FUNC_3(VAR_13, VAR_14, 0);
 }

 VAR_20 = VAR_21 >= (off_t) (VAR_17 + VAR_0);

 if (FUNC_0(VAR_19) != 0)
 {
  VAR_11 = VAR_6;
  VAR_12 = VAR_10;
  return 0;
 }

 return VAR_20;
}
