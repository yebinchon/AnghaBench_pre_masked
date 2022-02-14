
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
struct thread {TYPE_1__* mg; } ;
struct map {int dummy; } ;
struct machine {int dummy; } ;
struct addr_location {int dummy; } ;
struct TYPE_2__ {struct machine* machine; } ;


 scalar_t__ FUNC_0 (struct machine*,scalar_t__,int ) ;
 struct map* FUNC_1 (struct thread*,scalar_t__,int ,struct addr_location*) ;

struct map *FUNC_2(struct thread *VAR_0, u8 VAR_1, u64 VAR_2,
    struct addr_location *VAR_3)
{
 struct map *VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 struct machine *VAR_5 = VAR_0->mg->machine;
 u8 VAR_6 = FUNC_0(VAR_5, VAR_1, VAR_2);

 if (VAR_4 || VAR_6 == VAR_1)
  return VAR_4;

 return FUNC_1(VAR_0, VAR_6, VAR_2, VAR_3);
}
