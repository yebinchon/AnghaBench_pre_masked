
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ctl_sock; } ;
struct net {TYPE_1__ sctp; } ;
typedef scalar_t__ sa_family_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,scalar_t__,int ,int ,struct net*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct net *VAR_5)
{
 int VAR_6;
 sa_family_t VAR_7 = VAR_2;

 if (FUNC_2(VAR_3))
  VAR_7 = VAR_3;

 VAR_6 = FUNC_0(&VAR_5->sctp.ctl_sock, VAR_7,
       VAR_4, VAR_1, VAR_5);


 if (VAR_6 < 0 && VAR_7 == VAR_3)
  VAR_6 = FUNC_0(&VAR_5->sctp.ctl_sock, VAR_0,
        VAR_4, VAR_1,
        VAR_5);

 if (VAR_6 < 0) {
  FUNC_1("Failed to create the SCTP control socket\n");
  return VAR_6;
 }
 return 0;
}
