
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ anticheat_hook; } ;
struct game_capture {int is_app; TYPE_1__ config; } ;



__attribute__((used)) static inline bool FUNC_0(struct game_capture *VAR_0)
{
 return VAR_0->config.anticheat_hook && !VAR_0->is_app;
}
