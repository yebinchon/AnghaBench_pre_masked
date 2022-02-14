
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int value_or_type; int * name_or_val; } ;
struct TYPE_11__ {int value; int name; } ;
typedef TYPE_1__ SVal_LF_USHORT ;
typedef TYPE_1__ SVal_LF_UQUADWORD ;
typedef TYPE_1__ SVal_LF_ULONG ;
typedef TYPE_1__ SVal_LF_SHORT ;
typedef TYPE_1__ SVal_LF_QUADWORD ;
typedef TYPE_1__ SVal_LF_LONG ;
typedef TYPE_1__ SVal_LF_CHAR ;
typedef TYPE_8__ SVal ;
typedef int SCString ;


 int FUNC_0 (unsigned int,unsigned int,int,unsigned char*,int ) ;
 int FUNC_1 (unsigned int,unsigned int,int,unsigned char*,int ) ;
 int FUNC_2 (unsigned int,unsigned int,int,unsigned char*,int ) ;
 int FUNC_3 (unsigned int,unsigned int,int,unsigned char*,int ) ;







 void* FUNC_4 (int) ;
 int FUNC_5 (int *,TYPE_1__*,int) ;
 int FUNC_6 (int *,unsigned char*,unsigned int*,unsigned int) ;
 int FUNC_7 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(SVal *VAR_6, unsigned char *VAR_7, unsigned int *VAR_8, unsigned int VAR_9)
{
 VAR_6->name_or_val = 0;

 FUNC_1(*VAR_8, VAR_9, VAR_6->value_or_type, VAR_7, VAR_4);

 if (VAR_6->value_or_type < 134) {
  SCString *VAR_10 = (SCString *) FUNC_4 (sizeof (SCString));
  if (!VAR_10) {
   return 0;
  }
  FUNC_6 (VAR_10, VAR_7, VAR_8, VAR_9);
  VAR_6->name_or_val = VAR_10;
 } else {
  switch (VAR_6->value_or_type) {
  case 129:
  {
      SVal_LF_UQUADWORD VAR_11;
      FUNC_3(*VAR_8, VAR_9, VAR_11.value, VAR_7, VAR_2);
      FUNC_6(&VAR_11.name, VAR_7, VAR_8, VAR_9);
      VAR_6->name_or_val = FUNC_4(sizeof(SVal_LF_UQUADWORD));
      if (!VAR_6->name_or_val) {
       break;
      }
      FUNC_5(VAR_6->name_or_val, &VAR_11, sizeof(SVal_LF_UQUADWORD));
      break;
  }
  case 132:
  {
   SVal_LF_QUADWORD VAR_12;
   FUNC_3(*VAR_8, VAR_9, VAR_12.value, VAR_7, VAR_2);
   FUNC_6 (&VAR_12.name, VAR_7, VAR_8, VAR_9);
   VAR_6->name_or_val = FUNC_4 (sizeof (SVal_LF_QUADWORD));
   if (!VAR_6->name_or_val) {
    break;
   }
   FUNC_5 (VAR_6->name_or_val, &VAR_12, sizeof (SVal_LF_QUADWORD));
   break;
  }
  case 134:
  {
   SVal_LF_CHAR VAR_13;
   FUNC_0(*VAR_8, VAR_9, VAR_13.value, VAR_7, VAR_3);
   FUNC_6 (&VAR_13.name, VAR_7, VAR_8, VAR_9);
   VAR_6->name_or_val = FUNC_4 (sizeof (SVal_LF_CHAR));
   if (!VAR_6->name_or_val) {
    break;
   }
   FUNC_5 (VAR_6->name_or_val, &VAR_13, sizeof (SVal_LF_CHAR));
   break;
  }
  case 133:
  {
   SVal_LF_LONG VAR_14;
   VAR_14.value = 0;



   FUNC_2(*VAR_8, VAR_9, VAR_14.value, VAR_7, VAR_1);
   FUNC_6 (&VAR_14.name, VAR_7, VAR_8, VAR_9);
   VAR_6->name_or_val = FUNC_4 (sizeof (SVal_LF_LONG));
   if (!VAR_6->name_or_val) {
    break;
   }
   FUNC_5 (VAR_6->name_or_val, &VAR_14, sizeof (SVal_LF_LONG));
   break;
  }
  case 130:
  {
   SVal_LF_ULONG VAR_15;
   VAR_15.value = 0;



   FUNC_2(*VAR_8, VAR_9, VAR_15.value, VAR_7, VAR_5);
   FUNC_6 (&VAR_15.name, VAR_7, VAR_8, VAR_9);
   VAR_6->name_or_val = FUNC_4 (sizeof (SVal_LF_ULONG));
   if (!VAR_6->name_or_val) {
    break;
   }
   FUNC_5(VAR_6->name_or_val, &VAR_15, sizeof (SVal_LF_ULONG));
   break;
  }
  case 131:
  {
   SVal_LF_SHORT VAR_16;
   FUNC_1(*VAR_8, VAR_9, VAR_16.value, VAR_7, VAR_0);
   FUNC_6 (&VAR_16.name, VAR_7, VAR_8, VAR_9);
   VAR_6->name_or_val = FUNC_4 (sizeof (SVal_LF_SHORT));
   if (!VAR_6->name_or_val) {
    break;
   }
   FUNC_5 (VAR_6->name_or_val, &VAR_16, sizeof (SVal_LF_SHORT));
   break;
  }
  case 128:
  {
   SVal_LF_USHORT VAR_17;
   FUNC_1(*VAR_8, VAR_9, VAR_17.value, VAR_7, VAR_4);
   FUNC_6 (&VAR_17.name, VAR_7, VAR_8, VAR_9);
   VAR_6->name_or_val = FUNC_4 (sizeof(SVal_LF_USHORT));
   if (!VAR_6->name_or_val) {
    break;
   }
   FUNC_5(VAR_6->name_or_val, &VAR_17, sizeof (SVal_LF_USHORT));
   break;
  }
  default:
   FUNC_7 ("parse_sval: Skipping unsupported type (%d)\n", VAR_6->value_or_type);
   return 0;
  }
 }

 return 1;
}
