
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_codec_priv {unsigned int jack_status; scalar_t__ jack; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,unsigned int,int ) ;

__attribute__((used)) static void FUNC_1(struct hdmi_codec_priv *VAR_1,
       unsigned int VAR_2)
{
 if (VAR_1->jack && VAR_2 != VAR_1->jack_status) {
  FUNC_0(VAR_1->jack, VAR_2, VAR_0);
  VAR_1->jack_status = VAR_2;
 }
}
