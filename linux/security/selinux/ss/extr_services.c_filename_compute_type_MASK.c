
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
typedef int u16 ;
struct policydb {int filename_trans; int filename_trans_ttypes; } ;
struct filename_trans_datum {int otype; } ;
struct filename_trans {char const* name; int tclass; void* ttype; void* stype; } ;
struct context {int type; } ;


 int FUNC_0 (int *,void*) ;
 struct filename_trans_datum* FUNC_1 (int ,struct filename_trans*) ;

__attribute__((used)) static void FUNC_2(struct policydb *VAR_0,
      struct context *VAR_1,
      u32 VAR_2, u32 VAR_3, u16 VAR_4,
      const char *VAR_5)
{
 struct filename_trans VAR_6;
 struct filename_trans_datum *VAR_7;






 if (!FUNC_0(&VAR_0->filename_trans_ttypes, VAR_3))
  return;

 VAR_6.stype = VAR_2;
 VAR_6.ttype = VAR_3;
 VAR_6.tclass = VAR_4;
 VAR_6.name = VAR_5;

 VAR_7 = FUNC_1(VAR_0->filename_trans, &VAR_6);
 if (VAR_7)
  VAR_1->type = VAR_7->otype;
}
