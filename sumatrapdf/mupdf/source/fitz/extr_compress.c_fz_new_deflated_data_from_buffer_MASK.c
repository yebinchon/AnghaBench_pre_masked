
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_deflate_level ;
typedef int fz_context ;
typedef int fz_buffer ;


 size_t FUNC_0 (int *,int *,unsigned char**) ;
 unsigned char* FUNC_1 (int *,size_t*,unsigned char*,size_t,int ) ;

unsigned char *FUNC_2(fz_context *VAR_0, size_t *VAR_1, fz_buffer *VAR_2, fz_deflate_level VAR_3)
{
 unsigned char *VAR_4;
 size_t VAR_5 = FUNC_0(VAR_0, VAR_2, &VAR_4);

 if (VAR_5 == 0 || VAR_4 == ((void*)0))
 {
  *VAR_1 = 0;
  return ((void*)0);
 }

 return FUNC_1(VAR_0, VAR_1, VAR_4, VAR_5, VAR_3);
}
