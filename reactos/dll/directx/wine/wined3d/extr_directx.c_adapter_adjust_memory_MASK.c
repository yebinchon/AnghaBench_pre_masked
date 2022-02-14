
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_adapter {scalar_t__ vram_bytes_used; } ;
typedef scalar_t__ UINT64 ;
typedef scalar_t__ INT64 ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (scalar_t__) ;

UINT64 FUNC_2(struct wined3d_adapter *VAR_0, INT64 VAR_1)
{
    VAR_0->vram_bytes_used += VAR_1;
    FUNC_0("Adjusted used adapter memory by 0x%s to 0x%s.\n",
            FUNC_1(VAR_1),
            FUNC_1(VAR_0->vram_bytes_used));
    return VAR_0->vram_bytes_used;
}
