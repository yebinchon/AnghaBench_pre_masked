
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct image_section_map {int dummy; } ;
struct image_file_map {int modtype; } ;
typedef int BOOL ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct image_file_map*,char const*,int ,struct image_section_map*) ;
 int FUNC_2 (struct image_file_map*,int *,char const*,struct image_section_map*) ;
 int FUNC_3 (struct image_file_map*,char const*,struct image_section_map*) ;

__attribute__((used)) static inline BOOL FUNC_4(struct image_file_map* VAR_2, const char* VAR_3,
                                      struct image_section_map* VAR_4)
{
    switch (VAR_2->modtype)
    {

    case 130: return FUNC_1(VAR_2, VAR_3, VAR_1, VAR_4);
    case 129: return FUNC_2(VAR_2, ((void*)0), VAR_3, VAR_4);

    case 128: return FUNC_3(VAR_2, VAR_3, VAR_4);
    default: FUNC_0(0); return VAR_0;
    }
}
