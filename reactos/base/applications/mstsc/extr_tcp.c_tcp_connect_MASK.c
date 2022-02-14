
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
typedef int uint16 ;
struct TYPE_4__ {int s_addr; } ;
struct sockaddr_in {int sin_port; int sin_family; TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct hostent {int h_addr; } ;
struct addrinfo {int ai_addrlen; struct addrinfo* ai_next; struct sockaddr* ai_addr; int ai_protocol; int ai_socktype; int ai_family; } ;
typedef int socklen_t ;
typedef int option_value ;
struct TYPE_6__ {int size; int * data; } ;
struct TYPE_5__ {int size; int * data; } ;
typedef int RD_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 char* VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (struct addrinfo*) ;
 TYPE_3__ VAR_12 ;
 TYPE_2__* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*,char*,struct addrinfo*,struct addrinfo**) ;
 struct hostent* FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int,int ,int ,void*,int*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_1__*,int ,int) ;
 int FUNC_11 (struct addrinfo*,int ,int) ;
 int FUNC_12 (int,int ,int ,void*,int) ;
 int FUNC_13 (char*,int,char*,int) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (char*) ;
 scalar_t__ FUNC_16 (int) ;

RD_BOOL
FUNC_17(char *VAR_18)
{
 socklen_t VAR_19;
 uint32 VAR_20;
 int VAR_21;
 struct hostent *VAR_22;
 struct sockaddr_in VAR_23;

 if ((VAR_22 = FUNC_6(VAR_18)) != ((void*)0))
 {
  FUNC_10(&VAR_23.sin_addr, VAR_22->h_addr, sizeof(VAR_23.sin_addr));
 }
 else if ((VAR_23.sin_addr.s_addr = FUNC_9(VAR_18)) == VAR_3)
 {
  FUNC_2("%s: unable to resolve host\n", VAR_18);
  return VAR_2;
 }

 if ((VAR_15 = FUNC_14(VAR_0, VAR_5, 0)) < 0)
 {
  FUNC_2("socket: %s\n", VAR_10);
  return VAR_2;
 }

 VAR_23.sin_family = VAR_0;
 VAR_23.sin_port = FUNC_8((uint16) VAR_17);

 if (FUNC_1(VAR_15, (struct sockaddr *) &VAR_23, sizeof(struct sockaddr)) < 0)
 {
  if (!VAR_14)
   FUNC_2("connect: %s\n", VAR_10);

  FUNC_0(VAR_15);
  VAR_15 = -1;
  return VAR_2;
 }



 VAR_20 = 1;
 VAR_19 = sizeof(VAR_20);
 FUNC_12(VAR_15, VAR_4, VAR_9, (void *) &VAR_20, VAR_19);

 if (FUNC_7(VAR_15, VAR_6, VAR_7, (void *) &VAR_20, &VAR_19) == 0)
 {
  if (VAR_20 < (1024 * 16))
  {
   VAR_20 = 1024 * 16;
   VAR_19 = sizeof(VAR_20);
   FUNC_12(VAR_15, VAR_6, VAR_7, (void *) &VAR_20,
       VAR_19);
  }
 }

 VAR_12.size = 4096;
 VAR_12.data = (uint8 *) FUNC_16(VAR_12.size);

 for (VAR_21 = 0; VAR_21 < VAR_8; VAR_21++)
 {
  VAR_13[VAR_21].size = 4096;
  VAR_13[VAR_21].data = (uint8 *) FUNC_16(VAR_13[VAR_21].size);
 }





 return VAR_11;
}
