
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_output {struct sway_output* data; } ;
struct sway_output {int dummy; } ;



struct sway_output *FUNC_0(struct wlr_output *VAR_0) {
 return VAR_0->data;
}
