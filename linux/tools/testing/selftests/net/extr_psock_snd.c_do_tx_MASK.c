
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int one ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ,int) ;
 int VAR_12 ;
 int FUNC_4 (int,int ,char*) ;
 scalar_t__ FUNC_5 (int,int ,int ,int const*,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_7(void)
{
 const int VAR_14 = 1;
 int VAR_15, VAR_16;

 VAR_15 = FUNC_6(VAR_2, VAR_9 ? VAR_3 : VAR_4, 0);
 if (VAR_15 == -1)
  FUNC_4(1, VAR_12, "socket t");

 if (VAR_8)
  FUNC_2(VAR_15);

 if (VAR_10 &&
     FUNC_5(VAR_15, VAR_5, VAR_0, &VAR_14, sizeof(VAR_14)))
  FUNC_4(1, VAR_12, "setsockopt qdisc bypass");

 if (VAR_11 &&
     FUNC_5(VAR_15, VAR_5, VAR_1, &VAR_14, sizeof(VAR_14)))
  FUNC_4(1, VAR_12, "setsockopt vnet");

 VAR_16 = FUNC_0(VAR_6);

 if (VAR_7 < VAR_16)
  VAR_16 = VAR_7;

 FUNC_3(VAR_15, VAR_13, VAR_16);

 if (FUNC_1(VAR_15))
  FUNC_4(1, VAR_12, "close t");

 return VAR_16;
}
