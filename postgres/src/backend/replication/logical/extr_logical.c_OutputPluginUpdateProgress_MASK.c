
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct LogicalDecodingContext {int write_xid; int write_location; int (* update_progress ) (struct LogicalDecodingContext*,int ,int ) ;} ;


 int FUNC_0 (struct LogicalDecodingContext*,int ,int ) ;

void
FUNC_1(struct LogicalDecodingContext *VAR_0)
{
 if (!VAR_0->update_progress)
  return;

 VAR_0->update_progress(VAR_0, VAR_0->write_location, VAR_0->write_xid);
}
