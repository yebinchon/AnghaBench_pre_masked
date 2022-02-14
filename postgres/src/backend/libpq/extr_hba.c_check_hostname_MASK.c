
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct addrinfo {TYPE_1__* ai_addr; struct addrinfo* ai_next; } ;
typedef int remote_hostname ;
struct TYPE_9__ {scalar_t__ ss_family; } ;
struct TYPE_7__ {TYPE_4__ addr; int salen; } ;
struct TYPE_8__ {int remote_hostname_resolv; int remote_hostname_errcode; TYPE_2__ raddr; int remote_hostname; } ;
typedef TYPE_3__ hbaPort ;
struct TYPE_6__ {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (struct addrinfo*) ;
 int FUNC_2 (int ,int *,int *,struct addrinfo**) ;
 int FUNC_3 (char const*,int ) ;
 scalar_t__ FUNC_4 (struct sockaddr_in*,struct sockaddr_in*) ;
 scalar_t__ FUNC_5 (struct sockaddr_in6*,struct sockaddr_in6*) ;
 int FUNC_6 (TYPE_4__*,int ,char*,int,int *,int ,int ) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static bool
FUNC_8(hbaPort *VAR_5, const char *VAR_6)
{
 struct addrinfo *VAR_7,
      *VAR_8;
 int VAR_9;
 bool VAR_10;


 if (VAR_5->remote_hostname_resolv < 0)
  return 0;


 if (!VAR_5->remote_hostname)
 {
  char VAR_11[VAR_3];

  VAR_9 = FUNC_6(&VAR_5->raddr.addr, VAR_5->raddr.salen,
         VAR_11, sizeof(VAR_11),
         ((void*)0), 0,
         VAR_4);
  if (VAR_9 != 0)
  {

   VAR_5->remote_hostname_resolv = -2;
   VAR_5->remote_hostname_errcode = VAR_9;
   return 0;
  }

  VAR_5->remote_hostname = FUNC_7(VAR_11);
 }


 if (!FUNC_3(VAR_6, VAR_5->remote_hostname))
  return 0;


 if (VAR_5->remote_hostname_resolv == +1)
  return 1;


 VAR_9 = FUNC_2(VAR_5->remote_hostname, ((void*)0), ((void*)0), &VAR_7);
 if (VAR_9 != 0)
 {

  VAR_5->remote_hostname_resolv = -2;
  VAR_5->remote_hostname_errcode = VAR_9;
  return 0;
 }

 VAR_10 = 0;
 for (VAR_8 = VAR_7; VAR_8; VAR_8 = VAR_8->ai_next)
 {
  if (VAR_8->ai_addr->sa_family == VAR_5->raddr.addr.ss_family)
  {
   if (VAR_8->ai_addr->sa_family == VAR_0)
   {
    if (FUNC_4((struct sockaddr_in *) VAR_8->ai_addr,
         (struct sockaddr_in *) &VAR_5->raddr.addr))
    {
     VAR_10 = 1;
     break;
    }
   }
  }
 }

 if (VAR_7)
  FUNC_1(VAR_7);

 if (!VAR_10)
  FUNC_0(VAR_2, "pg_hba.conf host name \"%s\" rejected because address resolution did not return a match with IP address of client",
    VAR_6);

 VAR_5->remote_hostname_resolv = VAR_10 ? +1 : -1;

 return VAR_10;
}
