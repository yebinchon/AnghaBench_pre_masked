
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct mac_font_mapping {scalar_t__ encoding_id; scalar_t__ language_id; char const* code_page; } ;


 size_t VAR_0 ;
 struct mac_font_mapping* VAR_1 ;

__attribute__((used)) static const char *FUNC_0(uint16_t VAR_2, uint16_t VAR_3)
{
 for (size_t VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  const struct mac_font_mapping *VAR_5 = &VAR_1[VAR_4];

  if (VAR_5->encoding_id == VAR_2 &&
      VAR_5->language_id == VAR_3)
   return VAR_5->code_page;
 }

 return ((void*)0);
}
