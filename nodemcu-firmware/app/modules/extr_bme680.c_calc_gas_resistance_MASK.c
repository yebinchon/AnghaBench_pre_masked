
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int int64_t ;
struct TYPE_2__ {scalar_t__ range_sw_err; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__* VAR_2 ;

__attribute__((used)) static uint32_t FUNC_0(uint16_t VAR_3, uint8_t VAR_4)
{
 int64_t VAR_5;
 uint64_t VAR_6;
 int64_t VAR_7;
 uint32_t VAR_8;

 VAR_5 = (int64_t) ((1340 + (5 * (int64_t) VAR_0.range_sw_err)) * ((int64_t) VAR_1[VAR_4])) / 65536;
 VAR_6 = (((int64_t) ((int64_t) VAR_3 * 32768) - (int64_t) (16777216)) + VAR_5);
 VAR_7 = (((int64_t) VAR_2[VAR_4] * (int64_t) VAR_5) / 512);
 VAR_8 = (uint32_t) ((VAR_7 + ((int64_t) VAR_6 / 2)) / (int64_t) VAR_6);

 return VAR_8;
}
