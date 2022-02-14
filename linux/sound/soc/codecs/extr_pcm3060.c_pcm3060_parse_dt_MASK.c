
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm3060_priv {int out_se; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node const*,char*) ;

__attribute__((used)) static void FUNC_1(const struct device_node *VAR_0,
        struct pcm3060_priv *VAR_1)
{
 VAR_1->out_se = FUNC_0(VAR_0, "ti,out-single-ended");
}
