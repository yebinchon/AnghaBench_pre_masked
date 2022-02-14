
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_chmap {int dummy; } ;
typedef int hda_nid_t ;


 int FUNC_0 (struct hdac_chmap*,int ) ;
 int FUNC_1 (struct hdac_chmap*,int ,int,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,int) ;
 int FUNC_3 (struct hdac_chmap*,int ,int,int) ;

void FUNC_4(struct hdac_chmap *VAR_0,
           hda_nid_t VAR_1, bool VAR_2, int VAR_3,
           int VAR_4, unsigned char *VAR_5,
           bool VAR_6)
{
 if (!VAR_2 && VAR_6) {
  FUNC_1(VAR_0, VAR_1,
        VAR_4, VAR_5, VAR_3);
 } else {
  FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
  FUNC_2(VAR_5, VAR_3);
 }

 FUNC_0(VAR_0, VAR_1);
}
