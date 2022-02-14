
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct encoder_packet {int timebase_den; } ;
typedef int int64_t ;
typedef int int32_t ;


 int VAR_0 ;

__attribute__((used)) static int32_t FUNC_0(struct encoder_packet *VAR_1, int64_t VAR_2)
{
 return (int32_t)(VAR_2 * VAR_0 / VAR_1->timebase_den);
}
