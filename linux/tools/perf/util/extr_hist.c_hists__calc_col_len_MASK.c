
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_9__ ;
typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_19__ ;
typedef struct TYPE_28__ TYPE_18__ ;
typedef struct TYPE_27__ TYPE_17__ ;
typedef struct TYPE_26__ TYPE_16__ ;
typedef struct TYPE_25__ TYPE_15__ ;
typedef struct TYPE_24__ TYPE_14__ ;
typedef struct TYPE_23__ TYPE_13__ ;
typedef struct TYPE_22__ TYPE_12__ ;
typedef struct TYPE_21__ TYPE_11__ ;
typedef struct TYPE_20__ TYPE_10__ ;


typedef int u16 ;
struct hists {int dummy; } ;
struct TYPE_32__ {TYPE_2__* map; TYPE_1__* sym; } ;
struct hist_entry {scalar_t__ trace_output; scalar_t__ transaction; scalar_t__ srcfile; scalar_t__ srcline; TYPE_17__* mem_info; TYPE_11__* branch_info; TYPE_4__* parent; TYPE_3__ ms; int thread; } ;
struct TYPE_38__ {int dso; } ;
struct TYPE_37__ {scalar_t__ namelen; } ;
struct TYPE_36__ {TYPE_6__* map; TYPE_5__* sym; } ;
struct TYPE_35__ {int dso; } ;
struct TYPE_34__ {scalar_t__ namelen; } ;
struct TYPE_33__ {int namelen; } ;
struct TYPE_31__ {int dso; } ;
struct TYPE_30__ {int namelen; } ;
struct TYPE_29__ {scalar_t__ se_header; } ;
struct TYPE_28__ {scalar_t__ nanosecs; } ;
struct TYPE_25__ {TYPE_16__* map; TYPE_12__* sym; } ;
struct TYPE_24__ {TYPE_13__* sym; } ;
struct TYPE_27__ {TYPE_15__ daddr; TYPE_14__ iaddr; } ;
struct TYPE_26__ {int dso; } ;
struct TYPE_23__ {scalar_t__ namelen; } ;
struct TYPE_22__ {scalar_t__ namelen; } ;
struct TYPE_20__ {TYPE_9__* map; TYPE_8__* sym; } ;
struct TYPE_21__ {scalar_t__ srcline_to; scalar_t__ srcline_from; TYPE_10__ to; TYPE_7__ from; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct hists*,int ,unsigned int const) ;
 int FUNC_4 (struct hists*,int ,int) ;
 int FUNC_5 (struct hists*,int ) ;
 TYPE_19__ VAR_31 ;
 int FUNC_6 (scalar_t__) ;
 TYPE_18__ VAR_32 ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_33 ;

