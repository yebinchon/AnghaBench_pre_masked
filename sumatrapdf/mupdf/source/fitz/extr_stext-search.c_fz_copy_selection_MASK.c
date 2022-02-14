
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callbacks {int * arg; int on_line; int on_char; } ;
typedef int fz_stext_page ;
typedef int fz_point ;
typedef int fz_context ;
typedef int fz_buffer ;


 int FUNC_0 (int *,int *,unsigned char**) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int ,int ,struct callbacks*) ;
 int * FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

char *
FUNC_5(fz_context *VAR_3, fz_stext_page *VAR_4, fz_point VAR_5, fz_point VAR_6, int VAR_7)
{
 struct callbacks VAR_8;
 fz_buffer *VAR_9;
 unsigned char *VAR_10;

 VAR_9 = FUNC_3(VAR_3, 1024);

 VAR_8.on_char = VAR_0;
 VAR_8.on_line = VAR_7 ? VAR_1 : VAR_2;
 VAR_8.arg = VAR_9;

 FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, &VAR_8);

 FUNC_4(VAR_3, VAR_9);
 FUNC_0(VAR_3, VAR_9, &VAR_10);
 FUNC_1(VAR_3, VAR_9);
 return (char*)VAR_10;
}
