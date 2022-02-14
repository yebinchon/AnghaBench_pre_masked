
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {scalar_t__ value; } ;
struct event {TYPE_1__ result; } ;


 int FUNC_0 (struct event*,int ,int ,int) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static uint64_t FUNC_2(struct event *VAR_0)
{
 uint64_t VAR_1, VAR_2;
 int VAR_3;

 FUNC_0(VAR_0, 0, 0, 0);
 VAR_2 = VAR_0->result.value;

 for (VAR_3 = 0; VAR_3 < 100; VAR_3++) {
  FUNC_0(VAR_0, 0, 0, 0);
  VAR_1 = VAR_0->result.value;
  if (VAR_1 < VAR_2) {
   FUNC_1("Replacing overhead %lu with %lu\n", VAR_2, VAR_1);
   VAR_2 = VAR_1;
  }
 }

 return VAR_2;
}
