
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct sw842_param {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;



 size_t VAR_3 ;
 int FUNC_0 (int *) ;
 size_t** VAR_4 ;
 int FUNC_1 (struct sw842_param*,size_t) ;
 int FUNC_2 (struct sw842_param*,size_t) ;
 int FUNC_3 (char*,size_t) ;
 int FUNC_4 (char*,size_t) ;
 scalar_t__ VAR_5 ;
 int * VAR_6 ;

__attribute__((used)) static int FUNC_5(struct sw842_param *VAR_7, u8 VAR_8)
{
 int VAR_9, VAR_10 = 0;

 if (VAR_8 >= VAR_1)
  return -VAR_0;

 for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
  u8 VAR_11 = VAR_4[VAR_8][VAR_9];

  FUNC_3("op is %x\n", VAR_11);

  switch (VAR_11 & VAR_2) {
  case 130:
   VAR_10 = FUNC_1(VAR_7, VAR_11 & VAR_3);
   break;
  case 129:
   VAR_10 = FUNC_2(VAR_7, VAR_11 & VAR_3);
   break;
  case 128:
   break;
  default:
   FUNC_4("Internal error, invalid op %x\n", VAR_11);
   return -VAR_0;
  }

  if (VAR_10)
   return VAR_10;
 }

 if (VAR_5)
  FUNC_0(&VAR_6[VAR_8]);

 return 0;
}
