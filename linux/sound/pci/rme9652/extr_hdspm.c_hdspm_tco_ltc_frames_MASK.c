
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hdspm {int dummy; } ;


 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hdspm*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct hdspm *VAR_6)
{
 u32 VAR_7;
 int VAR_8 = 0;

 VAR_7 = FUNC_0(VAR_6, VAR_0 + 4);
 if (VAR_7 & VAR_1) {
  switch (VAR_7 & (129 |
     128)) {
  case 0:

   VAR_8 = VAR_2;
   break;
  case 129:

   VAR_8 = VAR_3;
   break;
  case 128:

   VAR_8 = VAR_4;
   break;
  default:

   VAR_8 = VAR_5;
   break;
  }
 }

 return VAR_8;
}
