
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_size ;
typedef int mp_int ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static int
FUNC_9(mp_int VAR_2, mp_int VAR_3, mp_int VAR_4, mp_int VAR_5, mp_int VAR_6)
{
 mp_size VAR_7 = FUNC_1(VAR_3),
    VAR_8,
    VAR_9;

 VAR_8 = (VAR_7 + 1) * VAR_0;
 VAR_9 = (VAR_7 - 1) * VAR_0;

 if (FUNC_4(VAR_2, VAR_5) != VAR_1)
  return 0;


 FUNC_6(VAR_5, VAR_9);
 FUNC_2(VAR_5, VAR_4, VAR_6);
 FUNC_6(VAR_6, VAR_8);


 FUNC_7(VAR_2, VAR_8);






 FUNC_2(VAR_6, VAR_3, VAR_5);
 FUNC_7(VAR_5, VAR_8);
 (void) FUNC_5(VAR_2, VAR_5, VAR_2);





 if ((FUNC_0(VAR_2) < 0) && !FUNC_8(VAR_2, VAR_8))
  return 0;





 if (FUNC_3(VAR_2, VAR_3) >= 0)
 {
  (void) FUNC_5(VAR_2, VAR_3, VAR_2);
  if (FUNC_3(VAR_2, VAR_3) >= 0)
  {
   (void) FUNC_5(VAR_2, VAR_3, VAR_2);
  }
 }


 return 1;
}
