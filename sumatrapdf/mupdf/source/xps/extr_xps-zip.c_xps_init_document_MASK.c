
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int refs; int lookup_metadata; int load_page; int count_pages; int resolve_link; int load_outline; int drop_document; } ;
struct TYPE_5__ {TYPE_1__ super; } ;
typedef TYPE_2__ xps_document ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_0(fz_context *VAR_6, xps_document *VAR_7)
{
 VAR_7->super.refs = 1;
 VAR_7->super.drop_document = VAR_1;
 VAR_7->super.load_outline = VAR_2;
 VAR_7->super.resolve_link = VAR_4;
 VAR_7->super.count_pages = VAR_0;
 VAR_7->super.load_page = VAR_3;
 VAR_7->super.lookup_metadata = VAR_5;
}
