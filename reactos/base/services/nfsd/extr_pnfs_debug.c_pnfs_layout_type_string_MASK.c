
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum pnfs_layout_type { ____Placeholder_pnfs_layout_type } pnfs_layout_type ;






const char* FUNC_0(enum pnfs_layout_type VAR_0)
{
    switch (VAR_0) {
    case 129: return "PNFS_LAYOUTTYPE_FILE";
    case 128: return "PNFS_LAYOUTTYPE_OBJECT";
    case 130: return "PNFS_LAYOUTTYPE_BLOCK";
    default: return "Invalid layout type";
    }
}
