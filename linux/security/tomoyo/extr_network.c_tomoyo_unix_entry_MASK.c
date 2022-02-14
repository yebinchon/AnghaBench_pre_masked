
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_5__ {size_t protocol; size_t operation; struct tomoyo_path_info* address; } ;
struct TYPE_6__ {TYPE_2__ unix_network; } ;
struct tomoyo_request_info {TYPE_3__ param; int param_type; } ;
struct tomoyo_path_info {char* name; } ;
struct TYPE_4__ {char* addr; int addr_len; } ;
struct tomoyo_addr_info {size_t protocol; size_t operation; TYPE_1__ unix0; } ;
typedef int sa_family_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct tomoyo_request_info*) ;
 int FUNC_3 (struct tomoyo_request_info*,int ) ;
 int VAR_4 ;
 char* FUNC_4 (char*,int) ;
 int FUNC_5 (struct tomoyo_path_info*) ;
 scalar_t__ FUNC_6 (struct tomoyo_request_info*,int *,scalar_t__ const) ;
 int FUNC_7 () ;
 int FUNC_8 (int const) ;
 scalar_t__** VAR_5 ;

__attribute__((used)) static int FUNC_9(const struct tomoyo_addr_info *VAR_6)
{
 const int VAR_7 = FUNC_7();
 struct tomoyo_request_info VAR_8;
 int VAR_9 = 0;
 const u8 VAR_10 = VAR_5[VAR_6->protocol][VAR_6->operation];

 if (VAR_10 && FUNC_6(&VAR_8, ((void*)0), VAR_10)
     != VAR_1) {
  char *VAR_11 = VAR_6->unix0.addr;
  int VAR_12 = VAR_6->unix0.addr_len - sizeof(sa_family_t);

  if (VAR_12 <= 0) {
   VAR_11 = "anonymous";
   VAR_12 = 9;
  } else if (VAR_11[0]) {
   VAR_12 = FUNC_1(VAR_11, VAR_12);
  }
  VAR_11 = FUNC_4(VAR_11, VAR_12);
  if (VAR_11) {
   struct tomoyo_path_info VAR_13;

   VAR_13.name = VAR_11;
   FUNC_5(&VAR_13);
   VAR_8.param_type = VAR_3;
   VAR_8.param.unix_network.protocol = VAR_6->protocol;
   VAR_8.param.unix_network.operation = VAR_6->operation;
   VAR_8.param.unix_network.address = &VAR_13;
   do {
    FUNC_3(&VAR_8, VAR_4);
    VAR_9 = FUNC_2(&VAR_8);
   } while (VAR_9 == VAR_2);
   FUNC_0(VAR_11);
  } else
   VAR_9 = -VAR_0;
 }
 FUNC_8(VAR_7);
 return VAR_9;
}
