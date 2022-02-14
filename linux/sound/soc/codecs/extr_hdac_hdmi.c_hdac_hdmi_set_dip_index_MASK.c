
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_device {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int FUNC_0 (struct hdac_device*,int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct hdac_device *VAR_1, hda_nid_t VAR_2,
    int VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = (VAR_3 << 5) | (VAR_4 & 0x1f);
 FUNC_0(VAR_1, VAR_2, 0, VAR_0, VAR_5);
}
