
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int Relation ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 char* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_4 ;
 int FUNC_11 (int ,char*,...) ;

bool
FUNC_12(Relation VAR_5, BlockNumber VAR_6, Buffer VAR_7, uint8 VAR_8)
{
 BlockNumber VAR_9 = FUNC_4(VAR_6);
 int VAR_10 = FUNC_5(VAR_6);
 int VAR_11 = FUNC_6(VAR_6);
 uint8 VAR_12 = VAR_8 << VAR_11;
 char *VAR_13;
 bool VAR_14 = 0;

 FUNC_0(VAR_8 & VAR_4);





 if (!FUNC_3(VAR_7) || FUNC_1(VAR_7) != VAR_9)
  FUNC_11(VAR_3, "wrong buffer passed to visibilitymap_clear");

 FUNC_7(VAR_7, VAR_0);
 VAR_13 = FUNC_9(FUNC_2(VAR_7));

 if (VAR_13[VAR_10] & VAR_12)
 {
  VAR_13[VAR_10] &= ~VAR_12;

  FUNC_8(VAR_7);
  VAR_14 = 1;
 }

 FUNC_7(VAR_7, VAR_1);

 return VAR_14;
}
