
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cris_spec_reg {unsigned int number; int applicable_version; int warning; int * name; } ;
typedef enum cris_disass_family { ____Placeholder_cris_disass_family } cris_disass_family ;


 int VAR_0 ;
 struct cris_spec_reg const* VAR_1 ;







__attribute__((used)) static const struct cris_spec_reg *
FUNC_0 (unsigned int VAR_2, enum cris_disass_family VAR_3)
{
  int VAR_4;

  for (VAR_4 = 0; VAR_1[VAR_4].name != ((void*)0); VAR_4++)
    {
      if (VAR_1[VAR_4].number == VAR_2)
 {
       if (VAR_3 == VAR_0) {
        switch (VAR_1[VAR_4].applicable_version) {
        case 128:
        case 129:
        case 131:
        case 130:
        case 133:
        case 132:

         if (!VAR_1[VAR_4].warning) {
          return &VAR_1[VAR_4];
         }
        default:;
        }
       } else if (VAR_1[VAR_4].applicable_version != 132) {
        return &VAR_1[VAR_4];
       }
 }
    }

  return ((void*)0);
}
