
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct encoder_packet {int dts; int timebase_den; } ;
typedef int int64_t ;


 int VAR_0 ;

__attribute__((used)) static inline int64_t FUNC_0(struct encoder_packet *VAR_1)
{
 return VAR_1->dts * VAR_0 / VAR_1->timebase_den;
}
