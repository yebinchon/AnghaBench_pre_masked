
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct iio_channel_info {int bytes; int location; } ;


 int FUNC_0 (int ,struct iio_channel_info*) ;
 int FUNC_1 (int ,struct iio_channel_info*) ;
 int FUNC_2 (int ,struct iio_channel_info*) ;
 int FUNC_3 (int ,struct iio_channel_info*) ;
 int FUNC_4 (char*) ;

void FUNC_5(char *VAR_0,
    struct iio_channel_info *VAR_1,
    int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  switch (VAR_1[VAR_3].bytes) {

  case 1:
   FUNC_0(*(uint8_t *)(VAR_0 + VAR_1[VAR_3].location),
       &VAR_1[VAR_3]);
   break;
  case 2:
   FUNC_1(*(uint16_t *)(VAR_0 + VAR_1[VAR_3].location),
       &VAR_1[VAR_3]);
   break;
  case 4:
   FUNC_2(*(uint32_t *)(VAR_0 + VAR_1[VAR_3].location),
       &VAR_1[VAR_3]);
   break;
  case 8:
   FUNC_3(*(uint64_t *)(VAR_0 + VAR_1[VAR_3].location),
       &VAR_1[VAR_3]);
   break;
  default:
   break;
  }
 FUNC_4("\n");
}
