
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {float tv_sec; } ;
struct TYPE_3__ {float tv_sec; } ;
struct msg_stats {float bytes_sent; TYPE_2__ start; TYPE_1__ end; } ;



__attribute__((used)) static inline float FUNC_0(struct msg_stats VAR_0)
{
 return VAR_0.bytes_sent / (VAR_0.end.tv_sec - VAR_0.start.tv_sec);
}
