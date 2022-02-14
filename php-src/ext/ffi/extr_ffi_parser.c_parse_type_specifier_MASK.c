
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; } ;
typedef TYPE_1__ zend_ffi_dcl ;
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
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char const**,size_t*) ;
 int FUNC_2 (int,TYPE_1__*) ;
 int FUNC_3 (int,TYPE_1__*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char const*,size_t,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(int VAR_14, zend_ffi_dcl *VAR_15) {
 const char *VAR_16;
 size_t VAR_17;
 switch (VAR_14) {
  case 132:
   if (VAR_15->flags & VAR_11) FUNC_4("unexpected", VAR_14);
   VAR_14 = FUNC_0();
   VAR_15->flags |= VAR_13;
   break;
  case 145:
   if (VAR_15->flags & (VAR_11-(VAR_9|VAR_12))) FUNC_4("unexpected", VAR_14);
   VAR_14 = FUNC_0();
   VAR_15->flags |= VAR_1;
   break;
  case 137:
   if (VAR_15->flags & (VAR_11-(VAR_9|VAR_12|VAR_5))) FUNC_4("unexpected", VAR_14);
   VAR_14 = FUNC_0();
   VAR_15->flags |= VAR_8;
   break;
  case 139:
   if (VAR_15->flags & (VAR_11-(VAR_9|VAR_12|VAR_8|VAR_6|VAR_7))) FUNC_4("unexpected", VAR_14);
   VAR_14 = FUNC_0();
   VAR_15->flags |= VAR_5;
   break;
  case 138:
   if (VAR_15->flags & VAR_6) {
    if (VAR_15->flags & (VAR_11-(VAR_6|VAR_9|VAR_12|VAR_5))) FUNC_4("unexpected", VAR_14);
    VAR_15->flags |= VAR_7;
   } else {
    if (VAR_15->flags & (VAR_11-(VAR_6|VAR_9|VAR_12|VAR_5|VAR_3|VAR_2))) FUNC_4("unexpected", VAR_14);
    VAR_15->flags |= VAR_6;
   }
   VAR_14 = FUNC_0();
   break;
  case 141:
   if (VAR_15->flags & (VAR_11-(VAR_2))) FUNC_4("unexpected", VAR_14);
   VAR_14 = FUNC_0();
   VAR_15->flags |= VAR_4;
   break;
  case 143:
   if (VAR_15->flags & (VAR_11-(VAR_6|VAR_2))) FUNC_4("unexpected", VAR_14);
   VAR_14 = FUNC_0();
   VAR_15->flags |= VAR_3;
   break;
  case 136:
   if (VAR_15->flags & (VAR_11-(VAR_1|VAR_8|VAR_6|VAR_7|VAR_5))) FUNC_4("unexpected", VAR_14);
   VAR_14 = FUNC_0();
   VAR_15->flags |= VAR_9;
   break;
  case 133:
   if (VAR_15->flags & (VAR_11-(VAR_1|VAR_8|VAR_6|VAR_7|VAR_5))) FUNC_4("unexpected", VAR_14);
   VAR_14 = FUNC_0();
   VAR_15->flags |= VAR_12;
   break;
  case 131:
   if (VAR_15->flags & VAR_11) FUNC_4("unexpected", VAR_14);
   VAR_14 = FUNC_0();
   VAR_15->flags |= VAR_0;
   break;
  case 130:
  case 144:
  case 129:
  case 128:
   if (VAR_15->flags & (VAR_11-(VAR_4|VAR_3|VAR_6))) FUNC_4("unexpected", VAR_14);
   VAR_14 = FUNC_0();
   VAR_15->flags |= VAR_2;
   break;
  case 135:
  case 134:
   if (VAR_15->flags & VAR_11) FUNC_4("unexpected", VAR_14);
   VAR_14 = FUNC_3(VAR_14, VAR_15);
   break;
  case 142:
   if (VAR_15->flags & VAR_11) FUNC_4("unexpected", VAR_14);
   VAR_14 = FUNC_2(VAR_14, VAR_15);
   break;
  case 140:
   if (VAR_15->flags & VAR_11) FUNC_4("unexpected", VAR_14);

   VAR_14 = FUNC_1(VAR_14, &VAR_16, &VAR_17);
   VAR_15->flags |= VAR_10;
   FUNC_5(VAR_16, VAR_17, VAR_15);
   break;
  default:
   FUNC_4("unexpected", VAR_14);
 }
 return VAR_14;
}
