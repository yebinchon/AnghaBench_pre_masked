
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct perf_hpp_fmt {int dummy; } ;
struct perf_hpp {int size; int buf; } ;
struct hist_entry {TYPE_2__* mem_info; int hists; } ;
struct TYPE_3__ {int addr; } ;
struct TYPE_4__ {TYPE_1__ iaddr; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct perf_hpp_fmt*,struct perf_hpp*,int ) ;
 int FUNC_2 (int ,int ,char*,int,int ) ;

__attribute__((used)) static int
FUNC_3(struct perf_hpp_fmt *VAR_0, struct perf_hpp *VAR_1,
     struct hist_entry *VAR_2)
{
 uint64_t VAR_3 = 0;
 int VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2->hists);
 char VAR_5[20];

 if (VAR_2->mem_info)
  VAR_3 = VAR_2->mem_info->iaddr.addr;

 return FUNC_2(VAR_1->buf, VAR_1->size, "%*s", VAR_4, FUNC_0(VAR_5, VAR_3));
}
