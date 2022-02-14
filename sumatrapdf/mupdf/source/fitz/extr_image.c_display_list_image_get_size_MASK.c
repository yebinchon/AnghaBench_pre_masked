
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_image ;
typedef int fz_display_list_image ;
typedef int fz_context ;



__attribute__((used)) static size_t
FUNC_0(fz_context *VAR_0, fz_image *VAR_1)
{
 fz_display_list_image *VAR_2 = (fz_display_list_image *)VAR_1;

 if (VAR_2 == ((void*)0))
  return 0;

 return sizeof(fz_display_list_image) + 4096;
}
