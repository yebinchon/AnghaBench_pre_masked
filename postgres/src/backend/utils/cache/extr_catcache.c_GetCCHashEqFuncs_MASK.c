
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RegProcedure ;
typedef int Oid ;
typedef int * CCHashFN ;
typedef int CCFastEqualFN ;




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
 int * VAR_11 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_12 ;
 int * VAR_13 ;
 int VAR_14 ;
 int * VAR_15 ;
 int VAR_16 ;
 int * VAR_17 ;
 int VAR_18 ;
 int * VAR_19 ;
 int VAR_20 ;
 int * VAR_21 ;

__attribute__((used)) static void
FUNC_1(Oid VAR_22, CCHashFN *VAR_23, RegProcedure *VAR_24, CCFastEqualFN *VAR_25)
{
 switch (VAR_22)
 {
  case 145:
   *VAR_23 = VAR_11;
   *VAR_25 = VAR_10;
   *VAR_24 = VAR_1;
   break;
  case 144:
   *VAR_23 = VAR_11;
   *VAR_25 = VAR_10;
   *VAR_24 = VAR_2;
   break;
  case 141:
   *VAR_23 = VAR_17;
   *VAR_25 = VAR_16;
   *VAR_24 = VAR_5;
   break;
  case 143:
   *VAR_23 = VAR_13;
   *VAR_25 = VAR_12;
   *VAR_24 = VAR_3;
   break;
  case 142:
   *VAR_23 = VAR_15;
   *VAR_25 = VAR_14;
   *VAR_24 = VAR_4;
   break;
  case 128:
   *VAR_23 = VAR_21;
   *VAR_25 = VAR_20;
   *VAR_24 = VAR_8;
   break;
  case 140:
  case 131:
  case 132:
  case 133:
  case 134:
  case 138:
  case 129:
  case 137:
  case 136:
  case 130:
  case 135:
   *VAR_23 = VAR_15;
   *VAR_25 = VAR_14;
   *VAR_24 = VAR_6;
   break;
  case 139:
   *VAR_23 = VAR_19;
   *VAR_25 = VAR_18;
   *VAR_24 = VAR_7;
   break;
  default:
   FUNC_0(VAR_0, "type %u not supported as catcache key", VAR_22);
   *VAR_23 = ((void*)0);

   *VAR_24 = VAR_9;
   break;
 }
}
