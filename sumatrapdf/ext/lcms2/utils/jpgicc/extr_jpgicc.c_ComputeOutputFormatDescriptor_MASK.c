
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int cmsUInt32Number ;
struct TYPE_2__ {int write_Adobe_marker; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;







 int FUNC_6 (int) ;

__attribute__((used)) static
cmsUInt32Number FUNC_7(cmsUInt32Number VAR_1, int VAR_2)
{
    int VAR_3 = FUNC_6(VAR_1);
    int VAR_4 = 0;
    int VAR_5 = 0;

    switch (VAR_2) {

   case 132:
       VAR_4 = 1;
       break;
   case 130:
   case 134:
   case 131:
   case 128:
   case 129:
       VAR_4 = 3;
       break;

   case 133:
       if (VAR_0.write_Adobe_marker)
           VAR_5 = 1;
       VAR_4 = 4;
       break;
   default:
       FUNC_4("Unsupported output color space");
    }

    return (FUNC_2(VAR_2)|FUNC_5(VAR_3)|FUNC_1(VAR_4)|FUNC_0(1)|FUNC_3(VAR_5));
}
