
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {size_t protocol; size_t operation; int port; int address; int is_ipv6; } ;
struct TYPE_5__ {TYPE_1__ inet_network; } ;
struct tomoyo_request_info {TYPE_2__ param; int param_type; } ;
struct TYPE_6__ {int port; int address; int is_ipv6; } ;
struct tomoyo_addr_info {size_t protocol; size_t operation; TYPE_3__ inet; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct tomoyo_request_info*) ;
 int FUNC_2 (struct tomoyo_request_info*,int ) ;
 int VAR_3 ;
 scalar_t__** VAR_4 ;
 scalar_t__ FUNC_3 (struct tomoyo_request_info*,int *,scalar_t__ const) ;
 int FUNC_4 () ;
 int FUNC_5 (int const) ;

__attribute__((used)) static int FUNC_6(const struct tomoyo_addr_info *VAR_5)
{
 const int VAR_6 = FUNC_4();
 struct tomoyo_request_info VAR_7;
 int VAR_8 = 0;
 const u8 VAR_9 = VAR_4[VAR_5->protocol][VAR_5->operation];

 if (VAR_9 && FUNC_3(&VAR_7, ((void*)0), VAR_9)
     != VAR_0) {
  VAR_7.param_type = VAR_2;
  VAR_7.param.inet_network.protocol = VAR_5->protocol;
  VAR_7.param.inet_network.operation = VAR_5->operation;
  VAR_7.param.inet_network.is_ipv6 = VAR_5->inet.is_ipv6;
  VAR_7.param.inet_network.address = VAR_5->inet.address;
  VAR_7.param.inet_network.port = FUNC_0(VAR_5->inet.port);
  do {
   FUNC_2(&VAR_7, VAR_3);
   VAR_8 = FUNC_1(&VAR_7);
  } while (VAR_8 == VAR_1);
 }
 FUNC_5(VAR_6);
 return VAR_8;
}
