
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int baut_rate; void* exist_parity; int parity; int stop_bits; void* data_bits; } ;
 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 TYPE_1__ VAR_12 ;
 int FUNC_0 (unsigned int) ;

uint32_t FUNC_1( unsigned VAR_13, uint32_t VAR_14, int VAR_15, int VAR_16, int VAR_17 )
{
  switch( VAR_14 )
  {
    case 142:
    case 135:
    case 148:
    case 144:
    case 137:
    case 132:
    case 146:
    case 141:
    case 139:
    case 136:
    case 134:
    case 149:
    case 145:
    case 143:
    case 138:
    case 133:
    case 147:
    case 140:
      VAR_12.baut_rate = VAR_14;
      break;
    default:
      VAR_12.baut_rate = 132;
      break;
  }

  switch( VAR_15 )
  {
    case 5:
      VAR_12.data_bits = VAR_2;
      break;
    case 6:
      VAR_12.data_bits = VAR_8;
      break;
    case 7:
      VAR_12.data_bits = VAR_7;
      break;
    case 8:
      VAR_12.data_bits = VAR_0;
      break;
    default:
      VAR_12.data_bits = VAR_0;
      break;
  }

  switch (VAR_17)
  {
    case 129:
      VAR_12.stop_bits = VAR_5;
      break;
    case 128:
      VAR_12.stop_bits = VAR_11;
      break;
    default:
      VAR_12.stop_bits = VAR_6;
      break;
  }

  switch (VAR_16)
  {
    case 131:
      VAR_12.parity = VAR_1;
      VAR_12.exist_parity = VAR_10;
      break;
    case 130:
      VAR_12.parity = VAR_4;
      VAR_12.exist_parity = VAR_10;
      break;
    default:
      VAR_12.parity = VAR_3;
      VAR_12.exist_parity = VAR_9;
      break;
  }

  FUNC_0(VAR_13);

  return VAR_14;
}
