
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_hdmi_port {int dapm; int jack_pin; scalar_t__ is_connect; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct hdac_hdmi_port *VAR_0)
{
 if (VAR_0->is_connect)
  FUNC_1(VAR_0->dapm, VAR_0->jack_pin);
 else
  FUNC_0(VAR_0->dapm, VAR_0->jack_pin);
 FUNC_2(VAR_0->dapm);
}
