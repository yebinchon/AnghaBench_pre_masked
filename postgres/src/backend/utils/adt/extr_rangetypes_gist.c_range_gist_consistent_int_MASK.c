
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TypeCacheEntry ;
typedef int StrategyNumber ;
typedef int RangeType ;
typedef int Datum ;


 int const* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int *,int const*,int const*) ;
 int FUNC_5 (int *,int const*,int const*) ;
 int FUNC_6 (int *,int const*,int const*) ;
 int FUNC_7 (int *,int const*,int ) ;
 int FUNC_8 (int *,int const*,int const*) ;
 int FUNC_9 (int *,int const*,int const*) ;
 int FUNC_10 (int *,int const*,int const*) ;
 int FUNC_11 (int *,int const*,int const*) ;

__attribute__((used)) static bool
FUNC_12(TypeCacheEntry *VAR_1, StrategyNumber VAR_2,
        const RangeType *VAR_3, Datum VAR_4)
{
 switch (VAR_2)
 {
  case 135:
   if (FUNC_1(VAR_3) || FUNC_1(FUNC_0(VAR_4)))
    return 0;
   return (!FUNC_11(VAR_1, VAR_3,
             FUNC_0(VAR_4)));
  case 129:
   if (FUNC_1(VAR_3) || FUNC_1(FUNC_0(VAR_4)))
    return 0;
   return (!FUNC_5(VAR_1, VAR_3,
            FUNC_0(VAR_4)));
  case 130:
   return FUNC_9(VAR_1, VAR_3,
             FUNC_0(VAR_4));
  case 128:
   if (FUNC_1(VAR_3) || FUNC_1(FUNC_0(VAR_4)))
    return 0;
   return (!FUNC_6(VAR_1, VAR_3,
             FUNC_0(VAR_4)));
  case 136:
   if (FUNC_1(VAR_3) || FUNC_1(FUNC_0(VAR_4)))
    return 0;
   return (!FUNC_10(VAR_1, VAR_3,
            FUNC_0(VAR_4)));
  case 137:
   if (FUNC_1(VAR_3) || FUNC_1(FUNC_0(VAR_4)))
    return 0;
   if (FUNC_4(VAR_1, VAR_3,
          FUNC_0(VAR_4)))
    return 1;
   return FUNC_9(VAR_1, VAR_3,
             FUNC_0(VAR_4));
  case 133:
   return FUNC_8(VAR_1, VAR_3,
             FUNC_0(VAR_4));
  case 134:






   if (FUNC_2(VAR_3))
    return 1;
   return FUNC_9(VAR_1, VAR_3,
             FUNC_0(VAR_4));
  case 132:
   return FUNC_7(VAR_1, VAR_3, VAR_4);
  case 131:





   if (FUNC_1(FUNC_0(VAR_4)))
    return FUNC_2(VAR_3);
   return FUNC_8(VAR_1, VAR_3,
             FUNC_0(VAR_4));
  default:
   FUNC_3(VAR_0, "unrecognized range strategy: %d", VAR_2);
   return 0;
 }
}
