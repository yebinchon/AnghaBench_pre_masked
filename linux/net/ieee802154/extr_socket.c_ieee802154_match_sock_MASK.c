
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mode; scalar_t__ extended_addr; scalar_t__ pan_id; scalar_t__ short_addr; } ;
struct dgram_sock {TYPE_1__ src_addr; int bound; } ;
typedef scalar_t__ __le64 ;
typedef scalar_t__ __le16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline bool
FUNC_0(__le64 VAR_2, __le16 VAR_3, __le16 VAR_4,
        struct dgram_sock *VAR_5)
{
 if (!VAR_5->bound)
  return 1;

 if (VAR_5->src_addr.mode == VAR_0 &&
     VAR_2 == VAR_5->src_addr.extended_addr)
  return 1;

 if (VAR_5->src_addr.mode == VAR_1 &&
     VAR_3 == VAR_5->src_addr.pan_id &&
     VAR_4 == VAR_5->src_addr.short_addr)
  return 1;

 return 0;
}
