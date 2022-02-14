
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_format {int name; } ;
struct ra {int num_formats; struct ra_format** formats; } ;


 scalar_t__ strcmp (int ,char const*) ;

const struct ra_format *ra_find_named_format(struct ra *ra, const char *name)
{
    for (int n = 0; n < ra->num_formats; n++) {
        const struct ra_format *fmt = ra->formats[n];
        if (strcmp(fmt->name, name) == 0)
            return fmt;
    }
    return ((void*)0);
}
