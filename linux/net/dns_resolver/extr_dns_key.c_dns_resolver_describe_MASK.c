
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {int * data; } ;
struct key {int datalen; TYPE_1__ payload; int description; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_1 (struct key const*) ;
 int FUNC_2 (struct seq_file*,char*,int) ;
 int FUNC_3 (struct seq_file*,int ) ;

__attribute__((used)) static void FUNC_4(const struct key *VAR_1, struct seq_file *VAR_2)
{
 FUNC_3(VAR_2, VAR_1->description);
 if (FUNC_1(VAR_1)) {
  int VAR_3 = FUNC_0(VAR_1->payload.data[VAR_0]);

  if (VAR_3)
   FUNC_2(VAR_2, ": %d", VAR_3);
  else
   FUNC_2(VAR_2, ": %u", VAR_1->datalen);
 }
}
