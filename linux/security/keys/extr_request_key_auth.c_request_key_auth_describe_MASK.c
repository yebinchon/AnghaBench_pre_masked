
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct request_key_auth {int callout_len; int pid; } ;
struct key {char* description; } ;


 struct request_key_auth* FUNC_0 (struct key const*) ;
 scalar_t__ FUNC_1 (struct key const*) ;
 int FUNC_2 (struct seq_file*,char*,int ,int ) ;
 int FUNC_3 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_4(const struct key *VAR_0,
          struct seq_file *VAR_1)
{
 struct request_key_auth *VAR_2 = FUNC_0(VAR_0);

 if (!VAR_2)
  return;

 FUNC_3(VAR_1, "key:");
 FUNC_3(VAR_1, VAR_0->description);
 if (FUNC_1(VAR_0))
  FUNC_2(VAR_1, " pid:%d ci:%zu", VAR_2->pid, VAR_2->callout_len);
}
