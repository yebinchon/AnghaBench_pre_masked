
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sctp_stream {int dummy; } ;
typedef int gfp_t ;
typedef int __u16 ;
struct TYPE_4__ {TYPE_1__* ext; } ;
struct TYPE_3__ {int prio_list; } ;


 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (struct sctp_stream*,int ) ;
 int FUNC_2 (struct sctp_stream*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct sctp_stream *VAR_0, __u16 VAR_1,
        gfp_t VAR_2)
{
 FUNC_0(&FUNC_1(VAR_0, VAR_1)->ext->prio_list);
 return FUNC_2(VAR_0, VAR_1, 0, VAR_2);
}
