
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_archive_volume {int seek_to; int src; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static bool FUNC_1(struct mp_archive_volume *VAR_0)
{
    if (VAR_0->seek_to < 0)
        return 1;
    bool VAR_1 = FUNC_0(VAR_0->src, VAR_0->seek_to);
    VAR_0->seek_to = -1;
    return VAR_1;
}
