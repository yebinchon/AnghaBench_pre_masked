
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int eoh_context; } ;
struct TYPE_5__ {int * er_short_term_cxt; TYPE_1__ hdr; } ;
typedef int * MemoryContext ;
typedef TYPE_2__ ExpandedRecordHeader ;


 int VAR_0 ;
 int * FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static MemoryContext
FUNC_2(ExpandedRecordHeader *VAR_1)
{
 if (VAR_1->er_short_term_cxt == ((void*)0))
  VAR_1->er_short_term_cxt =
   FUNC_0(VAR_1->hdr.eoh_context,
          "expanded record short-term context",
          VAR_0);
 else
  FUNC_1(VAR_1->er_short_term_cxt);
 return VAR_1->er_short_term_cxt;
}
