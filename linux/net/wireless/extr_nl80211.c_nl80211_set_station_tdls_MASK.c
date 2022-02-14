
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct station_parameters {scalar_t__ he_capa_len; void* he_capa; void* vht_capa; void* ht_capa; int aid; } ;
struct genl_info {scalar_t__* attrs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct genl_info*,struct station_parameters*) ;
 int FUNC_1 (struct genl_info*,struct station_parameters*) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct genl_info *VAR_6,
        struct station_parameters *VAR_7)
{
 int VAR_8;

 if (VAR_6->attrs[VAR_3])
  VAR_7->aid = FUNC_3(VAR_6->attrs[VAR_3]);
 if (VAR_6->attrs[VAR_2])
  VAR_7->ht_capa =
   FUNC_2(VAR_6->attrs[VAR_2]);
 if (VAR_6->attrs[VAR_4])
  VAR_7->vht_capa =
   FUNC_2(VAR_6->attrs[VAR_4]);
 if (VAR_6->attrs[VAR_1]) {
  VAR_7->he_capa =
   FUNC_2(VAR_6->attrs[VAR_1]);
  VAR_7->he_capa_len =
   FUNC_4(VAR_6->attrs[VAR_1]);

  if (VAR_7->he_capa_len < VAR_5)
   return -VAR_0;
 }

 VAR_8 = FUNC_0(VAR_6, VAR_7);
 if (VAR_8)
  return VAR_8;

 return FUNC_1(VAR_6, VAR_7);
}
