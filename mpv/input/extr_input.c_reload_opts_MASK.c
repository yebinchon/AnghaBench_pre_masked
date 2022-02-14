
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_opts {scalar_t__ use_media_keys; scalar_t__ use_appleremote; } ;
struct input_ctx {int using_ar; int using_cocoa_media_keys; struct input_opts* opts; int opts_cache; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct input_ctx *VAR_0, bool VAR_1)
{
    FUNC_4(VAR_0->opts_cache);
}
