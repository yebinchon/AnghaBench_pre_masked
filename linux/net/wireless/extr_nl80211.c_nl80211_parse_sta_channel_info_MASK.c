
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct station_parameters {int supported_channels_len; int supported_oper_classes_len; void* supported_oper_classes; void* supported_channels; } ;
struct genl_info {scalar_t__* attrs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 void* FUNC_0 (scalar_t__) ;
 void* FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct genl_info *VAR_3,
          struct station_parameters *VAR_4)
{
 if (VAR_3->attrs[VAR_1]) {
  VAR_4->supported_channels =
       FUNC_0(VAR_3->attrs[VAR_1]);
  VAR_4->supported_channels_len =
       FUNC_1(VAR_3->attrs[VAR_1]);





  if (VAR_4->supported_channels_len < 2)
   return -VAR_0;
  if (VAR_4->supported_channels_len % 2)
   return -VAR_0;
 }

 if (VAR_3->attrs[VAR_2]) {
  VAR_4->supported_oper_classes =
   FUNC_0(VAR_3->attrs[VAR_2]);
  VAR_4->supported_oper_classes_len =
    FUNC_1(VAR_3->attrs[VAR_2]);




  if (VAR_4->supported_oper_classes_len < 2 ||
      VAR_4->supported_oper_classes_len > 253)
   return -VAR_0;
 }
 return 0;
}
