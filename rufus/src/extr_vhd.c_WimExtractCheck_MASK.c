
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_3 (char*,char*,...) ;
 int VAR_21 ;

uint8_t FUNC_4(void)
{
 FUNC_1(VAR_2, VAR_12);
 FUNC_1(VAR_7, VAR_12);
 FUNC_1(VAR_5, VAR_12);
 FUNC_1(VAR_0, VAR_12);
 FUNC_1(VAR_3, VAR_12);
 FUNC_1(VAR_4, VAR_12);
 FUNC_1(VAR_6, VAR_12);
 FUNC_1(VAR_8, VAR_12);
 FUNC_1(VAR_1, VAR_12);

 if (VAR_15 && VAR_19 && VAR_17 && VAR_16 && VAR_14)
  VAR_21 |= VAR_11;
 if (FUNC_0())
  VAR_21 |= VAR_9;
 if ((VAR_21 & VAR_11) && VAR_13 && VAR_18 && VAR_20)
  VAR_21 |= VAR_10;

 FUNC_3("WIM extraction method(s) supported: %s%s%s", (VAR_21 & VAR_9)?"7-Zip":
  ((VAR_21 & VAR_11)?"":"NONE"),
  (FUNC_2(VAR_21) == (VAR_11|VAR_9))?", ":
  "", (VAR_21 & VAR_11)?"wimgapi.dll":"");
 FUNC_3("WIM apply method supported: %s", (VAR_21 & VAR_10)?"wimgapi.dll":"NONE");
 return VAR_21;
}
