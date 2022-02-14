
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef int u32 ;
struct ima_field_data {char* data; int len; } ;
typedef enum data_formats { ____Placeholder_data_formats } data_formats ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int,int ) ;
 int FUNC_1 (char*,void const*,int const) ;

__attribute__((used)) static int FUNC_2(const void *VAR_3, const u32 VAR_4,
      enum data_formats VAR_5,
      struct ima_field_data *VAR_6)
{
 u8 *VAR_7, *VAR_8;
 u32 VAR_9 = VAR_4;

 if (VAR_5 == VAR_0)
  VAR_9 = VAR_4 + 1;

 VAR_7 = FUNC_0(VAR_9, VAR_2);
 if (!VAR_7)
  return -VAR_1;

 FUNC_1(VAR_7, VAR_3, VAR_4);
 if (VAR_5 == VAR_0) {
  for (VAR_8 = VAR_7; VAR_8 - VAR_7 < VAR_4; VAR_8++)
   if (*VAR_8 == ' ')
    *VAR_8 = '_';
 }

 VAR_6->data = VAR_7;
 VAR_6->len = VAR_9;
 return 0;
}
