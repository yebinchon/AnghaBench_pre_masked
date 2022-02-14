
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_tplg_vendor_uuid_elem {scalar_t__ token; int uuid; } ;
struct device {int dummy; } ;
typedef int guid_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct device*,char*,scalar_t__) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, guid_t *VAR_3,
       struct snd_soc_tplg_vendor_uuid_elem *VAR_4)
{
 if (VAR_4->token == VAR_1) {
  FUNC_1(VAR_3, (guid_t *)&VAR_4->uuid);
  return 0;
 }

 FUNC_0(VAR_2, "Not an UUID token %d\n", VAR_4->token);

 return -VAR_0;
}
