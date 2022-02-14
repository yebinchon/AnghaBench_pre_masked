
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int code; scalar_t__ name; } ;


 scalar_t__* fz_glyph_name_from_mac_roman ;
 TYPE_1__* mre_diff_table ;
 scalar_t__ nelem (TYPE_1__*) ;
 int strcmp (char const*,scalar_t__) ;

__attribute__((used)) static int lookup_mre_code(const char *name)
{
 int i;
 for (i = 0; i < (int)nelem(mre_diff_table); ++i)
  if (!strcmp(name, mre_diff_table[i].name))
   return mre_diff_table[i].code;
 for (i = 0; i < 256; i++)
  if (fz_glyph_name_from_mac_roman[i] && !strcmp(name, fz_glyph_name_from_mac_roman[i]))
   return i;
 return -1;
}
