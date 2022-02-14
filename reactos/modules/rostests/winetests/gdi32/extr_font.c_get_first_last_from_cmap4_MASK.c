
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int start_count; int end_count; } ;
typedef TYPE_1__ cmap_format_4_seg ;
struct TYPE_6__ {int seg_countx2; } ;
typedef TYPE_2__ cmap_format_4 ;
typedef int USHORT ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int,TYPE_1__*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static BOOL FUNC_3(void *VAR_2, DWORD *VAR_3, DWORD *VAR_4, DWORD VAR_5)
{
    int VAR_6;
    cmap_format_4 *VAR_7 = (cmap_format_4*)VAR_2;
    USHORT VAR_8 = FUNC_0(VAR_7->seg_countx2) / 2;

    *VAR_3 = 0x10000;

    for(VAR_6 = 0; VAR_6 < VAR_8; VAR_6++)
    {
        cmap_format_4_seg VAR_9;

        FUNC_1(VAR_7, VAR_6, &VAR_9);

        if(VAR_9.start_count > 0xfffe) break;

        if(*VAR_3 == 0x10000) *VAR_3 = VAR_9.start_count;

        *VAR_4 = FUNC_2(VAR_9.end_count, 0xfffe);
    }

    if(*VAR_3 == 0x10000) return VAR_0;
    return VAR_1;
}
