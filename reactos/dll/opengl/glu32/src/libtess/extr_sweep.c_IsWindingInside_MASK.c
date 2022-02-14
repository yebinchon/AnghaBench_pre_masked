
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int windingRule; } ;
typedef int GLboolean ;
typedef TYPE_1__ GLUtesselator ;


 int VAR_0 ;





 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static GLboolean FUNC_1( GLUtesselator *VAR_2, int VAR_3 )
{
  switch( VAR_2->windingRule ) {
  case 129:
    return (VAR_3 & 1);
  case 130:
    return (VAR_3 != 0);
  case 128:
    return (VAR_3 > 0);
  case 131:
    return (VAR_3 < 0);
  case 132:
    return (VAR_3 >= 2) || (VAR_3 <= -2);
  }

  FUNC_0( VAR_0 );

  return VAR_1;
}
