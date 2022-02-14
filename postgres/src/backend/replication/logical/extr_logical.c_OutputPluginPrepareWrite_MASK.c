
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct LogicalDecodingContext {int prepared_write; int write_xid; int write_location; int (* prepare_write ) (struct LogicalDecodingContext*,int ,int ,int) ;int accept_writes; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct LogicalDecodingContext*,int ,int ,int) ;

void
FUNC_2(struct LogicalDecodingContext *VAR_1, bool VAR_2)
{
 if (!VAR_1->accept_writes)
  FUNC_0(VAR_0, "writes are only accepted in commit, begin and change callbacks");

 VAR_1->prepare_write(VAR_1, VAR_1->write_location, VAR_1->write_xid, VAR_2);
 VAR_1->prepared_write = 1;
}
