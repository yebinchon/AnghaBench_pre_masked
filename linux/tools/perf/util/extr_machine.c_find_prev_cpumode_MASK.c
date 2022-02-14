
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
struct thread {int dummy; } ;
struct symbol {int dummy; } ;
struct ip_callchain {scalar_t__* ips; } ;
struct callchain_cursor {int dummy; } ;
struct addr_location {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct thread*,struct callchain_cursor*,struct symbol**,struct addr_location*,int *,scalar_t__,int,int *,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct ip_callchain *VAR_1, struct thread *VAR_2,
        struct callchain_cursor *VAR_3,
        struct symbol **VAR_4,
        struct addr_location *VAR_5,
        u8 *VAR_6, int VAR_7)
{
 int VAR_8 = 0;

 while (--VAR_7 >= 0) {
  u64 VAR_9 = VAR_1->ips[VAR_7];

  if (VAR_9 >= VAR_0) {
   VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4,
            VAR_5, VAR_6, VAR_9,
            0, ((void*)0), ((void*)0), 0);
   break;
  }
 }
 return VAR_8;
}
