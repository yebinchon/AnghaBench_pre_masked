
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_sndrcvinfo {int sinfo_tsn; int sinfo_ssn; int sinfo_timetolive; int sinfo_flags; int sinfo_assoc_id; int sinfo_context; int sinfo_ppid; int sinfo_stream; } ;
struct sctp_cmsgs {TYPE_1__* authinfo; int prinfo; int srinfo; int sinfo; } ;
struct sctp_association {int default_timetolive; int default_flags; int default_context; int default_ppid; int default_stream; } ;
struct TYPE_2__ {int auth_keynumber; } ;


 int FUNC_0 (struct sctp_association*) ;

__attribute__((used)) static void FUNC_1(struct sctp_association *VAR_0,
          struct sctp_sndrcvinfo *VAR_1,
          struct sctp_cmsgs *VAR_2)
{
 if (!VAR_2->srinfo && !VAR_2->sinfo) {
  VAR_1->sinfo_stream = VAR_0->default_stream;
  VAR_1->sinfo_ppid = VAR_0->default_ppid;
  VAR_1->sinfo_context = VAR_0->default_context;
  VAR_1->sinfo_assoc_id = FUNC_0(VAR_0);

  if (!VAR_2->prinfo)
   VAR_1->sinfo_flags = VAR_0->default_flags;
 }

 if (!VAR_2->srinfo && !VAR_2->prinfo)
  VAR_1->sinfo_timetolive = VAR_0->default_timetolive;

 if (VAR_2->authinfo) {



  VAR_1->sinfo_tsn = 1;
  VAR_1->sinfo_ssn = VAR_2->authinfo->auth_keynumber;
 }
}
