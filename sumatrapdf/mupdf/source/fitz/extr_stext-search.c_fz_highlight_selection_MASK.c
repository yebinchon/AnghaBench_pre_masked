
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct highlight {int len; int cap; float hfuzz; float vfuzz; int * box; } ;
struct callbacks {struct highlight* arg; int on_line; int on_char; } ;
typedef int fz_stext_page ;
typedef int fz_quad ;
typedef int fz_point ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,int ,int ,struct callbacks*) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_1(fz_context *VAR_2, fz_stext_page *VAR_3, fz_point VAR_4, fz_point VAR_5, fz_quad *VAR_6, int VAR_7)
{
 struct callbacks VAR_8;
 struct highlight VAR_9;

 VAR_9.len = 0;
 VAR_9.cap = VAR_7;
 VAR_9.box = VAR_6;
 VAR_9.hfuzz = 0.5f;
 VAR_9.vfuzz = 0.1f;

 VAR_8.on_char = VAR_0;
 VAR_8.on_line = VAR_1;
 VAR_8.arg = &VAR_9;

 FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, &VAR_8);

 return VAR_9.len;
}
