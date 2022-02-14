
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int var4 ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int int32_t ;
struct TYPE_2__ {scalar_t__ par_h7; scalar_t__ par_h6; scalar_t__ par_h5; scalar_t__ par_h4; scalar_t__ par_h2; scalar_t__ par_h3; scalar_t__ par_h1; scalar_t__ t_fine; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static uint32_t FUNC_0(uint16_t VAR_1)
{
 int32_t VAR_2;
 int32_t VAR_3;
 int32_t VAR_4;
 int32_t VAR_5;
 int32_t VAR_6;
 int32_t VAR_7;
 int32_t VAR_8;
 int32_t VAR_9;

 VAR_8 = (((int32_t) VAR_0.t_fine * 5) + 128) / 256;
 VAR_2 = (int32_t) (VAR_1 - ((int32_t) ((int32_t) VAR_0.par_h1 * 16)))
         - (((VAR_8 * (int32_t) VAR_0.par_h3) / ((int32_t) 100)) / 2);
 VAR_3 = ((int32_t) VAR_0.par_h2
         * (((VAR_8 * (int32_t) VAR_0.par_h4) / ((int32_t) 100))
                 + (((VAR_8 * ((VAR_8 * (int32_t) VAR_0.par_h5) / ((int32_t) 100))) / 64)
                         / ((int32_t) 100)) + (int32_t) (1 * 16384))) / 1024;
 VAR_4 = VAR_2 * VAR_3;
 VAR_5 = (int32_t) VAR_0.par_h6 * 128;
 VAR_5 = ((VAR_5) + ((VAR_8 * (int32_t) VAR_0.par_h7) / ((int32_t) 100))) / 16;
 VAR_6 = ((VAR_4 / 16384) * (VAR_4 / 16384)) / 1024;
 VAR_7 = (VAR_5 * VAR_6) / 2;
 VAR_9 = (((VAR_4 + VAR_7) / 1024) * ((int32_t) 1000)) / 4096;

 if (VAR_9 > 100000)
  VAR_9 = 100000;
 else if (VAR_9 < 0)
  VAR_9 = 0;

 return (uint32_t) VAR_9;
}
