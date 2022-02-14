
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int sequence_data; int enable_row_security; int include_everything; int lockWaitTimeout; int no_subscriptions; int no_security_labels; int no_publications; int no_comments; int dump_inserts; int disable_dollar_quoting; int use_setsessauth; int disable_triggers; int outputNoTablespaces; int outputNoOwner; int outputCreateDB; int outputSuperuser; int aclsSkip; int dumpSections; int column_inserts; int if_exists; int schemaOnly; int dataOnly; int outputClean; } ;
struct TYPE_6__ {int sequence_data; int enable_row_security; int include_everything; int lockWaitTimeout; int no_subscriptions; int no_security_labels; int no_publications; int no_comments; int dump_inserts; int disable_dollar_quoting; int use_setsessauth; int disable_triggers; int noTablespace; int noOwner; int createDB; int superuser; int aclsSkip; int dumpSections; int column_inserts; int if_exists; int schemaOnly; int dataOnly; int dropSchema; } ;
typedef TYPE_1__ RestoreOptions ;
typedef TYPE_2__ DumpOptions ;


 TYPE_2__* FUNC_0 () ;

DumpOptions *
FUNC_1(RestoreOptions *VAR_0)
{
 DumpOptions *VAR_1 = FUNC_0();


 VAR_1->outputClean = VAR_0->dropSchema;
 VAR_1->dataOnly = VAR_0->dataOnly;
 VAR_1->schemaOnly = VAR_0->schemaOnly;
 VAR_1->if_exists = VAR_0->if_exists;
 VAR_1->column_inserts = VAR_0->column_inserts;
 VAR_1->dumpSections = VAR_0->dumpSections;
 VAR_1->aclsSkip = VAR_0->aclsSkip;
 VAR_1->outputSuperuser = VAR_0->superuser;
 VAR_1->outputCreateDB = VAR_0->createDB;
 VAR_1->outputNoOwner = VAR_0->noOwner;
 VAR_1->outputNoTablespaces = VAR_0->noTablespace;
 VAR_1->disable_triggers = VAR_0->disable_triggers;
 VAR_1->use_setsessauth = VAR_0->use_setsessauth;
 VAR_1->disable_dollar_quoting = VAR_0->disable_dollar_quoting;
 VAR_1->dump_inserts = VAR_0->dump_inserts;
 VAR_1->no_comments = VAR_0->no_comments;
 VAR_1->no_publications = VAR_0->no_publications;
 VAR_1->no_security_labels = VAR_0->no_security_labels;
 VAR_1->no_subscriptions = VAR_0->no_subscriptions;
 VAR_1->lockWaitTimeout = VAR_0->lockWaitTimeout;
 VAR_1->include_everything = VAR_0->include_everything;
 VAR_1->enable_row_security = VAR_0->enable_row_security;
 VAR_1->sequence_data = VAR_0->sequence_data;

 return VAR_1;
}
