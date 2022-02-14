
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct image_writer_opts {int format; } ;


 struct image_writer_opts VAR_0 ;
 char const* FUNC_0 (int ,int ) ;
 int VAR_1 ;

const char *FUNC_1(const struct image_writer_opts *VAR_2)
{
    struct image_writer_opts VAR_3 = VAR_0;

    if (!VAR_2)
        VAR_2 = &VAR_3;

    return FUNC_0(VAR_1, VAR_2->format);
}
