
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {int * data; } ;
struct key {int description; TYPE_1__ payload; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (struct key const*) ;
 int FUNC_1 (struct seq_file*,char*,size_t,char*) ;
 int FUNC_2 (struct seq_file*,int ) ;

void FUNC_3(const struct key *VAR_2, struct seq_file *VAR_3)
{
 size_t VAR_4 = (size_t)VAR_2->payload.data[VAR_1];

 FUNC_2(VAR_3, VAR_2->description);

 if (FUNC_0(VAR_2))
  FUNC_1(VAR_3, ": %zu [%s]",
      VAR_4,
      VAR_4 > VAR_0 ? "file" : "buff");
}
