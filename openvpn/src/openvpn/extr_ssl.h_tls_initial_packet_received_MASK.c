
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_multi {scalar_t__ n_sessions; } ;



__attribute__((used)) static inline bool
FUNC_0(const struct tls_multi *VAR_0)
{
    return VAR_0->n_sessions > 0;
}
