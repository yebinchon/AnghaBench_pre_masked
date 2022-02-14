
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_7__ {scalar_t__ type; } ;
struct perf_event {TYPE_3__ attr; TYPE_4__* tp_event; struct bpf_prog* prog; } ;
struct bpf_prog {scalar_t__ type; TYPE_1__* aux; } ;
struct TYPE_8__ {int flags; char* name; TYPE_2__* tp; } ;
struct TYPE_6__ {char* name; } ;
struct TYPE_5__ {int id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct perf_event const*,int *,char const**,int*,int*,int) ;
 int FUNC_1 (struct perf_event const*,int *,char const**,int*,int) ;
 int FUNC_2 (TYPE_4__*) ;

int FUNC_3(const struct perf_event *VAR_8, u32 *VAR_9,
       u32 *VAR_10, const char **VAR_11,
       u64 *VAR_12, u64 *VAR_13)
{
 bool VAR_14, VAR_15;
 struct bpf_prog *VAR_16;
 int VAR_17, VAR_18 = 0;

 VAR_16 = VAR_8->prog;
 if (!VAR_16)
  return -VAR_2;


 if (VAR_16->type == VAR_1)
  return -VAR_3;

 *VAR_9 = VAR_16->aux->id;
 VAR_17 = VAR_8->tp_event->flags;
 VAR_14 = VAR_17 & VAR_6;
 VAR_15 = FUNC_2(VAR_8->tp_event);

 if (VAR_14 || VAR_15) {
  *VAR_11 = VAR_14 ? VAR_8->tp_event->tp->name
         : VAR_8->tp_event->name;
  *VAR_10 = VAR_0;
  *VAR_12 = 0x0;
  *VAR_13 = 0x0;
 } else {

  VAR_18 = -VAR_3;
 }

 return VAR_18;
}
