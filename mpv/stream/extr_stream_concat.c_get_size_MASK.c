
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream {struct priv* priv; } ;
struct priv {int size; } ;
typedef int int64_t ;



__attribute__((used)) static int64_t FUNC_0(struct stream *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    return VAR_1->size;
}
