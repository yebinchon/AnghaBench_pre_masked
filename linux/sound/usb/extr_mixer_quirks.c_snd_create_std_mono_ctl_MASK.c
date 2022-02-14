
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_mixer_interface {int dummy; } ;
typedef int snd_kcontrol_tlv_rw_t ;


 int FUNC_0 (struct usb_mixer_interface*,unsigned int,unsigned int,unsigned int,int,int ,char const*,int *) ;

__attribute__((used)) static int FUNC_1(struct usb_mixer_interface *VAR_0,
    unsigned int VAR_1,
    unsigned int VAR_2,
    unsigned int VAR_3,
    int VAR_4,
    const char *VAR_5,
    snd_kcontrol_tlv_rw_t *VAR_6)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
  VAR_4, 0 , VAR_5, VAR_6);
}
