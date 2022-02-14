
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_container {int workspace; scalar_t__ scratchpad; } ;



bool FUNC_0(struct sway_container *VAR_0) {
 return VAR_0->scratchpad && !VAR_0->workspace;
}
