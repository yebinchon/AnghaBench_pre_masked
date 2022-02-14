
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sctp_ulpevent {int dummy; } ;
struct sctp_event {scalar_t__ se_type; scalar_t__ se_on; } ;
struct TYPE_4__ {TYPE_1__* si; } ;
struct sctp_association {int ulpq; TYPE_2__ stream; int outqueue; int subscribe; } ;
struct TYPE_3__ {int (* enqueue_event ) (int *,struct sctp_ulpevent*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 struct sctp_ulpevent* FUNC_1 (struct sctp_association*,int) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *,struct sctp_ulpevent*) ;

__attribute__((used)) static int FUNC_4(struct sctp_event *VAR_4,
     struct sctp_association *VAR_5)
{
 struct sctp_ulpevent *VAR_6;

 FUNC_2(&VAR_5->subscribe, VAR_4->se_type, VAR_4->se_on);

 if (VAR_4->se_type == VAR_2 && VAR_4->se_on) {
  if (FUNC_0(&VAR_5->outqueue)) {
   VAR_6 = FUNC_1(VAR_5,
     VAR_1 | VAR_3);
   if (!VAR_6)
    return -VAR_0;

   VAR_5->stream.si->enqueue_event(&VAR_5->ulpq, VAR_6);
  }
 }

 return 0;
}
