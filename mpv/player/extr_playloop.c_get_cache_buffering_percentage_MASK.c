
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {int cache_buffer; scalar_t__ demuxer; } ;



int FUNC_0(struct MPContext *VAR_0)
{
    return VAR_0->demuxer ? VAR_0->cache_buffer : -1;
}
