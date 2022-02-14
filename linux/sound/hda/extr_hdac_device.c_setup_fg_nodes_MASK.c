
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_device {int afg_function_id; int afg_unsol; int mfg_function_id; int mfg_unsol; void* mfg; void* afg; } ;
typedef void* hda_nid_t ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hdac_device*,int ,void**) ;
 int FUNC_1 (struct hdac_device*,void*,int ) ;

__attribute__((used)) static void FUNC_2(struct hdac_device *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 hda_nid_t VAR_6;

 VAR_4 = FUNC_0(VAR_2, VAR_0, &VAR_6);
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++, VAR_6++) {
  VAR_5 = FUNC_1(VAR_2, VAR_6,
       VAR_1);
  switch (VAR_5 & 0xff) {
  case 129:
   VAR_2->afg = VAR_6;
   VAR_2->afg_function_id = VAR_5 & 0xff;
   VAR_2->afg_unsol = (VAR_5 >> 8) & 1;
   break;
  case 128:
   VAR_2->mfg = VAR_6;
   VAR_2->mfg_function_id = VAR_5 & 0xff;
   VAR_2->mfg_unsol = (VAR_5 >> 8) & 1;
   break;
  default:
   break;
  }
 }
}
