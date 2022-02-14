
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct tep_format_field {int offset; int size; } ;
struct perf_sample {void* raw_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,void*,int) ;

u64 FUNC_4(struct tep_format_field *VAR_0, struct perf_sample *VAR_1,
    bool VAR_2)
{
 u64 VAR_3;
 void *VAR_4 = VAR_1->raw_data + VAR_0->offset;

 switch (VAR_0->size) {
 case 1:
  return *(u8 *)VAR_4;
 case 2:
  VAR_3 = *(u16 *)VAR_4;
  break;
 case 4:
  VAR_3 = *(u32 *)VAR_4;
  break;
 case 8:
  FUNC_3(&VAR_3, VAR_4, sizeof(u64));
  break;
 default:
  return 0;
 }

 if (!VAR_2)
  return VAR_3;

 switch (VAR_0->size) {
 case 2:
  return FUNC_0(VAR_3);
 case 4:
  return FUNC_1(VAR_3);
 case 8:
  return FUNC_2(VAR_3);
 default:
  return 0;
 }

 return 0;
}
