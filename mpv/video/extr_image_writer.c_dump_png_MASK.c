
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;
struct mp_image {int dummy; } ;
struct image_writer_opts {int format; } ;


 int VAR_0 ;
 struct image_writer_opts VAR_1 ;
 int FUNC_0 (struct mp_image*,struct image_writer_opts*,char const*,int *,struct mp_log*) ;

void FUNC_1(struct mp_image *VAR_2, const char *VAR_3, struct mp_log *VAR_4)
{
    struct image_writer_opts VAR_5 = VAR_1;
    VAR_5.format = VAR_0;
    FUNC_0(VAR_2, &VAR_5, VAR_3, ((void*)0), VAR_4);
}
