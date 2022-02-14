
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {char const* name; } ;
struct symt_udt {TYPE_6__ hash_elt; } ;
struct TYPE_13__ {char const* name; } ;
struct symt_typedef {TYPE_5__ hash_elt; } ;
struct TYPE_12__ {char const* name; } ;
struct symt_thunk {TYPE_4__ hash_elt; } ;
struct TYPE_9__ {char const* name; } ;
struct symt_public {TYPE_1__ hash_elt; } ;
struct TYPE_11__ {char const* name; } ;
struct symt_hierarchy_point {TYPE_3__ hash_elt; } ;
struct TYPE_16__ {char const* name; } ;
struct symt_function {TYPE_8__ hash_elt; } ;
struct symt_enum {char const* name; } ;
struct TYPE_15__ {char const* name; } ;
struct symt_data {TYPE_7__ hash_elt; } ;
struct TYPE_10__ {char const* name; } ;
struct symt_basic {TYPE_2__ hash_elt; } ;
struct symt {int tag; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;

const char* FUNC_2(const struct symt* VAR_0)
{
    switch (VAR_0->tag)
    {

    case 137: return ((const struct symt_data*)VAR_0)->hash_elt.name;
    case 135: return ((const struct symt_function*)VAR_0)->hash_elt.name;
    case 131: return ((const struct symt_public*)VAR_0)->hash_elt.name;
    case 138: return ((const struct symt_basic*)VAR_0)->hash_elt.name;
    case 133: return ((const struct symt_hierarchy_point*)VAR_0)->hash_elt.name;
    case 130: return ((const struct symt_thunk*)VAR_0)->hash_elt.name;

    case 136: return ((const struct symt_enum*)VAR_0)->name;
    case 129: return ((const struct symt_typedef*)VAR_0)->hash_elt.name;
    case 128: return ((const struct symt_udt*)VAR_0)->hash_elt.name;
    default:
        FUNC_0("Unsupported sym-tag %s\n", FUNC_1(VAR_0->tag));

    case 139:
    case 132:
    case 134:
        return ((void*)0);
    }
}
