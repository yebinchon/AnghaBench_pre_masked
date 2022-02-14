
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdp_md {scalar_t__ data; scalar_t__ data_end; } ;
struct pinginfo {scalar_t__ seq; scalar_t__ start; scalar_t__* times; size_t count; } ;
struct iphdr {int daddr; int saddr; } ;
struct TYPE_3__ {scalar_t__ sequence; } ;
struct TYPE_4__ {TYPE_1__ echo; } ;
struct icmphdr {scalar_t__ checksum; TYPE_2__ un; int type; } ;
struct ethhdr {int dummy; } ;
typedef size_t __u8 ;
typedef scalar_t__ __u64 ;
typedef int __be32 ;
typedef void* __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (scalar_t__) ;
 void* FUNC_1 () ;
 struct pinginfo* FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct xdp_md*,int ) ;
 scalar_t__ FUNC_5 (struct icmphdr*,int ) ;
 int VAR_6 ;
 int FUNC_6 (void*) ;

int FUNC_7(struct xdp_md *VAR_7)
{
 void *VAR_8 = (void *)(long)VAR_7->data_end;
 void *VAR_9 = (void *)(long)VAR_7->data;
 struct pinginfo *VAR_10 = ((void*)0);
 struct ethhdr *VAR_11 = VAR_9;
 struct icmphdr *VAR_12;
 struct iphdr *VAR_13;
 __u64 VAR_14;
 __be32 VAR_15;
 __be16 VAR_16;
 int VAR_17;
 __u8 VAR_18;

 VAR_17 = FUNC_4(VAR_7, VAR_1);

 if (VAR_17 != VAR_5)
  return VAR_17;

 VAR_13 = VAR_9 + sizeof(*VAR_11);
 VAR_12 = VAR_9 + sizeof(*VAR_11) + sizeof(*VAR_13);
 VAR_15 = VAR_13->saddr;


 VAR_14 = FUNC_1();
 VAR_10 = FUNC_2(&VAR_6, &VAR_15);
 if (!VAR_10 || VAR_10->seq != VAR_12->un.echo.sequence)
  return VAR_4;

 if (VAR_10->start) {
#pragma clang loop unroll(full)
 for (VAR_18 = 0; VAR_18 < VAR_3; VAR_18++) {
   if (VAR_10->times[VAR_18] == 0)
    break;
  }

  if (VAR_18 < VAR_3) {
   VAR_10->times[VAR_18] = VAR_14 -
          VAR_10->start;
   VAR_10->start = 0;
   VAR_18++;
  }

  if (VAR_18 == VAR_10->count || VAR_18 == VAR_3)
   return VAR_4;
 }


 FUNC_6(VAR_9);
 VAR_13->saddr = VAR_13->daddr;
 VAR_13->daddr = VAR_15;
 VAR_12->type = VAR_0;
 VAR_16 = FUNC_0(FUNC_3(VAR_12->un.echo.sequence) + 1);
 VAR_12->un.echo.sequence = VAR_16;
 VAR_12->checksum = 0;
 VAR_12->checksum = FUNC_5(VAR_12, VAR_2);

 VAR_10->seq = VAR_16;
 VAR_10->start = FUNC_1();

 return VAR_5;
}
