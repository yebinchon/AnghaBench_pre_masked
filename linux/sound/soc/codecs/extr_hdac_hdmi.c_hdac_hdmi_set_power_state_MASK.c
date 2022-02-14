
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_device {int dummy; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hdac_device*,int ) ;
 int FUNC_1 (struct hdac_device*,int ,unsigned int) ;
 int FUNC_2 (struct hdac_device*,int ,int ,int ,unsigned int) ;
 unsigned int FUNC_3 (struct hdac_device*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct hdac_device *VAR_3,
        hda_nid_t VAR_4, unsigned int VAR_5)
{
 int VAR_6;
 unsigned int VAR_7;

 if (FUNC_0(VAR_3, VAR_4) & VAR_2) {
  if (!FUNC_1(VAR_3, VAR_4, VAR_5)) {
   for (VAR_6 = 0; VAR_6 < 10; VAR_6++) {
    FUNC_2(VAR_3, VAR_4, 0,
      VAR_1,
      VAR_5);
    VAR_7 = FUNC_3(VAR_3,
      VAR_4, VAR_5);
    if (!(VAR_7 & VAR_0))
     break;
   }
  }
 }
}