void FUNC_8(struct hists *VAR_34, struct hist_entry *VAR_35)
{
 const unsigned int VAR_36 = VAR_0 / 4;
 int VAR_37;
 u16 VAR_38;






 if (VAR_35->ms.sym) {
  VAR_37 = VAR_35->ms.sym->namelen + 4;
  if (VAR_33 > 0)
   VAR_37 += VAR_0 / 4 + 2 + 3;
  FUNC_3(VAR_34, VAR_24, VAR_37);
 } else {
  VAR_37 = VAR_36 + 4 + 2;
  FUNC_3(VAR_34, VAR_24, VAR_37);
  FUNC_5(VAR_34, VAR_4);
 }

 VAR_38 = FUNC_7(VAR_35->thread);
 if (FUNC_3(VAR_34, VAR_2, VAR_38))
  FUNC_4(VAR_34, VAR_27, VAR_38 + 8);

 if (VAR_35->ms.map) {
  VAR_38 = FUNC_1(VAR_35->ms.map->dso);
  FUNC_3(VAR_34, VAR_4, VAR_38);
 }

 if (VAR_35->parent)
  FUNC_3(VAR_34, VAR_18, VAR_35->parent->namelen);

 if (VAR_35->branch_info) {
  if (VAR_35->branch_info->from.sym) {
   VAR_37 = (int)VAR_35->branch_info->from.sym->namelen + 4;
   if (VAR_33 > 0)
    VAR_37 += VAR_0 / 4 + 2 + 3;
   FUNC_3(VAR_34, VAR_25, VAR_37);

   VAR_37 = FUNC_1(VAR_35->branch_info->from.map->dso);
   FUNC_3(VAR_34, VAR_5, VAR_37);
  } else {
   VAR_37 = VAR_36 + 4 + 2;
   FUNC_3(VAR_34, VAR_25, VAR_37);
   FUNC_5(VAR_34, VAR_5);
  }

  if (VAR_35->branch_info->to.sym) {
   VAR_37 = (int)VAR_35->branch_info->to.sym->namelen + 4;
   if (VAR_33 > 0)
    VAR_37 += VAR_0 / 4 + 2 + 3;
   FUNC_3(VAR_34, VAR_26, VAR_37);

   VAR_37 = FUNC_1(VAR_35->branch_info->to.map->dso);
   FUNC_3(VAR_34, VAR_6, VAR_37);
  } else {
   VAR_37 = VAR_36 + 4 + 2;
   FUNC_3(VAR_34, VAR_26, VAR_37);
   FUNC_5(VAR_34, VAR_6);
  }

  if (VAR_35->branch_info->srcline_from)
   FUNC_3(VAR_34, VAR_22,
     FUNC_6(VAR_35->branch_info->srcline_from));
  if (VAR_35->branch_info->srcline_to)
   FUNC_3(VAR_34, VAR_23,
     FUNC_6(VAR_35->branch_info->srcline_to));
 }

 if (VAR_35->mem_info) {
  if (VAR_35->mem_info->daddr.sym) {
   VAR_37 = (int)VAR_35->mem_info->daddr.sym->namelen + 4
          + VAR_36 + 2;
   FUNC_3(VAR_34, VAR_10,
        VAR_37);
   FUNC_3(VAR_34, VAR_11,
        VAR_37 + 1);
  } else {
   VAR_37 = VAR_36 + 4 + 2;
   FUNC_3(VAR_34, VAR_10,
        VAR_37);
   FUNC_3(VAR_34, VAR_11,
        VAR_37);
  }

  if (VAR_35->mem_info->iaddr.sym) {
   VAR_37 = (int)VAR_35->mem_info->iaddr.sym->namelen + 4
          + VAR_36 + 2;
   FUNC_3(VAR_34, VAR_12,
        VAR_37);
  } else {
   VAR_37 = VAR_36 + 4 + 2;
   FUNC_3(VAR_34, VAR_12,
        VAR_37);
  }

  if (VAR_35->mem_info->daddr.map) {
   VAR_37 = FUNC_1(VAR_35->mem_info->daddr.map->dso);
   FUNC_3(VAR_34, VAR_9,
        VAR_37);
  } else {
   VAR_37 = VAR_36 + 4 + 2;
   FUNC_5(VAR_34, VAR_9);
  }

  FUNC_3(VAR_34, VAR_15,
       VAR_36 + 4 + 2);

 } else {
  VAR_37 = VAR_36 + 4 + 2;
  FUNC_3(VAR_34, VAR_10, VAR_37);
  FUNC_3(VAR_34, VAR_12, VAR_37);
  FUNC_5(VAR_34, VAR_9);
 }

 FUNC_3(VAR_34, VAR_1, 20);
 FUNC_3(VAR_34, VAR_3, 3);
 FUNC_3(VAR_34, VAR_19, 6);
 FUNC_3(VAR_34, VAR_13, 6);
 FUNC_3(VAR_34, VAR_17, 22);
 FUNC_3(VAR_34, VAR_16, 12);
 FUNC_3(VAR_34, VAR_14, 21 + 3);
 FUNC_3(VAR_34, VAR_8, 12);
 FUNC_3(VAR_34, VAR_7, 12);
 if (VAR_32.nanosecs)
  FUNC_3(VAR_34, VAR_28, 16);
 else
  FUNC_3(VAR_34, VAR_28, 12);

 if (VAR_35->srcline) {
  VAR_38 = FUNC_0(FUNC_6(VAR_35->srcline), FUNC_6(VAR_31.se_header));
  FUNC_3(VAR_34, VAR_21, VAR_38);
 }

 if (VAR_35->srcfile)
  FUNC_3(VAR_34, VAR_20, FUNC_6(VAR_35->srcfile));

 if (VAR_35->transaction)
  FUNC_3(VAR_34, VAR_30,
       FUNC_2());

 if (VAR_35->trace_output)
  FUNC_3(VAR_34, VAR_29, FUNC_6(VAR_35->trace_output));
}
