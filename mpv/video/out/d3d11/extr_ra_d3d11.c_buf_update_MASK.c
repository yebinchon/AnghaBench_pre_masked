
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_buf {struct d3d_buf* priv; } ;
struct ra {int dummy; } ;
struct d3d_buf {char* data; int dirty; } ;
typedef int ptrdiff_t ;


 int FUNC_0 (char*,void const*,size_t) ;

__attribute__((used)) static void FUNC_1(struct ra *VAR_0, struct ra_buf *VAR_1, ptrdiff_t VAR_2,
                       const void *VAR_3, size_t VAR_4)
{
    struct d3d_buf *VAR_5 = VAR_1->priv;

    char *VAR_6 = VAR_5->data;
    FUNC_0(VAR_6 + VAR_2, VAR_3, VAR_4);
    VAR_5->dirty = 1;
}
