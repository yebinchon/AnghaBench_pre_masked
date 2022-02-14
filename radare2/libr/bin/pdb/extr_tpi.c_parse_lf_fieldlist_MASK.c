
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int substructs; } ;
typedef TYPE_1__ SLF_FIELDLIST ;
typedef int ELeafType ;


 int FUNC_0 (int ,int ,int const) ;
 int FUNC_1 (unsigned int,unsigned int,int,unsigned char*,int ) ;
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
 int FUNC_2 () ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_3(SLF_FIELDLIST *VAR_11, unsigned char *VAR_12, unsigned int *VAR_13, unsigned int VAR_14)
{
 ELeafType VAR_15;
 int VAR_16 = 0;
 unsigned char *VAR_17 = VAR_12;

 VAR_11->substructs = FUNC_2 ();

 while (*VAR_13 <= VAR_14) {
  FUNC_1(*VAR_13, VAR_14, VAR_15, VAR_17, VAR_10);
  switch (VAR_15) {
  case 132:
   FUNC_0(VAR_0, VAR_5, 132);
   break;
  case 129:
   FUNC_0(VAR_3, VAR_8, 129);
   break;
  case 130:
   FUNC_0(VAR_2, VAR_7, 130);
   break;
  case 131:
   FUNC_0(VAR_1, VAR_6, 131);
   break;
  case 128:
   FUNC_0(VAR_4, VAR_9, 128);
   break;
  default:

   return 0;
  }

  if (VAR_16 != 0) {
   VAR_17 += VAR_16;
  } else {
   return 0;
  }
 }
 return 0;
}
