
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {scalar_t__ state; TYPE_2__* seen; } ;
struct TYPE_6__ {TYPE_1__ tcp; } ;
struct nf_conn {TYPE_3__ proto; } ;
struct TYPE_5__ {scalar_t__ td_maxwin; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct nf_conn*) ;
 scalar_t__ FUNC_1 (struct nf_conn*) ;

__attribute__((used)) static int FUNC_2(struct nf_conn *VAR_2, void *VAR_3)
{
 u8 VAR_4 = (unsigned long)VAR_3;

 if (FUNC_0(VAR_2) != VAR_4)
  return 0;

 if (FUNC_1(VAR_2) == VAR_0 &&
     VAR_2->proto.tcp.state == VAR_1) {
  VAR_2->proto.tcp.seen[0].td_maxwin = 0;
  VAR_2->proto.tcp.seen[1].td_maxwin = 0;
 }

 return 0;
}
