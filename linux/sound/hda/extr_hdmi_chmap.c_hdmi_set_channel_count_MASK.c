
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_device {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int FUNC_0 (struct hdac_device*,int ) ;
 int FUNC_1 (struct hdac_device*,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct hdac_device *VAR_1,
       hda_nid_t VAR_2, int VAR_3)
{
 if (VAR_3 != FUNC_0(VAR_1, VAR_2))
  FUNC_1(VAR_1, VAR_2, 0,
        VAR_0, VAR_3 - 1);
}
