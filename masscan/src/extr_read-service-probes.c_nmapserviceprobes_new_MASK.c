
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct NmapServiceProbeList {char const* filename; } ;


 struct NmapServiceProbeList* FUNC_0 (int,int) ;

__attribute__((used)) static struct NmapServiceProbeList *
FUNC_1(const char *VAR_0)
{
    struct NmapServiceProbeList *VAR_1;

    VAR_1 = FUNC_0(1, sizeof(*VAR_1));
    VAR_1->filename = VAR_0;

    return VAR_1;
}
